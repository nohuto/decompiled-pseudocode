/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x140452130
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(__int64 a1, __int64 a2)
{
  int v3; // esi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rcx
  __int64 i; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((struct _KTHREAD *)a1);
  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 195);
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    for ( i = v6 + CurrentPrcb->ScbOffset; i; i = *(_QWORD *)(i + 440) )
    {
      v3 = (*(unsigned __int16 *)(i + 128) >> 3) & 1;
      if ( v3 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v3 )
    return 1LL;
  else
    return (unsigned int)*(char *)(a1 + 195);
}
