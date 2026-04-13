/*
 * XREFs of ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x180024CB4
 * Callers:
 *     ?PutOnProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x1800362B0 (-PutOnProgress@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windo.c)
 *     Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::PutOnProgress @ 0x180056450 (Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionComple_ea_180056450.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18002A540 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  v3 = (_QWORD *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v7);
  v4 = 0;
  v5 = v3;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31, a2, v5);
  }
  else
  {
    v7 = *v3;
    v8 = 0LL;
    *v3 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  return v4;
}
