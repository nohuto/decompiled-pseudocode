/*
 * XREFs of MiFastReadLeafPte @ 0x140318DA0
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFastReadLeafPte(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *MmInternal; // rcx
  _DWORD *v6; // r9
  __int64 PteShadow; // rax

  v2 = a2;
  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x2000000) != 0 && MmInternal && (v6 = MmInternal + 80, !MmInternal[80]) )
  {
    *v6 = 2;
    PteShadow = *v3;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v3, *v3);
    *v2 = PteShadow;
    *v6 = 0;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 3221225473LL;
  }
}
