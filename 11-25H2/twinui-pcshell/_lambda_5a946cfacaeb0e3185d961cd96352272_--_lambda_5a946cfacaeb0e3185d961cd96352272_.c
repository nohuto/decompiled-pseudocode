/*
 * XREFs of _lambda_5a946cfacaeb0e3185d961cd96352272_::_lambda_5a946cfacaeb0e3185d961cd96352272_ @ 0x18045B73C
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001F7D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18001F7D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_5a946cfacaeb0e3185d961cd96352272_::_lambda_5a946cfacaeb0e3185d961cd96352272_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v7; // rcx

  v7 = *a2;
  *a1 = *a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[1] = *a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 2),
    a4);
  a1[2] = (__int64)&TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  return a1;
}
