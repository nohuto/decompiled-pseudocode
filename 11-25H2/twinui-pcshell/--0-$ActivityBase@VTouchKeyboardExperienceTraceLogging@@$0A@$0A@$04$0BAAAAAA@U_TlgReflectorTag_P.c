/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D4F0C
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800667F4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800D4FB0 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x18014E8E0 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18014EB20 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255750 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180257BA4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A91B8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804677A4 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18046B734 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18046B8B0 (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char *v2; // rbx
  _QWORD *v4; // rcx

  v2 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = (_QWORD *)((char *)a1 + 88);
  *(_DWORD *)v2 = 0;
  v2[4] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 6) = a2;
  v2[64] = 0;
  *((_DWORD *)v2 + 18) = 0;
  v4[19] = 0LL;
  v4[20] = 0LL;
  memset_0(v4, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v2;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
