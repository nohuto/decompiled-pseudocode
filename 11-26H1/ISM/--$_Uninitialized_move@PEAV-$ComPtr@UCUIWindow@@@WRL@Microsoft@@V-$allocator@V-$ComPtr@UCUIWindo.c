/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x1800999EC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800A75F4 (--$_Emplace_reallocate@AEBV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UCUIWindow@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??0?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x180013ADC (--0-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CUIWindow> *,std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      Microsoft::WRL::ComPtr<InputSite>::ComPtr<InputSite>(a3++, v5);
      v5 = (_QWORD *)(v6 + 8);
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(a3, a3);
  return a3;
}
