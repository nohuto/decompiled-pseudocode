/*
 * XREFs of _lambda_21bbf2e079f5591be5df5fdb5b101015_::_lambda_21bbf2e079f5591be5df5fdb5b101015_ @ 0x18045B5DC
 * Callers:
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180463040 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001F7D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18001F7D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_21bbf2e079f5591be5df5fdb5b101015_::_lambda_21bbf2e079f5591be5df5fdb5b101015_(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rcx

  *(_DWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  v7 = *a4;
  *(_QWORD *)(a1 + 24) = *a4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(a1 + 32) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a6);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  return a1;
}
