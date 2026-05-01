/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180370ED8
 * Callers:
 *     ??$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370B30 (--$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA-.c)
 *     ??$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370B68 (--$Start@$$V@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@SA-AV0.c)
 *     ??$Start@$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803C6C24 (--$Start@$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char *v2; // rbx
  _QWORD *v4; // rcx

  v2 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = (_QWORD *)((char *)a1 + 88);
  *(_DWORD *)v2 = 0;
  v2[4] = 0;
  *((_QWORD *)v2 + 6) = a2;
  v2[64] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 7) = 0LL;
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
