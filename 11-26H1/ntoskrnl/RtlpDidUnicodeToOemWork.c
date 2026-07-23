/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x14097C150
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14097B090 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14097E750 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rbx
  char v4; // si
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v6; // r10d
  struct _LIST_ENTRY *Flink; // rbp
  __int16 v8; // r11
  __int16 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 i; // rax
  __int64 v16; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1) )
    return 1;
  _InterlockedOr(v17, 0);
  v4 = 1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = *v2;
  Flink = CurrentServerSiloGlobals[74].Flink;
  v8 = WORD2(CurrentServerSiloGlobals[68].Blink);
  v9 = (__int16)CurrentServerSiloGlobals[69].Flink;
  if ( WORD2(CurrentServerSiloGlobals[69].Flink) )
  {
    v10 = 0LL;
    v11 = 0;
    while ( (unsigned int)v10 < v6 )
    {
      v12 = *((_QWORD *)v2 + 1);
      v13 = *(unsigned __int8 *)(v10 + v12);
      if ( *((_WORD *)&Flink->Flink + v13) && (v16 = (unsigned int)(v10 + 1), (unsigned int)v16 < v6) )
      {
        LODWORD(v10) = v10 + 1;
        if ( ((char)v13 << 8) + *(unsigned __int8 *)(v16 + v12) == v8
          && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v11) != v9 )
        {
          return 0;
        }
      }
      else if ( (char)v13 == (unsigned __int8)v8 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v11) != v9 )
      {
        return 0;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v11;
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( *(char *)(*((_QWORD *)v2 + 1) + i) == (unsigned __int8)v8 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * i) != v9 )
        return 0;
    }
  }
  return v4;
}
