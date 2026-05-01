/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x18000A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x18000A85C (--0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z.c)
 *     ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x180011004 (--$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(unsigned __int64 a1, unsigned __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x50uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(v4, a1, a2);
    v7 = v5;
    if ( v5 )
    {
      v10 = v5;
      v8[0] = &v9;
      v9 = 0LL;
      v8[1] = &v10;
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_810c14b6a29fd984a078d93978f19614_>(
        v6,
        v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
