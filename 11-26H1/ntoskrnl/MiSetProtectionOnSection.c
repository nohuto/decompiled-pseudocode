/*
 * XREFs of MiSetProtectionOnSection @ 0x1402E6E60
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x14099A540 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A03224 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiSectionProtectReturnCharges @ 0x140A86D54 (MiSectionProtectReturnCharges.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  __int128 v20; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-98h]
  _BYTE v22[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+60h] [rbp-78h]
  unsigned __int8 v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  int v27; // [rsp+90h] [rbp-48h]
  int v28; // [rsp+94h] [rbp-44h]
  char v29; // [rsp+A8h] [rbp-30h]
  int v30; // [rsp+C0h] [rbp-18h]

  memset_0(v22, 0, 0x78uLL);
  v26 = a2;
  v21 = 0LL;
  v27 = a5;
  v28 = a6;
  v20 = 0LL;
  v23 = a1;
  result = MiSectionProtectGetCharges(v22, a3, a4);
  if ( (int)result >= 0 )
  {
    v15 = v24;
    v25 = MiLockWorkingSetShared(v24, v13, v14);
    MiQueryAddressState(a3, a3, v25, a2, 0LL, &v20);
    MiSectionProtectAllPtes((__int64)v22);
    MiUnlockWorkingSetShared(v15, v25);
    if ( v29 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 608), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 608);
      KeAbPostRelease(a1 + 608);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v18, v17);
      }
    }
    v19 = v30 == 0;
    *a7 = MmProtectToValue[DWORD2(v20)];
    if ( !v19 )
      *a8 = 1;
    MiSectionProtectReturnCharges(v22);
    return 0LL;
  }
  return result;
}
