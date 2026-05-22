/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800665E4
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18002E224 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800666AC (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAX.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<InputSiteElementProxy> *,std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(a3, a3);
  return a3;
}
