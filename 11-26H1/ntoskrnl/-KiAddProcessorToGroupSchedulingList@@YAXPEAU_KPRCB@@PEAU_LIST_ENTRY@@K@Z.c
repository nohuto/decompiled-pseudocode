/*
 * XREFs of ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405FB7C0
 * Callers:
 *     ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405FB7C0 (-KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140BFE6CC (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405FB7C0 (-KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingList(struct _KPRCB *a1, struct _LIST_ENTRY *a2, unsigned int a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_ScbList; // rsi
  __int64 v8; // r15
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *p_Blink; // rax
  struct _LIST_ENTRY *v11; // rdx

  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    p_ScbList = &a1->ScbList;
    v8 = 29LL * a3;
    do
    {
      Blink = p_ScbList->Blink;
      p_Blink = (struct _LIST_ENTRY *)&Flink[v8 + 8].Blink;
      if ( Blink->Flink != p_ScbList )
        __fastfail(3u);
      p_Blink->Flink = p_ScbList;
      v11 = (struct _LIST_ENTRY *)((char *)Flink + 24);
      p_Blink->Blink = Blink;
      Blink->Flink = p_Blink;
      p_ScbList->Blink = p_Blink;
      if ( v11->Flink != v11 )
        KiAddProcessorToGroupSchedulingList(a1, v11, a3);
      Flink = Flink->Flink;
    }
    while ( Flink != a2 );
  }
}
