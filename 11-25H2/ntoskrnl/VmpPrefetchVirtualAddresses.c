/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x14042AA98
 * Callers:
 *     VmPrefetchVirtualAddresses @ 0x14078F308 (VmPrefetchVirtualAddresses.c)
 *     VmpPrefetchWorker @ 0x140790190 (VmpPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     VmpProcessContextLockShared @ 0x14042BCD8 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x14042BD24 (VmpProcessContextUnlockShared.c)
 *     VmpFillGpnRanges @ 0x14042C2FC (VmpFillGpnRanges.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchVirtualAddresses(PEX_SPIN_LOCK SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  void *Pool2; // r14
  _QWORD *v10; // r15
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  unsigned __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+58h]

  if ( *((_QWORD *)SpinLock + 13) == -1LL || !ExGetExtensionTable(VmpExtensionHost) )
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
      v11 = VmpProcessContextLockShared(SpinLock);
      v20 = v11;
      while ( a2 < v10 )
      {
        v12 = *a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        v15 = *a2 >> 12;
        v16 = (v12 >> 12) - v15;
        while ( v16 )
        {
          VmpFillGpnRanges((_DWORD)SpinLock, (unsigned int)&v15, (_DWORD)Pool2, (unsigned int)&v19, v8, (__int64)&v17);
          v7 = v19;
          if ( v19 < v8 )
          {
            v11 = v20;
          }
          else
          {
            v14 = *((_QWORD *)SpinLock + 9);
            VmpProcessContextUnlockShared(SpinLock, v20);
            v6 = guard_dispatch_icall_no_overrides(Pool2, v7);
            if ( v6 < 0 )
              goto LABEL_21;
            v7 = 0LL;
            v19 = 0LL;
            v11 = VmpProcessContextLockShared(SpinLock);
            v20 = v11;
            if ( v14 != *((_QWORD *)SpinLock + 9) )
            {
              v17 = 0LL;
              v18 = 0LL;
            }
          }
        }
        a2 += 2;
      }
      VmpProcessContextUnlockShared(SpinLock, v11);
      if ( !v7 || (v6 = guard_dispatch_icall_no_overrides(Pool2, v7), v6 >= 0) )
        v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_21:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(VmpExtensionHost + 88));
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v6;
}
