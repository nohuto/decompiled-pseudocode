/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180673AB8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180673244 (--$_Emplace_reallocate@AEBV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIR.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806731D4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
      *(__int64 **)(a1 + 24),
      *(__int64 **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
}
