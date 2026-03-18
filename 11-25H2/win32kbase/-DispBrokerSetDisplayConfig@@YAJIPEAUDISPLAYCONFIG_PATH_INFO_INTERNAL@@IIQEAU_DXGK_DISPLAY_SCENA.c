/*
 * XREFs of ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401ABC94
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DrvDxgkSendDisplayBrokerMessage @ 0x140029FC8 (DrvDxgkSendDisplayBrokerMessage.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A038 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A15C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x1401AB820 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__-D.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CE840 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DispBrokerSetDisplayConfig(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a5,
        bool a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // [rsp+28h] [rbp-D8h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v25[5]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v26[24]; // [rsp+A0h] [rbp-60h] BYREF

  v18 = a1;
  v21 = a2;
  v19 = a3;
  v20 = a4;
  v6 = 216 * a1 + 96;
  if ( v6 >= 0x7FFF )
    return 2147483653LL;
  v10 = (char *)Win32AllocPoolWithQuotaZInitImpl(a1, v6, 0x44535042u);
  if ( !v10 )
    return 3221225495LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  DisplayScenarioJournalBegin(v19, v20, *(unsigned __int16 *)(UserSessionState + 68752));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v18, v18, v21);
  v25[0] = &v18;
  v25[1] = &v19;
  v25[2] = &v20;
  v25[3] = (unsigned int *)&a6;
  v25[4] = (unsigned int *)&v21;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac___DrvSampleDisplayState_(
    v10,
    a5,
    v25,
    v6 - 96);
  memset(v26, 0, 0x58uLL);
  v23 = 88LL;
  v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 57016);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  v22 = *(_QWORD *)(v14 + 16);
  v16 = DrvDxgkSendDisplayBrokerMessage(
          0x120000u,
          (__int64)v10,
          v15,
          (__int64)v26,
          (__int64)&v23,
          v17,
          (unsigned __int64)&v22 & -(__int64)(v22 != 0));
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  GreDeleteFastMutex(v10);
  if ( v16 >= 0 )
  {
    if ( v26[21] )
      DisplayScenarioJournalCCDRetrieval(v26[21]);
    v16 = v26[20];
  }
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(a5, (unsigned int)v16);
  return (unsigned int)v16;
}
