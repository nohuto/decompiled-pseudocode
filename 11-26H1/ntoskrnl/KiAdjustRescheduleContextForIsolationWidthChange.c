/*
 * XREFs of KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FDD3C
 * Callers:
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 * Callees:
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140411870 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 */

char __fastcall KiAdjustRescheduleContextForIsolationWidthChange(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        struct _KPRCB *a2,
        struct _KTHREAD *a3,
        int a4)
{
  struct _KTHREAD *v8; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rsi
  unsigned __int8 AllCompareThreadStateFlags; // cl
  int v11; // eax
  char v12; // r10
  __int64 v13; // r11
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v14; // rcx
  char v15; // r10
  __int64 i; // rbp
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v17; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v18; // rax
  struct _KTHREAD *v19; // rdx
  struct _KTHREAD *v20; // rdx
  unsigned __int8 v21; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v22; // r11
  char v23; // r10
  __int64 v24; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v25; // rcx
  unsigned __int8 v26; // al
  __int64 v27; // r10
  __int64 v28; // r9
  _KI_RESCHEDULE_CONTEXT_ENTRY *v29; // rax
  _KPRCB *Prcb; // r11
  _KTHREAD *NewThread; // rcx
  _KTHREAD *SmtIsolationThread; // rdi
  __int64 v33; // rcx
  char v34; // al
  bool v35; // cl
  char v36; // al
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // al
  __int64 v39; // r11
  __int64 v41[5]; // [rsp+20h] [rbp-28h] BYREF

  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(a1, a2);
  AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
  v11 = (AllCompareThreadStateFlags >> 1) & 1;
  if ( v11 == a4 )
    return 0;
  if ( v11 <= a4 )
  {
    for ( i = 0LL; (unsigned int)i < a1->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v17 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)a1->ProcessorEntries + 32 * i + 8 * (unsigned int)i);
      if ( v17 != RescheduleContextEntryForPrcb && !KiDoesThreadDominateRescheduleContextEntry(v17, a3, 2, 0LL) )
      {
        v18 = KiFindRescheduleContextEntryForPrcb(a1, a2);
        KiAdjustRescheduleContextEntryForThreadRemoval(v18, v19, 0, 1);
        if ( (v23 & 1) != 0 )
        {
          v24 = 0LL;
          if ( a1->ProcessorCount > v21 )
          {
            do
            {
              v25 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)a1->ProcessorEntries + 32 * v24 + 8 * (unsigned int)v24);
              if ( v25 != v22 )
                KiAdjustRescheduleContextEntryForThreadRemoval(v25, v20, 0, 1);
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < a1->ProcessorCount );
          }
          a1->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
        }
        return 1;
      }
    }
    v26 = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    RescheduleContextEntryForPrcb->NewThread = (_KTHREAD *)-2LL;
    v27 = 0LL;
    for ( RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = v26 ^ (v26 ^ (2 * a4)) & 2;
          (unsigned int)v27 < a1->ProcessorCount;
          v27 = (unsigned int)(v27 + 1) )
    {
      v28 = v27;
      v29 = &a1->ProcessorEntries[v27];
      if ( v29 != RescheduleContextEntryForPrcb )
      {
        Prcb = v29->Prcb;
        NewThread = a1->ProcessorEntries[v27].NewThread;
        v41[0] = 0LL;
        SmtIsolationThread = Prcb->SmtIsolationThread;
        if ( NewThread && (unsigned __int64)NewThread <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread((__int64)NewThread) )
        {
          if ( (*((_BYTE *)&a1->ProcessorEntries[v28].0 + 1) & 1) != 0 )
            *(_DWORD *)(v33 + 116) |= 2u;
          *(_BYTE *)(v33 + 565) = 1;
          KiInsertDeferredReadyList(v41, v33);
        }
        a1->ProcessorEntries[v28].AllCompareThreadStateFlags &= ~1u;
        v34 = a1->ProcessorEntries[v28].AllCompareThreadStateFlags & 0xFD;
        a1->ProcessorEntries[v28].CompareThread = a3;
        v35 = (*((_DWORD *)&a3->0 + 1) & 2) != 0;
        a1->ProcessorEntries[v28].NewThread = SmtIsolationThread;
        v36 = (v34 ^ (2 * v35)) & 0xE3 | 4;
        v37 = v36 | 0x20;
        v38 = v36 & 0xDF;
        if ( a3 == SmtIsolationThread )
          v37 = v38;
        *((_BYTE *)&a1->ProcessorEntries[v28].0 + 1) &= ~1u;
        a1->ProcessorEntries[v28].AllCompareThreadStateFlags = v37;
        if ( !KiIsPrcbThread((__int64)SmtIsolationThread) )
          SmtIsolationThread->NextProcessor = *(_DWORD *)(v39 + 36);
      }
    }
    a1->MaximumThreadIsolationWidth = KiIsolationWidthCore;
    return 0;
  }
  RescheduleContextEntryForPrcb->NewThread = (_KTHREAD *)-2LL;
  v12 = 0;
  v13 = 0LL;
  for ( RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags ^ (AllCompareThreadStateFlags ^ (2 * a4)) & 2;
        (unsigned int)v13 < a1->ProcessorCount;
        v13 = (unsigned int)(v13 + 1) )
  {
    v14 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)a1->ProcessorEntries + 32 * v13 + 8 * (unsigned int)v13);
    if ( v14 != RescheduleContextEntryForPrcb )
    {
      KiAdjustRescheduleContextEntryForThreadRemoval(v14, v8, 0, 1);
      v12 = v15 | 1;
    }
  }
  a1->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  return v12;
}
