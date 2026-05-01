/*
 * XREFs of ??$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_810c14b6a29fd984a078d93978f19614_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180001178
 * Callers:
 *     ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x1800121B4 (--$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x180001578 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001916C (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_810c14b6a29fd984a078d93978f19614_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  __int64 v7; // r14
  _QWORD *i; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  int MatchingRestrictedErrorInfo; // ebp
  _QWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  if ( a2 )
  {
    v14 = a2;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v14, a2, a2);
    v14 = 0LL;
    v4 = v5;
  }
  v7 = v4[4];
  for ( i = (_QWORD *)v4[2]; i != (_QWORD *)v4[3]; ++i )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v3 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError((unsigned int)v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        v10,
        *i);
    }
    else
    {
      if ( v9 >= 0 )
        goto LABEL_15;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v14 = 0LL;
        v11 = v3;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v3, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        v3 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v3 = v11;
        break;
      }
      RoTransformError(v3, 0LL, 0LL);
    }
    v3 = 0;
LABEL_15:
    v7 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, a2, v5);
  return v3;
}
