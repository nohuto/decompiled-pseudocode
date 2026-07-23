/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x1406D57A8
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, struct _LIST_ENTRY **a5)
{
  struct _LIST_ENTRY **v5; // r15
  int v9; // eax
  int v10; // ebx
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v18 = 0;
  a5 = 0LL;
  *v5 = 0LL;
  v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !a5 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (struct _LIST_ENTRY *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_QWORD *)(Pool2 + 24) = a1;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_DWORD *)(Pool2 + 36) = 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    v13 = *(_QWORD *)(Pool2 + 48);
    *(_QWORD *)(Pool2 + 168) = Pool2 + 192;
    v10 = guard_dispatch_icall_no_overrides(v13, a5);
    if ( v10 >= 0 )
    {
      if ( v12[4].Blink )
      {
        v10 = guard_dispatch_icall_no_overrides(v12[3].Flink, &v18);
        if ( v10 >= 0 )
        {
          if ( (v18 & 1) != 0
            && (v18 & 2) != 0
            && (v18 & 4) != 0
            && (unsigned int)(1 << (v18 >> 3)) >= LODWORD(ExSaPageGroupDescriptorArrayLock.Timer.Dpc) )
          {
            _InterlockedAdd(&ExTbFlushActive, 1u);
            v10 = guard_dispatch_icall_no_overrides(a2, v12[10].Blink);
            if ( v10 >= 0 )
            {
              v10 = guard_dispatch_icall_no_overrides(v12[3].Flink, &v18);
              if ( v10 >= 0 )
              {
                guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), v14);
                Blink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
                if ( (unsigned __int8 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink->Blink != &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
                  __fastfail(3u);
                v12->Flink = ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
                v12->Blink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
                Blink->Blink = v12;
                ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink = v12;
                *v5 = v12;
                return (unsigned int)v10;
              }
            }
            else
            {
              _InterlockedDecrement(&ExTbFlushActive);
            }
          }
          else
          {
            v10 = -1073741585;
          }
        }
      }
      else
      {
        v10 = -1073741637;
      }
    }
    Flink = v12[11].Flink;
    if ( Flink )
    {
      guard_dispatch_icall_no_overrides(a2, Flink);
      _InterlockedDecrement(&ExTbFlushActive);
    }
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
