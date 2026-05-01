/*
 * XREFs of ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1802437F8
 * Callers:
 *     ??$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@Z @ 0x180243748 (--$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@-$EventSource@U-$IEventHandler@_N@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18005205C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18021D864 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@In.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_813c1a060ca2f05baf3690d2c7f23b38_,Windows::Foundation::IEventHandler<bool>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3,
        __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r15
  struct IUnknown **v10; // rsi
  _BYTE *v11; // rbp
  _QWORD *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v18, a2, (__int64)a3, a4);
  v8 = (__int64)v18;
  v9 = v18[4];
  v10 = (struct IUnknown **)v18[2];
  if ( v10 == (struct IUnknown **)v18[3] )
    goto LABEL_20;
  v11 = (_BYTE *)a1[1];
  v12 = (_QWORD *)*a1;
  while ( 1 )
  {
    LOBYTE(v7) = *v11;
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64))(*v10)->lpVtbl[1].QueryInterface)(*v10, *v12, v7);
    v6 = v13;
    if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 || v13 == -2147418105 || v13 == -2147418094 )
    {
      RoTransformError((unsigned int)v13, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *v10);
      goto LABEL_12;
    }
    if ( v13 < 0 )
      break;
LABEL_13:
    v9 += 8LL;
    if ( ++v10 == *(struct IUnknown ***)(v8 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v6, 0LL, 0LL);
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v14 = v6;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v17);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v10, v17);
  v6 = 0;
  if ( MatchingRestrictedErrorInfo < 0 )
    v6 = v14;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v8 = (__int64)v18;
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  return v6;
}
