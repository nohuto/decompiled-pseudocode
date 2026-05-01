/*
 * XREFs of ??0?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B3BE0
 * Callers:
 *     ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x18065771C (--$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA-AV01@AEAPEBG@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  char *v2; // rbx
  _QWORD *v3; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v2 = (char *)a1 + 8;
  *((_DWORD *)a1 + 2) = 0;
  *((_BYTE *)a1 + 12) = 0;
  *((_BYTE *)a1 + 72) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_QWORD *)a1 + 7) = "LoadIconW";
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 20) = 0;
  v3 = (_QWORD *)((char *)a1 + 88);
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
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
