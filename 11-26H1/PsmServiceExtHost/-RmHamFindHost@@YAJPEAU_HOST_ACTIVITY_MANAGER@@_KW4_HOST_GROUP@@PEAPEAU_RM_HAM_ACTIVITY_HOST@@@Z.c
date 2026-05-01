/*
 * XREFs of ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029658
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180046760 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180064C54 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     BiHamExtHostQueryResourceUsage @ 0x180066730 (BiHamExtHostQueryResourceUsage.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180066F48 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007954C (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18007A8E0 (-HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B3F4 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007DC10 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180082EE8 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall RmHamFindHost(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rbp
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  int v12; // edi
  __int64 v13; // r9
  int v14; // r8d

  v4 = a1 - 2328;
  v9 = 0LL;
  RtlAcquireSRWLockShared(a1 - 2328);
  v10 = -1LL << (*(_DWORD *)(a1 - 2340) & 0x1F);
  v11 = 0LL;
  v12 = -1073741275;
  v13 = v10 & (HIBYTE(a2)
             + 37
             * (BYTE6(a2)
              + 37
              * (BYTE5(a2)
               + 37
               * (BYTE4(a2)
                + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v11 )
    goto LABEL_5;
  v14 = *(_DWORD *)(a1 - 2340) >> 5;
  if ( v14 )
  {
    v11 = *(_QWORD *)(a1 - 2336)
        + 8LL
        * ((v14 - 1) & (HIBYTE(v13)
                      - 877075889
                      + 442596621 * (unsigned __int8)v13
                      + 37
                      * (BYTE6(v13)
                       + 37
                       * (BYTE5(v13)
                        + 37 * (BYTE4(v13) + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (unsigned int)BYTE1(v13))))))));
LABEL_5:
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v13 == (v10 & *(_QWORD *)(v11 + 8)) )
      {
        if ( !v11 )
          break;
        if ( a2 == *(_QWORD *)(v11 + 32) )
        {
          v12 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = v11;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v9 + 648) == a3 || a3 == 2 )
    {
      RmpAcquireGlobalLock();
      if ( *(int *)((v9 & -(__int64)(v9 != -56)) + 0x18) < 0 )
      {
        v12 = -1073741275;
      }
      else
      {
        ++*(_QWORD *)(v9 + 656);
        v12 = 0;
        *a4 = v9 + 56;
      }
      RmpReleaseGlobalLock();
    }
    else
    {
      v12 = -1073741776;
    }
    if ( v9 )
      RmpObjectRelease((char *)v9);
  }
  return (unsigned int)v12;
}
