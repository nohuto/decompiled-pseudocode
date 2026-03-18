/*
 * XREFs of MiAddMemorySubsectionRefs @ 0x1406E7D60
 * Callers:
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReferenceControlAreaPfn @ 0x14036CB90 (MiReferenceControlAreaPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAddMemorySubsectionRefs(__int64 *a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiReferenceControlAreaPfn(*a1, (__int64)a1, a2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
