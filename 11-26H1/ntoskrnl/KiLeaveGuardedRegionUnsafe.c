/*
 * XREFs of KiLeaveGuardedRegionUnsafe @ 0x14027D0C0
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall KiLeaveGuardedRegionUnsafe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 result; // rax

  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v5 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v5 != v5 )
      return KiCheckForKernelApcDelivery(v5, a2, a3, a4);
  }
  return result;
}
