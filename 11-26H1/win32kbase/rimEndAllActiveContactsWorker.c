/*
 * XREFs of rimEndAllActiveContactsWorker @ 0x14007A7BC
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x140095794 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMEndAllActiveContacts @ 0x140130700 (RIMEndAllActiveContacts.c)
 *     _lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_ @ 0x1401FDC10 (_lambda_511ac2b97c1247323f798affe6b4aaf6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 */

__int64 __fastcall rimEndAllActiveContactsWorker(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 **v10; // rax
  __int64 *v11; // xmm1_8
  __int64 active; // rax
  int v13; // edx
  int v14; // r8d
  __int128 v15; // xmm1
  __int64 *v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // bl
  bool v29; // di
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  __int128 v33; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-19h]
  __int128 v35; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v36; // [rsp+68h] [rbp-1h]
  char v37[80]; // [rsp+70h] [rbp+7h] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+77h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 872);
  v6 = *(_DWORD *)(a2 + 844) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v38 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  v10 = RIMCmActiveContactsBegin((__int64 **)&v35, a2);
  v11 = v10[2];
  v33 = *(_OWORD *)v10;
  v34 = v11;
  while ( 1 )
  {
    active = RIMCmActiveContactsEnd(v37, a2);
    v15 = *(_OWORD *)active;
    v16 = *(__int64 **)(active + 16);
    v17 = *(_QWORD *)active;
    v36 = v16;
    v35 = v15;
    if ( (_QWORD)v33 == v17 )
    {
      result = DWORD2(v35);
      if ( DWORD2(v33) == DWORD2(v35) && v34 == v36 )
        break;
    }
    v19 = v34 - 2;
    if ( (v34[2] & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, (__int64 **)&v33);
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v19, v20, v21, v22) )
    {
      if ( !v9 )
      {
        v9 = 1;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                   a1,
                   v4,
                   (LARGE_INTEGER)PerformanceCounter.QuadPart);
        if ( !(_DWORD)result )
        {
          v28 = 0;
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
          {
            result = *((unsigned int *)WPP_GLOBAL_Control + 11);
            if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
              v28 = 1;
          }
          v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
            LOBYTE(v31) = v29;
            LOBYTE(v32) = v28;
            result = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v32,
                       v31,
                       *(_QWORD *)(UserSessionState + 19368),
                       4,
                       1,
                       43,
                       (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
          }
          goto LABEL_30;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, v4, (_DWORD)v19, v5 + 1, v6, 1);
      *((_DWORD *)v19 + 591) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v19);
      v38 = 1;
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v4);
    result = RIMCompletePointerDeviceFrame(a1, v4, 3u);
    goto LABEL_13;
  }
LABEL_30:
  if ( v38 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, 0, 0);
LABEL_13:
  v23 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v23 = 1;
  }
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v23;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v27,
             v26,
             *(_QWORD *)(v25 + 19368),
             4,
             1,
             44,
             (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
  }
  return result;
}
