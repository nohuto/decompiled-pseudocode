/*
 * XREFs of MiReplaceTransitionPage @ 0x1402931E8
 * Callers:
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiReplaceTransitionPageFinish @ 0x140293E78 (MiReplaceTransitionPageFinish.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebp
  unsigned int v10; // ebx
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+44h] [rbp-24h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  __int64 v16; // [rsp+50h] [rbp-18h]

  v4 = a4;
  v6 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
  v12[1] = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v12[0] = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v6);
  v12[2] = (a1 + 0x220000000000LL) / 48;
  v7 = 0xFFFFDE0000000000uLL;
  v13 = a3;
  v8 = (a2 + 0x220000000000LL) / 48;
  v12[3] = v8;
  v15 = a4;
  v9 = a4 & 2;
  if ( (a4 & 2) == 0 )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, v8, a3) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  if ( (int)MiReplaceTransitionPageInitializeTargetPfn(v12) < 0 )
  {
    if ( !v9 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
    if ( (v4 & 1) == 0 )
      MiReplaceTransitionPageInList(v12);
    MiReplaceTransitionPageFinish(v12);
    return 1LL;
  }
}
