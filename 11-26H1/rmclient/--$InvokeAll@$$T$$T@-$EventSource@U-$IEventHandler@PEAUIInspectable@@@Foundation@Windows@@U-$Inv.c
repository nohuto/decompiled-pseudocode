/*
 * XREFs of ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x18000F9F4
 * Callers:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x18000F9D0 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A1E0 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180016DD0 (--$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U-$IEventHandler@PEAUIInspectable.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  RTL_SRWLOCK *v4; // rsi
  __int64 v6; // rbx
  volatile int *v7; // rdx
  __int64 v9; // r8
  volatile int *v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v3 = 0;
  v13[0] = &v11;
  v4 = (RTL_SRWLOCK *)(a1 + 8);
  v12 = 0LL;
  v13[1] = &v12;
  v11 = 0LL;
  v6 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  if ( *(_QWORD *)a1 )
  {
    v14 = *(_QWORD *)a1;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v14, v7);
    v6 = v9;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_b9c6a9526e98e8096438348dee47a029_,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
           v13,
           v6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v10);
  }
  return v3;
}
