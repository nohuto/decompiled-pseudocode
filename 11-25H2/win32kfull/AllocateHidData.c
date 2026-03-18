/*
 * XREFs of AllocateHidData @ 0x140120CE4
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x1402746D8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C (-PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12@@Z @ 0x1401A1514 (-AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12.c)
 *     ?AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z @ 0x1402743C4 (-AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall AllocateHidData(void *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  unsigned int ThreadId; // ebx
  unsigned int v8; // edi
  PETHREAD *v10; // r14
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  _QWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = (__int64 *)a5;
  ThreadId = 0;
  v8 = a3;
  if ( a5 )
  {
    v10 = *(PETHREAD **)(a5 + 16);
    v11 = 0;
  }
  else
  {
    if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
    {
      v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18888);
      v5 = *(__int64 **)(v15 + 120);
      if ( !v5 )
      {
        v17 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888);
        v5 = *(__int64 **)(v17 + 128);
        if ( !v5 )
        {
          UserSessionState = W32GetUserSessionState(v17, v16);
          InputTraceLogging::RawInput::AllocateHidData_NoTarget(*(struct tagQ *const *)(UserSessionState + 18888), a1);
          return 0LL;
        }
      }
      v10 = (PETHREAD *)v5[2];
    }
    else
    {
      v20 = W32GetUserSessionState(v13, v12);
      v10 = (PETHREAD *)PtiKbdFromQ(*(_QWORD *)(v20 + 18888));
    }
    v11 = 1;
  }
  v21 = v8 + 80;
  if ( (unsigned int)v21 < v8 )
    return 0LL;
  v22 = v8 + 24;
  if ( v8 + 24 < v8 )
    return 0LL;
  LOBYTE(a3) = 18;
  v23 = HMAllocObject(v10, 0LL, a3, v21);
  v24 = v23;
  if ( v23 )
  {
    v30[1] = v5;
    *(_QWORD *)(v23 + 24) = 0LL;
    v30[0] = v23 + 24;
    HMAssignmentLock(v30, 1LL);
    *(_DWORD *)(v24 + 56) = a2;
    *(_DWORD *)(v24 + 60) = v22;
    *(_QWORD *)(v24 + 64) = a1;
    *(_QWORD *)(v24 + 72) = a4;
    *(_QWORD *)(v24 + 32) = 0LL;
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                         v26,
                         v25,
                         v27,
                         v28) )
      *(_DWORD *)(v24 + 48) |= 1u;
    if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() && v11 == 1 )
      *(_DWORD *)(v24 + 48) |= 4u;
    if ( v5 )
      v29 = *v5;
    else
      v29 = 0LL;
    if ( v10 )
      ThreadId = (unsigned int)PsGetThreadId(*v10);
    InputTraceLogging::RawInput::AllocateHidData(v24, ThreadId, v29, a1, v11);
  }
  return v24;
}
