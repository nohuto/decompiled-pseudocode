/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1402C7DC0
 * Callers:
 *     MiDoubleLockMdlPage @ 0x1402C7954 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdx
  _BOOL8 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
    return 0LL;
  v1 = *(_DWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  result = 0LL;
  if ( !(_WORD)v1 )
    return 1LL;
  if ( (_WORD)v1 == 1 )
  {
    if ( v2 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( (_WORD)v1 == 2 && v2 )
  {
    return (*(_BYTE *)(a1 + 34) & 8) != 0;
  }
  return result;
}
