/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x140494D38
 * Callers:
 *     VmPrefetchVirtualAddresses @ 0x14077A3E8 (VmPrefetchVirtualAddresses.c)
 *     VmpPrefetchWorker @ 0x140823210 (VmpPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     VmpFillGpnRanges @ 0x140494F58 (VmpFillGpnRanges.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchVirtualAddresses(PEX_SPIN_LOCK SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  void *Pool2; // rsi
  _QWORD *v10; // r12
  KIRQL v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  unsigned __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 ExtensionTable; // [rsp+C8h] [rbp+58h]

  if ( *((_QWORD *)SpinLock + 15) == -1LL || (ExtensionTable = ExGetExtensionTable(stru_140F06A28.StackLimit)) == 0 )
  {
    return (unsigned int)-1073741667;
  }
  else
  {
    v7 = 0LL;
    v19 = 0LL;
    v8 = a3;
    if ( a3 >= 0x2000 )
      v8 = 0x2000LL;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v10 = &a2[2 * a3];
      v18 = 0LL;
      v17 = 0LL;
      v11 = ExAcquireSpinLockShared(SpinLock);
      while ( a2 < v10 )
      {
        v12 = *a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        v15 = *a2 >> 12;
        v16 = (v12 >> 12) - v15;
        while ( v16 )
        {
          VmpFillGpnRanges((_DWORD)SpinLock, (unsigned int)&v15, (_DWORD)Pool2, (unsigned int)&v19, v8, (__int64)&v17);
          v7 = v19;
          if ( v19 >= v8 )
          {
            v14 = *((_QWORD *)SpinLock + 11);
            ExReleaseSpinLockShared(SpinLock, v11);
            v6 = guard_dispatch_icall_no_overrides(Pool2, v7);
            if ( v6 < 0 )
              goto LABEL_20;
            v7 = 0LL;
            v19 = 0LL;
            v11 = ExAcquireSpinLockShared(SpinLock);
            if ( v14 != *((_QWORD *)SpinLock + 11) )
            {
              v17 = 0LL;
              v18 = 0LL;
            }
          }
        }
        a2 += 2;
      }
      ExReleaseSpinLockShared(SpinLock, v11);
      if ( !v7 || (v6 = guard_dispatch_icall_no_overrides(Pool2, v7), v6 >= 0) )
        v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_20:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)stru_140F06A28.StackLimit + 11);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v6;
}
