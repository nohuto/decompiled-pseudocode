/*
 * XREFs of ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1401981C0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__&DrvSampleDisplayState_ @ 0x1401B8E54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__-D.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401F8180 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DispBrokerChangeDisplaySettings(
        struct _LUID a1,
        int a2,
        struct _devicemodeW *a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        bool a6,
        enum _DXGK_DIAG_CDS_STAGE *a7)
{
  enum _DXGK_DIAG_CDS_STAGE *v7; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[5]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v37[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[320]; // [rsp+110h] [rbp+10h] BYREF
  int v39; // [rsp+298h] [rbp+198h] BYREF
  struct _devicemodeW *v40; // [rsp+2A0h] [rbp+1A0h] BYREF

  v40 = a3;
  v39 = a2;
  v7 = a7;
  v9 = a5;
  v31 = a1;
  v30 = a4;
  *(_DWORD *)a7 = 0;
  memset(v38, 0, sizeof(v38));
  UserSessionState = W32GetUserSessionState(v11, v10, v12);
  DisplayScenarioJournalBegin((a4 & 0x10000002) != 0 ? 79 : 143, 32LL, *(unsigned __int16 *)(UserSessionState + 68744));
  v35[0] = &a6;
  v35[1] = &v30;
  v35[2] = &v31;
  v35[3] = &v39;
  v35[4] = &v40;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072___DrvSampleDisplayState_(
    v38,
    v9,
    v35);
  memset(v37, 0, 0x58uLL);
  v33 = 88LL;
  v17 = *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 57008);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34, v18);
  v32 = *(_QWORD *)(v17 + 16);
  v19 = (unsigned __int64)&v32 & -(__int64)(v32 != 0);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v21, v20);
  LODWORD(v19) = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _DWORD *, __int64 *, _QWORD, unsigned __int64))(DxgkWin32kInterface + 760))(
                   1179648LL,
                   v38,
                   0LL,
                   v37,
                   &v33,
                   0LL,
                   v19);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34, v23, v24, v25);
  if ( (v19 & 0x80000000) == 0LL )
  {
    v26 = v37[20];
    v27 = v37[21];
  }
  else
  {
    v26 = -1;
    v27 = 11;
  }
  v28 = v30;
  *(_DWORD *)v7 = v27;
  v36[4] = v27;
  v36[0] = 0;
  v36[1] = 20;
  v36[2] = v28;
  v36[3] = v26;
  DisplayScenarioJournalSetSpecializedData(v36);
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(v9, v26);
  return v26;
}
