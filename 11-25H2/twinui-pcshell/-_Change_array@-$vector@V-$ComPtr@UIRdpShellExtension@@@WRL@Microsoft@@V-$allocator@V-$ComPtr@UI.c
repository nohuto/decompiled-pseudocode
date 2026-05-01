/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@_K1@Z @ 0x18064EBFC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18064D200 (--$_Emplace_reallocate@AEBV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIR.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x18064D190 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(v6, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
