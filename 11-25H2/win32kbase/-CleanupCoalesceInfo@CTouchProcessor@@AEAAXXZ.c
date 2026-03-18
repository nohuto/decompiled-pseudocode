/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x140157ABC
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400CF2BC (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140202498 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 36) = 0;
  }
}
