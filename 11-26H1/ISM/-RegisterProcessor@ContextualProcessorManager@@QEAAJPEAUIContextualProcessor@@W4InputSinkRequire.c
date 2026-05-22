/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180052AD4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x180052B88 (-ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x180052BDC (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  const unsigned __int16 *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v5 = a1 + 16;
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = a3;
  v11 = 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( v6 == *(_QWORD *)(v5 + 16) )
  {
    std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
      v5,
      v6,
      &v9);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    if ( (__int64 *)v6 != &v9 )
    {
      *(_QWORD *)v6 = a2;
      v9 = 0LL;
    }
    *(_DWORD *)(v6 + 8) = a3;
    *(_QWORD *)(v5 + 8) += 16LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  InputETW::ContextualProcessing::ProcessorRegistered(v7);
  return 0LL;
}
