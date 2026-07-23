/*
 * XREFs of KiClearPriorityFloor @ 0x1403823E0
 * Callers:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     ?KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429430 (-KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(ULONG_PTR BugCheckParameter1, struct _SINGLE_LIST_ENTRY *a2, int a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v7; // esi
  char v8; // al
  int v9; // eax
  __int64 v10; // r8
  char v11; // al
  unsigned int v12; // r9d
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax

  v4 = a3;
  if ( a4 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v8 = *(_BYTE *)(BugCheckParameter1 + v4 + 824);
  if ( !v8 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v4, 2uLL, 0LL);
  LOBYTE(v9) = v8 - 1;
  *(_BYTE *)(BugCheckParameter1 + v4 + 824) = v9;
  if ( !(_BYTE)v9 )
  {
    v9 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v4);
    *(_DWORD *)(BugCheckParameter1 + 856) = v9;
    if ( v9 < (unsigned int)(1 << v4) && *(char *)(BugCheckParameter1 + 195) <= 31 )
    {
      if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline((unsigned int)v4) )
      {
        v10 = (unsigned int)*(char *)(BugCheckParameter1 + 563);
        if ( (int)v10 < 16 )
        {
          v11 = 0;
          v13 = v10 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
          if ( __OFSUB__(v13, (_DWORD)v10) || v13 == (_DWORD)v10 )
            v13 = *(char *)(BugCheckParameter1 + 563);
          if ( *(char *)(BugCheckParameter1 + 870) > 0 )
            v11 = *(_BYTE *)(BugCheckParameter1 + 870);
          v10 = (unsigned int)(v13 + v11);
          if ( (int)v10 >= 16 )
            v10 = 15LL;
          v12 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
          if ( (unsigned __int8)(v12 >> 4) > (int)v10 )
            v10 = (unsigned __int8)(v12 >> 4);
        }
        v14 = *(_DWORD *)(BugCheckParameter1 + 856);
        if ( !v14 )
          goto LABEL_19;
      }
      else
      {
        v10 = (unsigned int)*(char *)(BugCheckParameter1 + 563);
        if ( *(char *)(BugCheckParameter1 + 563) < 16 )
        {
          v17 = v10 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
          if ( __OFSUB__(v17, (_DWORD)v10) || v17 == (_DWORD)v10 )
            v17 = *(char *)(BugCheckParameter1 + 563);
          v18 = v10 + *(char *)(BugCheckParameter1 + 870);
          v10 = v18;
          if ( (int)v18 <= (int)v17 )
            v10 = v17;
          v16 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
          if ( (unsigned __int8)(v16 >> 4) > (int)v10 )
            v10 = (unsigned __int8)(v16 >> 4);
          if ( (int)v10 >= 16 )
          {
            v19 = v10;
            if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
              v19 = 15;
            v10 = v19;
          }
        }
        v14 = *(_DWORD *)(BugCheckParameter1 + 856);
        if ( !v14 )
          goto LABEL_19;
      }
      _BitScanReverse(&v14, v14);
      if ( (int)v10 < (int)v14 )
        v10 = v14;
LABEL_19:
      v9 = *(char *)(BugCheckParameter1 + 195);
      if ( (int)v10 < v9 )
        LOBYTE(v9) = KiSetPriorityThread(BugCheckParameter1, a2, (unsigned __int64 *)v10);
    }
  }
  if ( !v7 )
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v9;
}
