/*
 * XREFs of MmTryIdentifyPage @ 0x1406EF388
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D0970 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIsPageSecured @ 0x1405328B8 (MiIsPageSecured.c)
 */

__int64 __fastcall MmTryIdentifyPage(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rcx

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  v5 = 6 * a1;
  v6 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( a1 > qword_140E2D7A0
    || ((*(_QWORD *)(8 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    v4 = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 32) & 0x40000000) != 0 || MiIsPageOnBadList(v6) || (unsigned int)MiIsPageSecured(v8) )
      v4 = 0;
    else
      MiIdentifyPfn(a1, 0LL, a2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
