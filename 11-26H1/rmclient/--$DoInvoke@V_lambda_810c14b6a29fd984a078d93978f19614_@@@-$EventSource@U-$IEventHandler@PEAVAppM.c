/*
 * XREFs of ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x180011004
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x18000A7D0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A1E0 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_810c14b6a29fd984a078d93978f19614_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180016C68 (--$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_810c14b6a29fd984a078d93978f19614_>(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  volatile int *v5; // rdx
  __int64 v6; // r8
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v2 = 0;
  v3 = 0LL;
  AcquireSRWLockExclusive(&stru_18002DC80);
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v10 = Windows::System::CMemoryManager::s_limitChangeEvent;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v10, v5);
    v3 = v6;
  }
  ReleaseSRWLockExclusive(&stru_18002DC80);
  if ( v3 )
  {
    v9 = *a2;
    v2 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_810c14b6a29fd984a078d93978f19614_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
           &v9,
           v3);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, v7);
  }
  return v2;
}
