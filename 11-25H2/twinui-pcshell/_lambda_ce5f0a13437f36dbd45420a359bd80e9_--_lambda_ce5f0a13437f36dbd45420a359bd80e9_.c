/*
 * XREFs of _lambda_ce5f0a13437f36dbd45420a359bd80e9_::_lambda_ce5f0a13437f36dbd45420a359bd80e9_ @ 0x18045B8B0
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017B660 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18001F7D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18001F7D0.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ce5f0a13437f36dbd45420a359bd80e9_::_lambda_ce5f0a13437f36dbd45420a359bd80e9_(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // rcx

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_OWORD *)(a1 + 8) = *a3;
  v9 = *a4;
  *(_QWORD *)(a1 + 24) = *a4;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_QWORD *)(a1 + 32) = *a5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a6);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  return a1;
}
