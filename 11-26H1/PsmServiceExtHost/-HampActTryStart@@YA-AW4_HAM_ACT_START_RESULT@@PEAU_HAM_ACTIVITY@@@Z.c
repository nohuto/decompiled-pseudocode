/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750
 * Callers:
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025520 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005AE30 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009E30 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18000C380 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18000C470 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampAppGetLicenseState@@YA?AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z @ 0x18000C550 (-HampAppGetLicenseState@@YA-AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000FCF0 (-HampActGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003ECF0 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180040204 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180040B0C (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18005E86C (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006372C (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  struct _RM_SERVICE_GLOBALS *v6; // rcx
  char v7; // al
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int128 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  int v19; // [rsp+A0h] [rbp+8h] BYREF
  int v20; // [rsp+A8h] [rbp+10h] BYREF
  int v21; // [rsp+B0h] [rbp+18h]
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v20 = 0;
  v19 = 0;
  v15 = 0LL;
  v21 = 0;
  v16 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (*(_QWORD *)(v1 + 664) & 0x10000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 15;
  if ( HampSessionGetLogoffInProgress(*(struct _HAM_SESSION **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL)
                                                                          + 88LL)
                                                              + 160LL))
    || HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL) + 88LL)) )
  {
    return 7LL;
  }
  if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 552) & 0x300u) >= 0x100 )
    return 5LL;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)&v20,
    (union _RM_OPTIMIZATION_STATE *)&v19);
  if ( ((v20 & 8) != 0 || (v19 & 8) != 0) && (*(_QWORD *)(v1 + 664) & 0x80000000000LL) != 0 )
    return 9LL;
  if ( *(_BYTE *)(a1 + 563) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 16LL);
    v4 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 2;
    HampHostUpdateActivityState(v4);
  }
  if ( (int)HampAppGetLicenseState(*(_QWORD *)(v1 + 792)) < ((*(_DWORD *)(a1 + 112) >> 23) & 3) )
    return 10LL;
  if ( *(_BYTE *)(a1 + 563) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 24LL);
    v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 3;
    HampHostUpdateActivityState(v5);
  }
  if ( (*(_BYTE *)(a1 + 552) & 0x20) == 0 && (int)HampActGetExecutionSpeed(a1) >= 2 )
  {
    if ( (*(_QWORD *)(v1 + 664) & 0x2000000000000LL) != 0 )
    {
      if ( HampHostIsResumed((struct _RM_HAM_ACTIVITY_HOST *)v1) )
        goto LABEL_15;
      v14 = 500;
    }
    else
    {
      v14 = 2000;
    }
    *(_DWORD *)(a1 + 552) |= 0x20u;
    if ( (int)RmpPowerBoostStartTimedBoost(v6, v14) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
LABEL_15:
  v7 = v19;
  if ( (*(_DWORD *)(a1 + 112) & 0x400) != 0 && (v19 & 0x80u) != 0 && (v20 & 0x80u) == 0 )
    return 12;
  if ( *(_BYTE *)(a1 + 563) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 32LL);
    v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 4;
    HampHostUpdateActivityState(v8);
    v7 = v19;
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x1800) == 0 )
  {
    if ( (*(_DWORD *)(v1 + 664) & 0x30000) != 0 )
      return 11;
    if ( v7 < 0 )
      return 12;
  }
  if ( *(_BYTE *)(a1 + 563) < 5u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 40LL);
    v9 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 5;
    HampHostUpdateActivityState(v9);
  }
  v10 = *(_QWORD *)(a1 + 512);
  if ( v10 && v10 != *(_QWORD *)(v1 + 808) )
  {
    HampActInvalidateAndNotify(a1, 0LL);
    return 8LL;
  }
  v11 = *(_DWORD *)(a1 + 112);
  if ( (v11 & 0x400) != 0 )
  {
    if ( (v20 & 0x80u) != 0 )
      return 13LL;
  }
  else if ( (v11 & 0x800) != 0
         && (((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 664LL) & 0xE0000000) - 0x80000000LL) & 0xFFFFFFFFDFFFFFFFuLL) == 0 )
  {
    HampActInvalidateAndNotify(a1, 6912LL);
    return 3;
  }
  if ( (unsigned int)HampHostNeedsEnforcementUpdate((struct _RM_HAM_ACTIVITY_HOST *)v1)
    && (*(_DWORD *)(a1 + 112) & 0x1000) == 0 )
  {
    return 14LL;
  }
  if ( *(_DWORD *)(a1 + 380) == 5 )
  {
LABEL_28:
    HampActStart((struct _HAM_ACTIVITY *)a1);
    return v2;
  }
  v13 = *(_QWORD *)(a1 + 32);
  DWORD1(v15) = *(_DWORD *)(a1 + 384);
  *(_QWORD *)&v16 = a1 + 124;
  LODWORD(v15) = 1;
  if ( (int)HampSystemActivationClientActivate(*(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFCuLL) + 152), &v15, a1) >= 0 )
  {
    *(_QWORD *)(a1 + 504) = v22;
    goto LABEL_28;
  }
  HampActInvalidateAndNotify(a1, 6912LL);
  return 2LL;
}
