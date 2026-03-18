/*
 * XREFs of GreEudcUnloadLinkW @ 0x14030D7E0
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x14030E6F0 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     bUnloadEudcFont @ 0x140107588 (bUnloadEudcFont.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401228E4 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1401474F4 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401F355C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14026BD40 (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     bDeleteFlEntry @ 0x14030D90C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030DB0C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(wchar_t *Str1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct W32_PUSH_LOCK *v12; // [rsp+20h] [rbp-18h] BYREF

  v5 = 1;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus((__int64)Str1, a2, (__int64)a3) )
    return 0LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96) + 4872LL;
  PushLockExclusiveObj<0,1>::PushLockExclusiveObj<0,1>(&v12, v9);
  GreAcquirePushLockExclusive2<16,1>(v9);
  WaitForConcurrentEUDCOperationCompletion((struct Gre::Font::GLOBALS *)v9);
  if ( Str1 )
  {
    v5 = bDeleteFlEntry(Str1, a3);
    if ( !v5 )
      v5 = bDeleteFlEntry(Str1, a3);
  }
  else if ( *(_QWORD *)(v9 + 8656) || *(_QWORD *)(v9 + 8664) )
  {
    vUnlinkAllEudcRFONTsAndPFEs(0, v10);
    bUnloadEudcFont((struct PFE **)(v9 + 8656));
    *(_OWORD *)(v9 + 8656) = 0LL;
    ++*(_DWORD *)(v9 + 9232);
    *(_WORD *)(v9 + 8672) = 0;
    bWriteUserSystemEUDCRegistry((PVOID)&FLOAT_0_0);
  }
  GreReleasePushLockExclusive2<16,1>(v9);
  GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v11, v12);
  return v5;
}
