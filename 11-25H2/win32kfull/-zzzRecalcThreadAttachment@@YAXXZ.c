/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140151AA8
 * Callers:
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005E470 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005E594 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14027CD00 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ **v3; // rdi
  struct tagQ *v4; // r8
  __int64 v5; // rax
  struct tagQ *v6; // rdx
  __int64 v7; // rdx

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = (struct tagQ **)RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 87) )
    {
      if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)RecalcPtiFromListEntry + 59)) )
      {
        v5 = AllocQueue(0LL, 0LL);
        if ( !v5 )
          return;
        v6 = (struct tagQ *)v5;
      }
      else
      {
        v6 = v4;
      }
      tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v3, v6);
      zzzRecalc2(v3[87], v7);
    }
  }
}
