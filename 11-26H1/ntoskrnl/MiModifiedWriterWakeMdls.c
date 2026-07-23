/*
 * XREFs of MiModifiedWriterWakeMdls @ 0x1403FFA38
 * Callers:
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 * Callees:
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403FF560 (MiMakePagefileWriterEntryAvailable.c)
 */

char __fastcall MiModifiedWriterWakeMdls(struct _KEVENT *a1)
{
  struct _LIST_ENTRY *i; // rax
  LIST_ENTRY *p_WaitListHead; // rdx
  __int64 v4; // r10
  __int64 v5; // r9
  _QWORD *v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  KeResetEvent(a1 + 42);
  _InterlockedOr(v8, 0);
  LODWORD(i) = a1[929].Header.Lock;
  if ( (_DWORD)i )
  {
    p_WaitListHead = &a1[929].Header.WaitListHead;
    v4 = (unsigned int)i;
    do
    {
      LOBYTE(i) = BYTE6(p_WaitListHead->Flink[10].Blink);
      if ( ((unsigned __int8)i & 1) != 0 )
      {
        v5 = 0LL;
        BYTE6(p_WaitListHead->Flink[10].Blink) = (unsigned __int8)i & 0xFE;
        for ( i = p_WaitListHead->Flink;
              (unsigned int)v5 < LODWORD(p_WaitListHead->Flink[2].Blink);
              v5 = (unsigned int)(v5 + 1) )
        {
          v6 = (_QWORD *)*((_QWORD *)&i[2].Flink->Flink + v5);
          if ( v6 && *v6 == 2575857425LL )
            MiMakePagefileWriterEntryAvailable(v6);
          i = p_WaitListHead->Flink;
        }
      }
      p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 8);
      --v4;
    }
    while ( v4 );
  }
  return (char)i;
}
