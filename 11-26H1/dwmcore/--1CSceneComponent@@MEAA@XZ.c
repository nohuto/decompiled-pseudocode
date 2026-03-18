/*
 * XREFs of ??1CSceneComponent@@MEAA@XZ @ 0x18028B03C
 * Callers:
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18027FE0C (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18028B070 (--_GCSceneComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801A3D10 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 */

void __fastcall CSceneComponent::~CSceneComponent(void **this)
{
  *this = &CSceneComponent::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(this + 9);
  CResource::~CResource((CResource *)this);
}
