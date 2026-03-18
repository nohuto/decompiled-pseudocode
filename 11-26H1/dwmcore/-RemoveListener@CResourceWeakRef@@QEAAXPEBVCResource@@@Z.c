/*
 * XREFs of ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013F098
 * Callers:
 *     ??$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x18013F068 (--$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CResourceWeakRef::RemoveListener(CResourceWeakRef *this, const struct CResource *a2)
{
  __int64 trivial_8; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  trivial_8 = _std_find_trivial_8(*((_QWORD *)this + 9), *((_QWORD *)this + 10), a2);
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    (void *)(trivial_8 + 8),
    *((_QWORD *)this + 10),
    (void *)trivial_8);
  *((_QWORD *)this + 10) -= 8LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
