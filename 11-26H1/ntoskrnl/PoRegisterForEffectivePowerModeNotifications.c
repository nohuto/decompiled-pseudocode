/*
 * XREFs of PoRegisterForEffectivePowerModeNotifications @ 0x1407D24A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1409FD2E0 (ExUnsubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoRegisterForEffectivePowerModeNotifications(int a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  _QWORD *v13; // rdi
  unsigned int v14; // esi
  struct _KTHREAD *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rbp
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 1 && a2 && a4 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v13 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v15 = (struct _KTHREAD *)(Pool2 + 40);
      *(_QWORD *)(Pool2 + 48) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)(Pool2 + 40), v10, v11, v12);
      v13[1] = a5;
      *(_DWORD *)v13 = a1;
      v13[10] = a3;
      *((_DWORD *)v13 + 4) = -1;
      *((_DWORD *)v13 + 8) = -1122885;
      v13[7] = a2;
      v16 = ExSubscribeWnfStateChange(
              (unsigned int)&v19,
              (unsigned int)&WNF_PO_EFFECTIVE_POWER_MODE,
              1,
              0,
              (__int64)&PopWnfEffectivePowerModeCallback,
              (__int64)v13);
      v17 = v19;
      v13[3] = v19;
      v14 = v16;
      *a4 = v13;
      PopReleaseRwLock(v15);
      if ( v14 )
      {
        if ( v17 )
          ExUnsubscribeWnfStateChange(v17);
        ExFreePoolWithTag(v13, 0x74655350u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v14;
}
