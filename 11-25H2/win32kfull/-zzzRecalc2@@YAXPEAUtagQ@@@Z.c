/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005E470
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140151AA8 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005E594 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14027CD00 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall zzzRecalc2(struct tagQ *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  int v4; // r15d
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagQ **v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *i; // rbx
  struct tagQ **v14; // rsi
  struct tagQ *v15; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70600);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  do
  {
    v4 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v10 = (struct tagQ **)RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 87) == a1 )
      {
        for ( i = *(_QWORD **)(W32GetUserSessionState(v9, v8) + 16904); i; i = (_QWORD *)*i )
        {
          W32GetUserSessionState(v12, v11);
          v14 = (struct tagQ **)i[1];
          if ( v14 == v10 )
          {
            v14 = (struct tagQ **)i[2];
          }
          else if ( (struct tagQ **)i[2] != v10 )
          {
            continue;
          }
          if ( v14[87] != a1 )
          {
            v15 = tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v14, a1);
            if ( v15 )
              zzzDestroyQueue(v15, v14);
            v4 = 1;
          }
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v4 );
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  zzzEndDeferWinEventNotify();
}
