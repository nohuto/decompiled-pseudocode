/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001680
 * Callers:
 *     <none>
 * Callees:
 *     ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x180001708 (--0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z.c)
 *     ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x1800121B4 (--$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(unsigned __int64 a1, unsigned __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x50uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(v4, a1, a2);
    if ( v6 )
    {
      v8 = 0LL;
      v7[0] = &v8;
      v9 = v6;
      v7[1] = &v9;
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_810c14b6a29fd984a078d93978f19614_>(
        v5,
        v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
}
