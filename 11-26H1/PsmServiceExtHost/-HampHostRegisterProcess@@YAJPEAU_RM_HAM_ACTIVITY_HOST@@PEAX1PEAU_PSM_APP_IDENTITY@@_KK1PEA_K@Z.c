/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4
 * Callers:
 *     PsmHamRegisterProcess @ 0x18000F2D0 (PsmHamRegisterProcess.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D45C (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18001B7D8 (CempLockSleepConditionVariableExclusive.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005CA70 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180062A70 (-HampSystemRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HampHostChangeAppTerminateReason@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180062C10 (-HampHostChangeAppTerminateReason@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006EAE4 (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8)
{
  int v11; // r15d
  int v12; // edi
  int UnbiasedInterruptTimeMs64; // ebp
  unsigned int i; // ecx
  unsigned int v15; // edx
  int v16; // esi
  char v17; // di
  unsigned int v18; // ebp
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  void *v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v24 = 0LL;
  v11 = 0;
  v12 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    for ( i = 0; i <= 0xEA60; i = CempQueryUnbiasedInterruptTimeMs64() - UnbiasedInterruptTimeMs64 )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        break;
      if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) != 0 )
        break;
      v24 = -10000LL * (60000 - i);
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 16, (__int64)&v24);
    }
  }
  HampHostStartProcessPresenceChange(a1);
  v15 = a6;
  *a8 = *((_QWORD *)a1 + 101);
  if ( HampHostCanRegisterProcess(a1, v15) )
  {
    if ( *((_BYTE *)a1 + 592) == 1 && (*((_QWORD *)a1 + 83) & 0x2000000000000LL) == 0 )
      *((_DWORD *)a1 + 210) = -1;
    if ( *((_DWORD *)a1 + 210) == -1
      || *((_QWORD *)a1 + 104)
      || (v16 = TpAllocTimer((char *)a1 + 832, HampHostCacheTimeoutCallback, a1, 0LL), v16 >= 0) )
    {
      v17 = ~(*((_QWORD *)a1 + 83) >> 49);
      HampHostReleaseLockExclusive(a1);
      v12 = v17 & 1;
      if ( v12 )
      {
        RmpAcquireGlobalLock();
        RmHamHostReference(a1);
        RmpReleaseGlobalLock();
        HampHostUpdateUsageInfoProcesses(a1);
      }
      v18 = a6 & 0xFFFFFFFE;
      if ( a7 )
        v18 = a6;
      v16 = HampSystemRegisterProcess(a1, v25, a3, a4, a5, v18, a7);
      if ( v16 >= 0 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        v19 = *((_QWORD *)a1 + 84);
        v20 = 1LL;
        v21 = 2LL;
        do
        {
          v19 |= v20++;
          --v21;
        }
        while ( v21 );
        *((_QWORD *)a1 + 84) = v19;
        HampHostChangeAppTerminateReason((__int64)a1, 6912);
        if ( !HampHostCanRegisterProcess(a1, v18) )
        {
          LODWORD(a8) = 0;
          HampHostQueueTerminateEx(v22, 3, 0x900u, 0LL, 1, 0, 0LL, (unsigned int *)&a8);
          v11 = (int)a8;
        }
        *((_QWORD *)a1 + 83) |= 0x80000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        *((_QWORD *)a1 + 83) |= 0x2000000000000uLL;
        v16 = 0;
      }
      else
      {
        if ( v12 )
          RmHamHostDereference(a1);
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
    }
  }
  else
  {
    v16 = -1058275325;
  }
  *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 696);
  HampHostReleaseLockExclusive(a1);
  if ( v12 )
    HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
  return (unsigned int)v16;
}
