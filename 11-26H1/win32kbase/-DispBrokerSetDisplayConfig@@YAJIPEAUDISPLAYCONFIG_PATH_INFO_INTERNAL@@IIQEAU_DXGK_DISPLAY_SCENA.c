/*
 * XREFs of ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x14018B3EC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__-D.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401F8180 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DispBrokerSetDisplayConfig(
        int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a5,
        bool a6)
{
  unsigned int v6; // ebx
  int v8; // edx
  int v9; // ecx
  char *v10; // rdi
  int v11; // r8d
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v22; // ebx
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v36[5]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v37[24]; // [rsp+A0h] [rbp-60h] BYREF

  v29 = a1;
  v6 = 216 * a1 + 96;
  v32 = a2;
  v30 = a3;
  v31 = a4;
  if ( v6 >= 0x7FFF )
    return 2147483653LL;
  v10 = (char *)Win32AllocPoolWithQuotaZInitImpl(a1, v6, 0x44535042u);
  if ( !v10 )
    return 3221225495LL;
  UserSessionState = W32GetUserSessionState(v9, v8, v11);
  DisplayScenarioJournalBegin(v30, v31, *(unsigned __int16 *)(UserSessionState + 68744));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v29, v29, v32);
  v36[0] = &v29;
  v36[1] = &v30;
  v36[2] = &v31;
  v36[3] = &a6;
  v36[4] = &v32;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac___DrvSampleDisplayState_(
    v10,
    a5,
    v36,
    v6 - 96);
  memset(v37, 0, 0x58uLL);
  v34 = 88LL;
  v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 57008);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35, v17);
  v33 = *(_QWORD *)(v16 + 16);
  v18 = (unsigned __int64)&v33 & -(__int64)(v33 != 0);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v20, v19);
  v22 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _DWORD *, __int64 *, _QWORD, unsigned __int64))(DxgkWin32kInterface + 760))(
          1179648LL,
          v10,
          0LL,
          v37,
          &v34,
          0LL,
          v18);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v35, v23, v24, v25);
  GreDeleteFastMutex(v10, v26, v27, v28);
  if ( v22 >= 0 )
  {
    if ( v37[21] )
      DisplayScenarioJournalCCDRetrieval(v37[21]);
    v22 = v37[20];
  }
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(a5, (unsigned int)v22);
  return (unsigned int)v22;
}
