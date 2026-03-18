/*
 * XREFs of FreeMessageList @ 0x140068600
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140068030 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14014B3F8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  struct tagQMSG *v4; // rbx
  __int64 v5; // rdx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    DelQEntry((__int64)a1, (__int64 *)i, 1);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v4 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      FreeQEntry(v3, v5);
      v3 = v4;
    }
    while ( v4 );
  }
}
