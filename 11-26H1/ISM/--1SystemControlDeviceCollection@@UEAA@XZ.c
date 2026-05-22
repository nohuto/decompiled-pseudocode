/*
 * XREFs of ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DB564
 * Callers:
 *     ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800DB5A0 (--_GSystemControlDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800DB4DC (--1-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMsgRoutin.c)
 */

void __fastcall SystemControlDeviceCollection::~SystemControlDeviceCollection(SystemControlDeviceCollection *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SystemControlDeviceCollection::`vftable';
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::~_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>((__int64)this + 2760);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
