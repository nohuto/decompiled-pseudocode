/*
 * XREFs of ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180284A74
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x180284B10 (--_GCSynchronousSuperWetInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1801D66A8 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18020B5F8 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180284A20 (--1-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(CSynchronousSuperWetInk *this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable';
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)this + 264);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>((void **)this + 28);
  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>((void **)this + 27);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 26);
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>((struct CResource **)this);
}
