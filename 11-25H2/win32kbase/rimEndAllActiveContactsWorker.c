/*
 * XREFs of rimEndAllActiveContactsWorker @ 0x14002F41C
 * Callers:
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x14002B6EC (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMEndAllActiveContacts @ 0x14002C860 (RIMEndAllActiveContacts.c)
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     _lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_ @ 0x1401D5D20 (_lambda_511ac2b97c1247323f798affe6b4aaf6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmDeactivateContact @ 0x14018576C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimEndAllActiveContactsWorker(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rbx
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // bl
  bool v25; // di
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  __int128 v29; // [rsp+40h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h]
  _BYTE v33[80]; // [rsp+70h] [rbp+7h] BYREF
  int v34; // [rsp+D8h] [rbp+6Fh]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+77h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 872);
  v6 = *(_DWORD *)(a2 + 844) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v34 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v31, a2);
  v11 = *(_QWORD *)(active + 16);
  v29 = *(_OWORD *)active;
  v30 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v33, a2);
    v14 = *(_OWORD *)v12;
    v15 = *(_QWORD *)(v12 + 16);
    v16 = *(_QWORD *)v12;
    v32 = v15;
    v31 = v14;
    if ( (_QWORD)v29 == v16 )
    {
      result = DWORD2(v31);
      if ( DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        break;
    }
    v18 = v30 - 16;
    if ( (*(_DWORD *)(v30 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v29);
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v18) )
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
          v24 = 0;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
          {
            result = *((unsigned int *)WPP_GLOBAL_Control + 11);
            if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
              v24 = 1;
          }
          v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
            LOBYTE(v27) = v25;
            LOBYTE(v28) = v24;
            result = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v28,
                       v27,
                       *(_QWORD *)(UserSessionState + 19336),
                       4,
                       1,
                       43,
                       (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
          }
          goto LABEL_30;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, v4, v18, v5 + 1, v6, 1);
      *(_DWORD *)(v18 + 2364) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v18);
      v34 = 1;
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v4);
    result = RIMCompletePointerDeviceFrame(a1);
    goto LABEL_13;
  }
LABEL_30:
  if ( v34 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
LABEL_13:
  v19 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v19 = 1;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v23,
             v22,
             *(_QWORD *)(v21 + 19336),
             4,
             1,
             44,
             (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
  }
  return result;
}
