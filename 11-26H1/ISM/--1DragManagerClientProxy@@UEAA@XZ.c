/*
 * XREFs of ??1DragManagerClientProxy@@UEAA@XZ @ 0x180075A6C
 * Callers:
 *     ??_EDragManagerClientProxy@@UEAAPEAXI@Z @ 0x180075A30 (--_EDragManagerClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800452CC (--1-$_Hash@V-$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V-$_Uhash_compare@.c)
 */

void __fastcall DragManagerClientProxy::~DragManagerClientProxy(DragManagerClientProxy *this)
{
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>((_QWORD *)this + 10);
  BamoImpl::BamoDragManagerClientProxyImpl::~BamoDragManagerClientProxyImpl((DragManagerClientProxy *)((char *)this + 16));
}
