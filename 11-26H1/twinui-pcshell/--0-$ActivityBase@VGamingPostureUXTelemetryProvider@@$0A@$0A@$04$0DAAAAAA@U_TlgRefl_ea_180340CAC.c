/*
 * XREFs of ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180340CAC
 * Callers:
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034AD98 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  v1 = (char *)a1 + 8;
  *((_DWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v3 = (_QWORD *)((char *)a1 + 88);
  v1[4] = 0;
  v3[19] = 0LL;
  *((_QWORD *)v1 + 6) = "HotkeyEntryPointActivity";
  v3[20] = 0LL;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 7) = 0LL;
  *((_DWORD *)v1 + 18) = 0;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v1 + 62) = 1;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v1;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
