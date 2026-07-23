/*
 * XREFs of MiConfirmCombinePageContents @ 0x1402EA8E0
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiComparePages @ 0x1402EA970 (MiComparePages.c)
 *     MiStandbyPageContentsIntact @ 0x140708D64 (MiStandbyPageContentsIntact.c)
 */

__int64 __fastcall MiConfirmCombinePageContents(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _WORD *v5; // r8

  v3 = 48 * a2 - 0x220000000000LL;
  if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0
    || MiIsPageOnBadList(v3)
    || ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FF) != *v5
    || !(unsigned int)MiStandbyPageContentsIntact() )
  {
    return 0LL;
  }
  else
  {
    return (unsigned __int8)MiComparePages(*(_QWORD *)(a1 + 96) + 4096LL);
  }
}
