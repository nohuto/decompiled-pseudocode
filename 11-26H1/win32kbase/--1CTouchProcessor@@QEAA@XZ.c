/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1401BB8A0
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x14018860C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x140218B9C (--1CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x14019625C (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     ??1CEResourceLock@@QEAA@XZ @ 0x1401BB8FC (--1CEResourceLock@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(char **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *this = (char *)&CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this, a2, a3, a4);
  GreDeleteFastMutex(this[16], v5, v6, v7);
  this[16] = 0LL;
  this[17] = 0LL;
  CEResourceLock::~CEResourceLock((CEResourceLock *)(this + 4));
  *this = (char *)&CBaseProcessor::`vftable';
}
