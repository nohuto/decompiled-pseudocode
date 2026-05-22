/*
 * XREFs of ??0Edge@@QEAA@AEBV0@@Z @ 0x1801ADCB0
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AD8B8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180023358 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Construct_n@AEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@1@Z @ 0x1801AD510 (--$_Construct_n@AEBQEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@-$vector.c)
 */

// Hidden C++ exception states: #wind=2
Edge *__fastcall Edge::Edge(Edge *this, const struct Edge *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  std::wstring::wstring((__int64)this + 8, (_QWORD *)a2 + 1);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef((__int64 *)this + 5);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 52);
  *(_OWORD *)((char *)this + 68) = *(_OWORD *)((char *)a2 + 68);
  *(_QWORD *)((char *)this + 84) = *(_QWORD *)((char *)a2 + 84);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Construct_n<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> * const &,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> * const &>(
    (__int64 **)this + 13,
    (__int64)(*((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 13)) >> 3,
    (__int64 **)a2 + 13,
    (__int64 **)a2 + 14);
  return this;
}
