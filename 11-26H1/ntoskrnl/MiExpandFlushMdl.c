/*
 * XREFs of MiExpandFlushMdl @ 0x140398C2C
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MiExpandFlushMdl(unsigned int *Src, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  void *PoolMm; // rax
  __int64 v8; // rsi
  __int64 result; // rax

  v2 = Src[10];
  if ( (_DWORD)v2 == 0xFFFFF )
    return 0LL;
  v4 = (unsigned int)(2 * v2);
  if ( (unsigned int)v4 <= (unsigned int)v2 || (unsigned int)v4 > 0xFFFFF )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned int)v4 > a2 )
    v4 = a2;
  v6 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v6) = v6 | 0x80000000;
  PoolMm = (void *)ExAllocatePoolMm(64LL, 8 * v4 + 48, 1816554829LL, v6);
  v8 = (__int64)PoolMm;
  if ( !PoolMm )
    return 0LL;
  memmove(PoolMm, Src, 8 * v2 + 48);
  result = v8;
  *(_DWORD *)(v8 + 44) = v4;
  return result;
}
