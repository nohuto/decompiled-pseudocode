/*
 * XREFs of ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x18000A614
 * Callers:
 *     ??_GCCpuClipAntialiasSink@@UEAAPEAXI@Z @ 0x1801CAB70 (--_GCCpuClipAntialiasSink@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall CCpuClipAntialiasSink::~CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  char *v2; // rdi
  __int64 v3; // rsi

  v2 = (char *)this + 56;
  v3 = 2LL;
  do
  {
    v2 -= 8;
    std::unique_ptr<CShape>::~unique_ptr<CShape>(v2);
    --v3;
  }
  while ( v3 );
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 32);
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>((char *)this + 16);
}
