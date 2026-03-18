/*
 * XREFs of ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1801C4828
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801151A0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??1CProcessAttribution@@UEAA@XZ @ 0x180162FAC (--1CProcessAttribution@@UEAA@XZ.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x1802342C0 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator() @ 0x1802343F8 (_CProcessAttributionManager--NotifyOnDeadObserver_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1801C4858 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::`scalar deleting destructor'(
        CProcessAttributionManager::Record *this)
{
  std::wstring::~wstring((char *)this + 128);
  operator delete(this, 0xA8uLL);
  return this;
}
