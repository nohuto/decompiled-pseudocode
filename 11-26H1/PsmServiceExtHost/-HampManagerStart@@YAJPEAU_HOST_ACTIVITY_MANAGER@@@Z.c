/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C270
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800805F8 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18002A908 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002B3F0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18005AB20 (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007F58C (-HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x18008BA30 (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  int PolicyInfo; // ecx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  _QWORD v8[4]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v9[384]; // [rsp+60h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v9);
  PolicyInfo = RtlSubscribeWnfStateChangeNotification(
                 (char *)a1 + 512,
                 WNF_EDP_DPL_KEYS_STATE,
                 0LL,
                 HampManagerDplKeyStateChangedCallback,
                 a1,
                 0LL,
                 0,
                 0);
  if ( PolicyInfo >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      PolicyInfo = RtlSubscribeWnfStateChangeNotification(
                     (char *)a1 + 8 * v3 + 560,
                     qword_1800E1B58[v3],
                     0LL,
                     HampManagerSystemStateChanged,
                     a1,
                     0LL,
                     0,
                     0);
      if ( PolicyInfo < 0 )
        break;
      if ( ++v3 >= 2 )
      {
        HampSlsStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 600));
        v8[0] = 1LL;
        v8[3] = HampPdcPlmControlCallback;
        v8[2] = 0LL;
        v8[1] = HampPdcPlmPhaseNotificationCallback;
        v5 = HampSystemNotificationClientRegister(v4, v8, (char *)a1 + 576, (char *)a1 + 584);
        PolicyInfo = 0;
        if ( v5 < 0 )
          PolicyInfo = v5;
        if ( PolicyInfo >= 0 )
        {
          v6 = 0LL;
          while ( 1 )
          {
            PolicyInfo = RtlSubscribeWnfStateChangeNotification(
                           (char *)a1 + 8 * v6 + 520,
                           (&HamOplockWatchStateNames)[v6],
                           0LL,
                           HampOplockCallback,
                           a1,
                           0LL,
                           0,
                           0);
            if ( PolicyInfo < 0 )
              break;
            v6 = (unsigned int)(v6 + 1);
            if ( (unsigned int)v6 >= 4 )
            {
              PolicyInfo = HampSystemQueryPolicyInfo(a1, L"UiPausing", (struct ExecutionModel::_ResourceSetInfo *)v9);
              if ( PolicyInfo >= 0 )
              {
                HampRmPopulateExternalResourceAccessData(
                  (struct ExecutionModel::_ResourceSetInfo *)v9,
                  (ULONG *)a1 + 234);
                return 0;
              }
              return (unsigned int)PolicyInfo;
            }
          }
        }
        return (unsigned int)PolicyInfo;
      }
    }
  }
  return (unsigned int)PolicyInfo;
}
