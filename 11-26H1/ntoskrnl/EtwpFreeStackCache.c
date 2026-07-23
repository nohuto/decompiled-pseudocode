/*
 * XREFs of EtwpFreeStackCache @ 0x140AC020C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpEnableStackCaching @ 0x140AC00AC (EtwpEnableStackCaching.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackCache(char *P)
{
  __int64 i; // rsi
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY v4; // rcx
  char *v5; // r14
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
  {
    v5 = &P[16 * i + 32 + 8 * i];
    while ( 1 )
    {
      v6 = *(_QWORD **)v5;
      if ( *(char **)v5 == v5 )
        break;
      if ( (char *)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      v7[1] = v5;
      if ( v6 )
      {
        do
        {
          v8 = (_QWORD *)v6[2];
          ExFreePoolWithTag(v6, 0);
          v6 = v8;
        }
        while ( v8 );
      }
    }
  }
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)P + 1);
  while ( v3 )
  {
    v4 = v3;
    v3 = v3->Next;
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
}
