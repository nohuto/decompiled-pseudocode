/*
 * XREFs of CmpAllocatePostBlock @ 0x14093CDA8
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404B712C (Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAllocatePostBlock(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 Pool2; // rdi
  __int64 v10; // rdx
  ULONG_PTR v11; // rcx
  struct _KEVENT *v12; // rax
  int v13; // ebx
  __int64 v15; // rax
  _QWORD *v16; // rax

  if ( !(unsigned int)Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
    || (v8 = 0, ((a1 - 2) & 0xFFFFFFFD) == 0) )
  {
    v8 = 1;
  }
  Pool2 = ExAllocatePool2(v8 + 256LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 56) = a2 | a1;
    if ( ((a2 | a1) & 0x10000) != 0 )
    {
      *(_QWORD *)(Pool2 + 48) = 0LL;
      v10 = 256LL;
      if ( (unsigned int)(a1 - 3) > 1 )
        v10 = 64LL;
      v11 = (unsigned int)v10 | 1LL;
      if ( !v8 )
        v11 = v10;
      v12 = (struct _KEVENT *)ExAllocatePool2(v11);
      *(_QWORD *)(Pool2 + 64) = v12;
      if ( v12 )
      {
        v13 = a1 - 1;
        if ( v13 )
        {
          if ( v13 == 2 )
          {
            *(_OWORD *)&v12->Header.Lock = 0LL;
            v12->Header.WaitListHead.Blink = 0LL;
          }
        }
        else
        {
          KeInitializeEvent(v12, SynchronizationEvent, 0);
        }
        return Pool2;
      }
    }
    else
    {
      *(_QWORD *)(Pool2 + 64) = *(_QWORD *)(a4 + 64);
      v15 = ExAllocatePool2(v8 + 256LL);
      *(_QWORD *)(Pool2 + 48) = v15;
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = a3;
        v16 = *(_QWORD **)(Pool2 + 48);
        v16[1] = v16;
        *v16 = v16;
        return Pool2;
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return 0LL;
}
