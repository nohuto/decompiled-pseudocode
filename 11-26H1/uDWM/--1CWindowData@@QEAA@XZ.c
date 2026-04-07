/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x18001AD44
 * Callers:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001AD1C (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800C038C (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18008005C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800B9414 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C0260 (--1-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@U-$hash@T_LAR.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@@details@wil@@QEAA_NXZ @ 0x1800DEF9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData *this)
{
  char *v2; // rcx
  __int64 ***v3; // rdi
  __int64 **i; // rbx

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 != (char *)this + 868 )
    DefaultHeap::Free(v2);
  if ( (*((_BYTE *)this + 742) & 1) != 0 )
    CLivePreview::OnWindowDataDeleted(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), this);
  CWindowList::OnWindowDataDestroyed(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), this);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::GetImpl'::`2'::impl) )
  {
    v3 = (__int64 ***)*((_QWORD *)this + 85);
    for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
      CloseHandle(i[3]);
  }
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::~_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>((char *)this + 672);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 76);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 71);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 67);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 62);
}
