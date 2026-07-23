/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC
 * Callers:
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpQuitNextActiveHive @ 0x140B09DF4 (CmpQuitNextActiveHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpLockKcbStackFlusherLocksExclusive(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rbx
  __int16 i; // dx
  __int16 v6; // dx
  __int64 v7; // rcx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = CmpGetNextActiveHive(0LL); ; result = CmpGetNextActiveHive(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    for ( i = *(_WORD *)(a1 + 2); i >= 0; i = v6 - 1 )
    {
      v7 = *(_QWORD *)(CmpGetKcbAtLayerHeight(a1) + 32);
      if ( v7 == v4 )
      {
        HvLockHiveFlusherExclusive(v7);
        --v2;
        break;
      }
    }
    if ( !v2 )
      return CmpQuitNextActiveHive(v4);
  }
  return result;
}
