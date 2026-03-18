/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140087A68 (DrvGetCurrentDpiInfoFromHDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     GreReinitializeStockFonts @ 0x14018F9B0 (GreReinitializeStockFonts.c)
 *     SetDpiSetting @ 0x140194F08 (SetDpiSetting.c)
 *     GetDpiSetting @ 0x140196928 (GetDpiSetting.c)
 *     GreReinitializeDpiSetting @ 0x1401A4D90 (GreReinitializeDpiSetting.c)
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 *     _SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString @ 0x1401C5C44 (_SetDPIinSetup_--_2_--CleanupUnicodeString--_CleanupUnicodeString.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  unsigned int v1; // edi
  char v3; // si
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r8d
  int updated; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rcx
  int (*v18)(void); // rax
  int (*v19)(void); // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rcx
  int (__fastcall *v24)(__int64, bool); // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rbx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rcx
  struct _MDEV *v36; // rbx
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rcx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rax
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rcx
  int v47; // edx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v51; // edx
  __int64 v52; // rcx
  int v53; // r8d
  __int64 v54; // rbx
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // edx
  int v59; // r8d
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+A0h] [rbp-70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-28h]
  int v68; // [rsp+F0h] [rbp-20h]
  __int64 v69; // [rsp+F8h] [rbp-18h]
  __int64 v70; // [rsp+100h] [rbp-10h]
  int v71; // [rsp+108h] [rbp-8h]
  __int64 v72; // [rsp+110h] [rbp+0h]
  int v73; // [rsp+118h] [rbp+8h]
  _BYTE v74[8]; // [rsp+120h] [rbp+10h] BYREF
  __int64 v75; // [rsp+128h] [rbp+18h]
  _DWORD v76[32]; // [rsp+130h] [rbp+20h] BYREF
  __int64 p_DestinationString; // [rsp+1C8h] [rbp+B8h] BYREF
  int v78; // [rsp+1D0h] [rbp+C0h] BYREF
  struct _MDEV *v79; // [rsp+1D8h] [rbp+C8h] BYREF

  v1 = 0;
  QueryTable.Flags = 292;
  v78 = 0;
  QueryTable.Name = L"ImageState";
  v79 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  v73 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  p_DestinationString = (__int64)&DestinationString;
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
    QueryTable.EntryContext = &v78;
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
    memset(v76, 0, 0x60uLL);
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    if ( (int)DrvGetCurrentDpiInfoFromHDev(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL) + 80LL),
                (__int64)v76) < 0 )
      goto LABEL_5;
    if ( !(unsigned int)PreAllocateForPrimaryMonitorChange(v10, v9, v11) )
    {
      v1 = -1073741823;
LABEL_5:
      SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(&p_DestinationString);
      return v1;
    }
    updated = 0;
    v14 = 96 * v76[2] + 50;
    v15 = v14 / 0x64;
    *(_DWORD *)(W32GetUserSessionState(v14, (1374389535 * (unsigned __int64)v14) >> 32, v12) + 68404) = 1;
    v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 48);
    v18 = *(int (**)(void))(v17 + 2704);
    if ( v18 && v18() >= 0 )
      GetDpiSetting(1LL, &v78);
    if ( v78 != v15 )
    {
      v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48) + 2736LL);
      if ( v19 )
      {
        if ( v19() >= 0 && (int)SetDpiSetting(v20, v15) >= 0 )
        {
          v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21) + 48) + 2720LL);
          if ( v22 )
          {
            if ( v22() >= 0 )
            {
              v24 = *(int (__fastcall **)(__int64, bool))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 2728LL);
              if ( v24 )
              {
                if ( v24(1LL, v15 > 0x78) >= 0 )
                {
                  LOBYTE(p_DestinationString) = 0;
                  GreReinitializeDpiSetting();
                  v28 = W32GetUserSessionState(v26, v25, v27);
                  if ( (int)DrvSetDisplayConfig(
                              0,
                              0,
                              2191,
                              0,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              *(struct _MDEV **)(*(_QWORD *)(v28 + 56968) + 16LL),
                              &v79,
                              0LL,
                              0LL,
                              (__int64)&p_DestinationString,
                              0LL,
                              0LL,
                              (__int64)a1,
                              0LL) >= 0 )
                  {
                    if ( !(_BYTE)p_DestinationString )
                    {
                      GreReinitializeStockFonts(v15, 1LL);
                      v31 = *(_QWORD *)v79;
                      v35 = *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 56968);
                      *(_QWORD *)(v35 + 40) = v31;
                      v36 = v79;
                      v39 = *(_QWORD *)(W32GetUserSessionState(v35, v37, v38) + 56968);
                      *(_QWORD *)(v39 + 16) = v36;
                      v42 = W32GetUserSessionState(v39, v40, v41);
                      GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(v42 + 56968) + 40LL));
                      v46 = *(_QWORD *)(W32GetUserSessionState(v44, v43, v45) + 19904);
                      *(_WORD *)(v46 + 6998) = v15;
                      v49 = *(_QWORD *)(W32GetUserSessionState(v46, v47, v48) + 19904);
                      ++*(_WORD *)(v49 + 7014);
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v49);
                      v54 = CurrentProcessWin32Process;
                      if ( CurrentProcessWin32Process )
                      {
                        v52 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
                        v54 = v52 & CurrentProcessWin32Process;
                      }
                      *(_WORD *)(v54 + 272) = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v52, v51, v53) + 19904)
                                                       + 6998LL);
                    }
                    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v74, v29, v30);
                    updated = zzzUpdateUserScreen(v56, v55, v57);
                    if ( v74[0] )
                      --*(_DWORD *)(v75 + 28);
                    gbSetDPIinSetupChangedDisplaySettings = 1;
                    if ( updated < 0 )
                    {
                      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                      {
                        v3 = 0;
                      }
                      v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v61 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v58, v59);
                        LOBYTE(v62) = v60;
                        LOBYTE(v63) = v3;
                        WPP_RECORDER_AND_TRACE_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v63,
                          v62,
                          *(_QWORD *)(v61 + 69136),
                          2,
                          14,
                          23,
                          (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
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
    if ( DestinationString.Buffer )
      RtlFreeUnicodeString(&DestinationString);
    return (unsigned int)updated;
  }
}
