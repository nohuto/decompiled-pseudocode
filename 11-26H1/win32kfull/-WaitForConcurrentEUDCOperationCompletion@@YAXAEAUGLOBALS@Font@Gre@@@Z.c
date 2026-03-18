/*
 * XREFs of ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14029600C
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall WaitForConcurrentEUDCOperationCompletion(struct Gre::Font::GLOBALS *a1)
{
  union _LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  v2.QuadPart = -10000LL;
  while ( *((_DWORD *)a1 + 2159) )
  {
    EngSetLastError(0xA7u);
    GreReleasePushLockExclusive2<16,1>((__int64)a1);
    GreDelayExecutionThread(&v2);
    GreAcquirePushLockExclusive2<16,1>((__int64)a1);
  }
}
