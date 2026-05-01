/*
 * XREFs of ??$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18033BF88
 * Callers:
 *     ??$DoInvoke@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@Z @ 0x18033BC2C (--$DoInvoke@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18007234C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180352100 (-RemoveDelegate@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_0808a6f2104e0fe6f743d65699099e1d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // r14
  unsigned int *v10; // r12
  _QWORD *v11; // r15
  int v12; // eax
  int MatchingRestrictedErrorInfo; // eax
  bool v14; // sf
  _QWORD *v16; // [rsp+28h] [rbp-50h] BYREF

  v5 = 0;
  v6 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, a2);
  v7 = (__int64)v16;
  v8 = v16[4];
  v9 = (_QWORD *)v16[2];
  if ( v9 == (_QWORD *)v16[3] )
    goto LABEL_20;
  v10 = *(unsigned int **)(a1 + 8);
  v11 = *(_QWORD **)a1;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(
            *v9,
            (*v11 + 136LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v11 >> 64),
            *v10);
    v6 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
        a3,
        *v9);
      goto LABEL_12;
    }
    if ( v12 < 0 )
      break;
LABEL_13:
    v8 += 8LL;
    if ( ++v9 == *(_QWORD **)(v7 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v6, 0LL, 0LL);
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v16);
  v14 = MatchingRestrictedErrorInfo < 0;
  if ( MatchingRestrictedErrorInfo >= 0 )
    v14 = (int)RoReportFailedDelegate(*v9, v16) < 0;
  if ( v14 )
    v5 = v6;
  v6 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  return v6;
}
