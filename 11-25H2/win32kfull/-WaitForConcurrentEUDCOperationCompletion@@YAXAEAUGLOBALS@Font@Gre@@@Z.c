/*
 * XREFs of ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84
 * Callers:
 *     bDeleteAllFlEntry @ 0x140107318 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030D7E0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline @ 0x14030E674 (Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall WaitForConcurrentEUDCOperationCompletion(struct Gre::Font::GLOBALS *a1)
{
  __int64 v2; // rsi
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  union _LARGE_INTEGER v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !(unsigned int)((__int64 (*)(void))Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline)() )
    v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v3 = 0;
  v6.QuadPart = -10000LL;
  while ( *((_DWORD *)a1 + 2159) )
  {
    EngSetLastError(0xA7u);
    if ( !(unsigned int)Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledDeviceUsageNoInline(v5, v4)
      && (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v2) > 0x7D0
      && !v3 )
    {
      GrepCaptureLiveMemoryDump(400LL, 51LL, 0LL);
      v3 = 1;
    }
    GreReleasePushLockExclusive2<16,1>((__int64)a1);
    GreDelayExecutionThread(&v6);
    GreAcquirePushLockExclusive2<16,1>((__int64)a1);
  }
}
