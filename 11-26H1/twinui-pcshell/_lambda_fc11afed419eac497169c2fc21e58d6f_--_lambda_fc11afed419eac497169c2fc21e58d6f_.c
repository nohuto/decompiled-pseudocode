/*
 * XREFs of _lambda_fc11afed419eac497169c2fc21e58d6f_::_lambda_fc11afed419eac497169c2fc21e58d6f_ @ 0x1802898C0
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180289628 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800BE2B8 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fc11afed419eac497169c2fc21e58d6f_::_lambda_fc11afed419eac497169c2fc21e58d6f_(
        __int64 a1,
        _DWORD *a2,
        _BYTE *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rcx

  *(_DWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 4) = *a3;
  v7 = *a4;
  *(_QWORD *)(a1 + 8) = *a4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(a1 + 16) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 24,
    a6);
  *(_QWORD *)(a1 + 24) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  return a1;
}
