/*
 * XREFs of ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DA964
 * Callers:
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800DA9A0 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800452CC (--1-$_Hash@V-$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V-$_Uhash_compare@.c)
 */

void __fastcall ConsumerControlDeviceCollection::~ConsumerControlDeviceCollection(
        ConsumerControlDeviceCollection *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>((_QWORD *)this + 345);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
