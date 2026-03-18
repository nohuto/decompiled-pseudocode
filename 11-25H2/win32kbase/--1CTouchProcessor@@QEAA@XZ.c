/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1400CF2BC
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400CF13C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1402110F4 (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14014CCD0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x140157ABC (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(char **this)
{
  *this = (char *)&CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  GreDeleteFastMutex(this[16]);
  this[16] = 0LL;
  this[17] = 0LL;
  tagDomLock::LockUnInitialize((tagDomLock *)(this + 4));
  *this = (char *)&CBaseProcessor::`vftable';
}
