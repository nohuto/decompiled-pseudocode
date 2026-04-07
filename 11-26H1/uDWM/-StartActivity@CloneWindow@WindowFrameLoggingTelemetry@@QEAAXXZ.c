/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180024260
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800244D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800246E4 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+48h] [rbp-1h]
  unsigned __int16 *v9; // [rsp+50h] [rbp+7h] BYREF
  int v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+5Ch] [rbp+13h]
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  __int64 *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v2 = *(_QWORD *)(wil::details::static_lazy<WindowFrameLogging>::get() + 8);
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v5) = GetCurrentThreadId();
    v6 = 0LL;
    v3 = *((_QWORD *)this + 34);
    if ( !*(_BYTE *)(v3 + 4) || _tlgGuidIsZero((const struct _GUID *)(v3 + 24)) )
      v4 = 0LL;
    v17 = &v5;
    v18 = 4LL;
    v15 = &v6;
    v16 = 8LL;
    v7[0] = 184549376;
    v7[1] = 261;
    v8 = 0LL;
    v9 = *(unsigned __int16 **)(v2 + 8);
    v10 = *v9;
    v11 = 2;
    v12 = &unk_180100C11;
    v13 = 55;
    v14 = 1;
    HIDWORD(v5) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64, __int64, int, unsigned __int16 **, __int64, __int64))EtwEventWriteTransfer)(
      *(_QWORD *)(v2 + 32),
      v7,
      v3 + 8,
      v4,
      4,
      &v9,
      v5,
      v6);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 288));
}
