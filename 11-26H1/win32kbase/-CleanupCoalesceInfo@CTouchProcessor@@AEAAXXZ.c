/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x14019625C
 * Callers:
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140156D00 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1401BB8A0 (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 36) = 0;
  }
}
