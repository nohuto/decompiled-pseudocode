/*
 * XREFs of ??$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_810c14b6a29fd984a078d93978f19614_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180016C68
 * Callers:
 *     ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x180011004 (--$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018E4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800117C0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?RemoveDelegate@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180018184 (-RemoveDelegate@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_810c14b6a29fd984a078d93978f19614_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        _QWORD *a1,
        volatile int *a2)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  volatile int *v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 *v8; // rbp
  _QWORD *v9; // r12
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  int MatchingRestrictedErrorInfo; // ebp
  _QWORD *v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  v3 = 0;
  v15 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v15, a2);
  v6 = (__int64)v15;
  v7 = (_QWORD *)v15[2];
  v8 = (__int64 *)v15[4];
  if ( v7 == (_QWORD *)v15[3] )
    goto LABEL_20;
  v9 = (_QWORD *)a1[1];
  v10 = (_QWORD *)*a1;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *v10, *v9);
    v4 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError((unsigned int)v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
        v12,
        *v7);
      goto LABEL_12;
    }
    if ( v11 < 0 )
      break;
LABEL_13:
    ++v8;
    if ( ++v7 == *(_QWORD **)(v6 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v4, 0LL, 0LL);
LABEL_12:
    v4 = 0;
    goto LABEL_13;
  }
  v16 = *v8;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v4, &v15);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v7, v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  if ( MatchingRestrictedErrorInfo < 0 )
    v3 = v4;
  v4 = v3;
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v5);
  return v4;
}
