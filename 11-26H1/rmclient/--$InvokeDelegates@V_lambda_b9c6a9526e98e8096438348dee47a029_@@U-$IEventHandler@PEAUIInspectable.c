/*
 * XREFs of ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180016DD0
 * Callers:
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x18000F9F4 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018E4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800117C0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?RemoveDelegate@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180017FE8 (-RemoveDelegate@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_b9c6a9526e98e8096438348dee47a029_,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        _QWORD *a1,
        volatile int *a2,
        __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  volatile int *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // r12
  _QWORD *v12; // r15
  int v13; // eax
  int MatchingRestrictedErrorInfo; // ebp
  _QWORD *v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v16 = 0LL;
  v5 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, a2);
  v8 = (__int64)v16;
  v9 = (_QWORD *)v16[2];
  v10 = v16[4];
  if ( v9 == (_QWORD *)v16[3] )
    goto LABEL_20;
  v11 = (_QWORD *)a1[1];
  v12 = (_QWORD *)*a1;
  while ( 1 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, *v12, *v11);
    v5 = v13;
    if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 || v13 == -2147418105 || v13 == -2147418094 )
    {
      RoTransformError((unsigned int)v13, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
        a3,
        *v9);
      goto LABEL_12;
    }
    if ( v13 < 0 )
      break;
LABEL_13:
    v10 += 8LL;
    if ( ++v9 == *(_QWORD **)(v8 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v5, 0LL, 0LL);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v9, v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  if ( MatchingRestrictedErrorInfo < 0 )
    v4 = v5;
  v5 = v4;
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8, v7);
  return v5;
}
