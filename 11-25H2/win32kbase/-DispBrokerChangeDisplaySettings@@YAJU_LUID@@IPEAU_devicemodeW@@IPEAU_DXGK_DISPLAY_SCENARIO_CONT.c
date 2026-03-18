/*
 * XREFs of ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x140029D18
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A038 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A15C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     DrvSampleDisplayState @ 0x14002B4D0 (DrvSampleDisplayState.c)
 *     _lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator() @ 0x1401AB904 (_lambda_7dc7c0424fbefd701d9ba3d1e39eb072_--operator().c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CE840 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
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
  enum _DXGK_DIAG_CDS_STAGE *v7; // rsi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // rdi
  __int64 UserSessionState; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 DxgkWin32kInterface; // rax
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // eax
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[5]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v24[8]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v25[24]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v26[80]; // [rsp+110h] [rbp+10h] BYREF
  int v27; // [rsp+298h] [rbp+198h] BYREF
  struct _devicemodeW *v28; // [rsp+2A0h] [rbp+1A0h] BYREF

  v28 = a3;
  v27 = a2;
  v7 = a7;
  v9 = a5;
  v19 = a1;
  v18 = a4;
  *(_DWORD *)a7 = 0;
  UserSessionState = W32GetUserSessionState();
  DisplayScenarioJournalBegin((a4 & 0x10000002) != 0 ? 79 : 143, 32LL, *(unsigned __int16 *)(UserSessionState + 68752));
  v23[0] = &a6;
  v23[1] = &v18;
  v23[2] = &v19;
  v23[3] = &v27;
  v23[4] = &v28;
  memset(v26, 0, sizeof(v26));
  v26[10] = 6;
  v26[11] = 1;
  if ( (int)DrvSampleDisplayState(&v26[12]) >= 0 )
  {
    if ( v9 )
      *(_OWORD *)&v26[15] = *(_OWORD *)v9;
    v26[0] = 20971800;
    LOWORD(v26[1]) = 0x8000;
    lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator()(v23, v26);
  }
  memset(v25, 0, 0x58uLL);
  v21 = 88LL;
  v11 = *(_QWORD *)(W32GetUserSessionState() + 57016);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
  v12 = *(_QWORD *)(v11 + 16);
  v20 = v12;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  LODWORD(v12) = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _DWORD *, __int64 *, _QWORD, unsigned __int64))(DxgkWin32kInterface + 760))(
                   1179648LL,
                   v26,
                   0LL,
                   v25,
                   &v21,
                   0LL,
                   (unsigned __int64)&v20 & -(__int64)(v12 != 0));
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
  if ( (int)v12 >= 0 )
  {
    v14 = v25[20];
    v15 = v25[21];
  }
  else
  {
    v14 = -1;
    v15 = 11;
  }
  v16 = v18;
  v24[0] = 0;
  *(_DWORD *)v7 = v15;
  v24[4] = v15;
  v24[1] = 20;
  v24[2] = v16;
  v24[3] = v14;
  DisplayScenarioJournalSetSpecializedData(v24);
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(v9, v14);
  return v14;
}
