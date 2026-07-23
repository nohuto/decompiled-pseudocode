/*
 * XREFs of MiInitialSlabPopulate @ 0x14070BEE0
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiInitialSlabPopulate(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  if ( *(_DWORD *)(a2 + 128) == 7 )
  {
    v3 = *(_QWORD *)(a2 + 104);
    if ( v3 )
      MiReplenishSlabAllocator(a2, v3, 0x40u, a2);
  }
  return 0LL;
}
