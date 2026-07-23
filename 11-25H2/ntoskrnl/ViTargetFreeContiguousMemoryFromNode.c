/*
 * XREFs of ViTargetFreeContiguousMemoryFromNode @ 0x140B7BA68
 * Callers:
 *     VfTargetFreeContiguousMemory @ 0x140B7B6EC (VfTargetFreeContiguousMemory.c)
 *     ViTargetFreeContiguousMemoryCallback @ 0x140B7BA40 (ViTargetFreeContiguousMemoryCallback.c)
 * Callees:
 *     VfUtilFreePoolDispatchLevel @ 0x140604330 (VfUtilFreePoolDispatchLevel.c)
 */

__int64 __fastcall ViTargetFreeContiguousMemoryFromNode(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *i; // rcx
  __int64 *v5; // rax
  __int64 **v6; // rdx

  v2 = *(_QWORD *)(a2 + 64);
  if ( v2 )
  {
    for ( i = *(__int64 **)(v2 + 264); i != (__int64 *)(v2 + 264); i = (__int64 *)*i )
    {
      v5 = (__int64 *)*i;
      if ( i[2] == a1 )
      {
        if ( (__int64 *)v5[1] != i || (v6 = (__int64 **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        *(_QWORD *)(v2 + 248) -= i[3];
        VfUtilFreePoolDispatchLevel((_SLIST_ENTRY *)i);
        return 1LL;
      }
    }
  }
  return 0LL;
}
