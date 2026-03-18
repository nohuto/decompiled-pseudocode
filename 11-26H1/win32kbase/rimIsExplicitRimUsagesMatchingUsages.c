/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400795B0 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimFindReferencedRimObj @ 0x1401FE4CC (rimFindReferencedRimObj.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     RIMIDEIsCompatibleDevice @ 0x140209508 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsExplicitRimUsagesMatchingUsages(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 i; // rax
  __int64 v6; // r8

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 88) )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 96);
    if ( *(_WORD *)(v6 + 4 * i) == a3 && *(_WORD *)(v6 + 4 * i + 2) == a2 )
      break;
  }
  return 1LL;
}
