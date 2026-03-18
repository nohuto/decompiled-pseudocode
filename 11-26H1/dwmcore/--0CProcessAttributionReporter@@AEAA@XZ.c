/*
 * XREFs of ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180208644
 * Callers:
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x1802085F4 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1801C8484 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 */

CProcessAttributionReporter *__fastcall CProcessAttributionReporter::CProcessAttributionReporter(
        CProcessAttributionReporter *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = CProcessAttributionManager::CreateObserver(qword_1803DEAE0);
  return this;
}
