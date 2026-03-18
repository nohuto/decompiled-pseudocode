/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1400CDFE8 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x14006CC30 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     SetUnavailableInputSource @ 0x14006CD60 (SetUnavailableInputSource.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     IsSpatialDelegationEnabledForThread @ 0x14006CF30 (IsSpatialDelegationEnabledForThread.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     EditionPostInputMessage @ 0x14006DB88 (EditionPostInputMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 a1,
        CInputDest *a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v12; // r10
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v14; // rdi
  const struct CInputDest *v15; // rdx
  const struct CInputDest *v16; // rdx
  unsigned int UserWindow; // esi
  int v18; // ebp
  struct tagINPUT_MESSAGE_SOURCE *InputMessageSource; // rdi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r15
  int (*v23)(void); // rax
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rax
  struct tagINPUT_MESSAGE_SOURCE *v26; // rax
  _QWORD v28[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+10h] BYREF

  if ( a2 )
  {
    v12 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      if ( *((_DWORD *)a2 + 23) == 2 )
      {
        ThreadInfo = CInputDest::GetThreadInfo(a2);
        if ( ThreadInfo )
          v12 = *((_QWORD *)ThreadInfo + 58);
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(a1, 0, a3) + 18928);
  }
  if ( !v12
    || (v14 = *(_QWORD *)(v12 + 96)) == 0
    || (unsigned __int8)IsSpatialDelegationEnabledForThread(*(InputDelegation **)(v12 + 96))
    || !(unsigned int)HasHidTable(v14)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 456) + 824LL) + 100LL) & 2) == 0 )
  {
    v16 = (const struct CInputDest *)a7;
    if ( (a7 & 2) != 0 )
      UserWindow = (unsigned int)CInputDest::GetUserWindow(a2);
    else
      UserWindow = 0;
    v28[0] = a3;
    v28[1] = 0LL;
    v18 = (unsigned __int8)v16 & 1 | 0x10;
    if ( ((unsigned __int8)v16 & 4) == 0 )
      v18 = (unsigned __int8)v16 & 1;
    v28[2] = a8;
    InputMessageSource = QHelper::GetInputMessageSource(a2, v16);
    v20 = *a4;
    v21 = *(_QWORD *)(a1 + 3688);
    v22 = (int)(v20 | (a4[2] << 16));
    v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 48) + 4400LL);
    if ( v23 && v23() >= 0 )
    {
      v29 = 0LL;
      if ( InputMessageSource )
        v29 = *(_QWORD *)InputMessageSource;
      EditionPostInputMessage(
        (_DWORD)a2,
        UserWindow,
        512,
        0,
        v22,
        a5,
        a6,
        v21,
        v18,
        (unsigned __int64)&v29 & -(__int64)(InputMessageSource != 0LL),
        (__int64)v28);
    }
  }
  if ( *(_DWORD *)a2 )
  {
    v24 = CInputDest::GetThreadInfo(a2);
    if ( v24 )
    {
      v25 = *((_QWORD *)v24 + 58);
      if ( v25 )
        *(_DWORD *)(v25 + 436) &= ~0x20u;
    }
  }
  v26 = QHelper::GetInputMessageSource(a2, v15);
  return SetUnavailableInputSource(v26);
}
