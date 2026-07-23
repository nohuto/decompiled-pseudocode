/*
 * XREFs of KiPerformWaitDeferredWork @ 0x1403F08D0
 * Callers:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiPerformWaitDeferredWork(
        ULONG_PTR BugCheckParameter1,
        char a2,
        char a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v9; // r14d
  ULONG_PTR v10; // r9
  char v11; // al
  char v12; // al
  unsigned int v13; // edx
  __int64 v14; // r8
  char v15; // al
  unsigned int v16; // r9d
  int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax

  if ( (a2 & 2) == 0 )
    return a2 & 1;
  if ( !a3 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v10 = *(char *)(BugCheckParameter1 + 795);
  v11 = *(_BYTE *)(v10 + BugCheckParameter1 + 824);
  if ( !v11 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v10, 2uLL, 0LL);
  v12 = v11 - 1;
  *(_BYTE *)(v10 + BugCheckParameter1 + 824) = v12;
  if ( !v12 )
  {
    v13 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v10);
    *(_DWORD *)(BugCheckParameter1 + 856) = v13;
    if ( v13 < 1 << v10 && *(char *)(BugCheckParameter1 + 195) <= 31 )
    {
      if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline((unsigned int)v10) )
      {
        v14 = (unsigned int)*(char *)(BugCheckParameter1 + 563);
        if ( (int)v14 < 16 )
        {
          v15 = 0;
          v17 = v14 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
          if ( __OFSUB__(v17, (_DWORD)v14) || v17 == (_DWORD)v14 )
            v17 = *(char *)(BugCheckParameter1 + 563);
          if ( *(char *)(BugCheckParameter1 + 870) > 0 )
            v15 = *(_BYTE *)(BugCheckParameter1 + 870);
          v14 = (unsigned int)(v17 + v15);
          if ( (int)v14 >= 16 )
            v14 = 15LL;
          v16 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
          if ( (unsigned __int8)(v16 >> 4) > (int)v14 )
            v14 = (unsigned __int8)(v16 >> 4);
        }
        v18 = *(_DWORD *)(BugCheckParameter1 + 856);
        if ( !v18 )
          goto LABEL_29;
      }
      else
      {
        v14 = (unsigned int)*(char *)(BugCheckParameter1 + 563);
        if ( *(char *)(BugCheckParameter1 + 563) < 16 )
        {
          v20 = v14 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
          if ( __OFSUB__(v20, (_DWORD)v14) || v20 == (_DWORD)v14 )
            v20 = *(char *)(BugCheckParameter1 + 563);
          v21 = v14 + *(char *)(BugCheckParameter1 + 870);
          v14 = v21;
          if ( (int)v21 <= (int)v20 )
            v14 = v20;
          v19 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
          if ( (unsigned __int8)(v19 >> 4) > (int)v14 )
            v14 = (unsigned __int8)(v19 >> 4);
          if ( (int)v14 >= 16 )
          {
            v22 = v14;
            if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
              v22 = 15;
            v14 = v22;
          }
        }
        v18 = *(_DWORD *)(BugCheckParameter1 + 856);
        if ( !v18 )
          goto LABEL_29;
      }
      _BitScanReverse(&v18, v18);
      if ( (int)v14 < (int)v18 )
        v14 = v18;
LABEL_29:
      if ( (int)v14 < *(char *)(BugCheckParameter1 + 195) )
        KiSetPriorityThread(BugCheckParameter1, a4, (unsigned __int64 *)v14);
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 32;
  if ( !a3 )
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return a2 & 1;
}
