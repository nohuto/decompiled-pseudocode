/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x14008A304 (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     GreUpdateSharedDevCaps @ 0x1401216C0 (GreUpdateSharedDevCaps.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     GreReinitializeStockFonts @ 0x140150400 (GreReinitializeStockFonts.c)
 *     GetDpiSetting @ 0x1401583EC (GetDpiSetting.c)
 *     _SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString @ 0x1401A1E60 (_SetDPIinSetup_--_2_--CleanupUnicodeString--_CleanupUnicodeString.c)
 *     GreReinitializeDpiSetting @ 0x1401CFFE0 (GreReinitializeDpiSetting.c)
 *     SetDpiSetting @ 0x14023F2A8 (SetDpiSetting.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  unsigned int v1; // edi
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int updated; // ebx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int (*v18)(void); // rax
  int (*v19)(void); // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int (__fastcall *v26)(__int64, bool); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct _MDEV *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  bool v51; // r14
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-80h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-70h] BYREF
  UNICODE_STRING String2; // [rsp+A8h] [rbp-68h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-18h]
  int v60; // [rsp+100h] [rbp-10h]
  __int64 v61; // [rsp+108h] [rbp-8h]
  __int64 v62; // [rsp+110h] [rbp+0h]
  int v63; // [rsp+118h] [rbp+8h]
  __int64 v64; // [rsp+120h] [rbp+10h]
  int v65; // [rsp+128h] [rbp+18h]
  _BYTE v66[16]; // [rsp+130h] [rbp+20h] BYREF
  _DWORD v67[32]; // [rsp+140h] [rbp+30h] BYREF
  char v68; // [rsp+1D8h] [rbp+C8h] BYREF
  int v69; // [rsp+1E0h] [rbp+D0h] BYREF
  struct _MDEV *v70; // [rsp+1E8h] [rbp+D8h] BYREF

  v1 = 0;
  QueryTable.Flags = 292;
  v69 = 0;
  QueryTable.Name = L"ImageState";
  v70 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v59 = 0LL;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v65 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  p_DestinationString = &DestinationString;
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
  {
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    if ( DestinationString.Buffer )
      RtlFreeUnicodeString(&DestinationString);
    return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
    v3 = 1;
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
    {
      RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
      if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        RtlDeleteRegistryValue(
          0,
          L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
          L"Overrode");
      goto LABEL_5;
    }
    QueryTable.Flags |= 0x80u;
    QueryTable.Name = L"Upgrade";
    QueryTable.EntryContext = &v69;
    if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
      goto LABEL_5;
    QueryTable.Name = L"Overrode";
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
           &QueryTable,
           0LL,
           0LL) >= 0 )
      goto LABEL_5;
    memset(v67, 0, 0x60uLL);
    UserSessionState = W32GetUserSessionState(v6, v5);
    if ( (int)DrvGetCurrentDpiInfoFromHDev(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 104LL) + 80LL),
                (__int64)v67) < 0 )
      goto LABEL_5;
    if ( !(unsigned int)PreAllocateForPrimaryMonitorChange(v9, v8) )
    {
      v1 = -1073741823;
LABEL_5:
      SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(&p_DestinationString);
      return v1;
    }
    updated = 0;
    v12 = (unsigned int)(96 * v67[2] + 50);
    LODWORD(v10) = (1374389535 * (unsigned __int64)(unsigned int)v12) >> 32;
    v13 = (unsigned int)v12 / 0x64;
    *(_DWORD *)(W32GetUserSessionState(v12, v10) + 68412) = 1;
    v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48);
    v18 = *(int (**)(void))(v17 + 3104);
    if ( v18 && v18() >= 0 )
      GetDpiSetting(1LL, (__int64)&v69);
    if ( v69 != v13 )
    {
      v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 3136LL);
      if ( v19 )
      {
        if ( v19() >= 0 && (int)SetDpiSetting(v20, v13) >= 0 )
        {
          v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 3120LL);
          if ( v23 )
          {
            if ( v23() >= 0 )
            {
              v26 = *(int (__fastcall **)(__int64, bool))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48)
                                                        + 3128LL);
              if ( v26 )
              {
                if ( v26(1LL, v13 > 0x78) >= 0 )
                {
                  v68 = 0;
                  GreReinitializeDpiSetting();
                  v29 = W32GetUserSessionState(v28, v27);
                  if ( (int)DrvSetDisplayConfig(
                              0,
                              0LL,
                              0x88Fu,
                              0,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              *(struct _MDEV **)(*(_QWORD *)(v29 + 56968) + 16LL),
                              &v70,
                              0LL,
                              0LL,
                              &v68,
                              0LL,
                              0LL,
                              (__int64)a1,
                              0LL) >= 0 )
                  {
                    if ( !v68 )
                    {
                      GreReinitializeStockFonts(v13, 1LL);
                      v30 = *(_QWORD *)v70;
                      v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 56968);
                      *(_QWORD *)(v33 + 48) = v30;
                      v34 = v70;
                      v36 = *(_QWORD *)(W32GetUserSessionState(v33, v35) + 56968);
                      *(_QWORD *)(v36 + 16) = v34;
                      v38 = W32GetUserSessionState(v36, v37);
                      GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(v38 + 56968) + 48LL));
                      v41 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 19872);
                      *(_WORD *)(v41 + 6998) = v13;
                      v43 = *(_QWORD *)(W32GetUserSessionState(v41, v42) + 19872);
                      ++*(_WORD *)(v43 + 7014);
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
                      v47 = CurrentProcessWin32Process;
                      if ( CurrentProcessWin32Process )
                      {
                        v46 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
                        v47 = v46 & CurrentProcessWin32Process;
                      }
                      *(_WORD *)(v47 + 272) = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v46, v45) + 19872) + 6998LL);
                    }
                    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v66);
                    updated = zzzUpdateUserScreen(v49, v48);
                    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v66);
                    gbSetDPIinSetupChangedDisplaySettings = 1;
                    if ( updated < 0 )
                    {
                      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                      {
                        v3 = 0;
                      }
                      v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v52 = W32GetUserSessionState(v50, WPP_GLOBAL_Control);
                        LOBYTE(v53) = v51;
                        LOBYTE(v54) = v3;
                        WPP_RECORDER_AND_TRACE_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v54,
                          v53,
                          *(_QWORD *)(v52 + 69144),
                          2,
                          14,
                          23,
                          (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
                          updated);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(&p_DestinationString);
    return (unsigned int)updated;
  }
}
