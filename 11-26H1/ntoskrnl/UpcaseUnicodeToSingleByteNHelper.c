/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x140215C50
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14097C090 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14097D0C0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v8; // r11
  unsigned int v9; // r10d
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned __int64 v17; // r9

  v8 = a3;
  v9 = a2;
  if ( KeGetPcr()->Prcb.NestingLevel )
    goto LABEL_5;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
  {
    Blink = (struct _LIST_ENTRY *)CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  }
  else if ( Blink && !(unsigned __int8)PsIsServerSilo(Blink) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(Blink[81].Blink) )
      ;
  }
  if ( Blink )
    Flink = Blink[94].Flink;
  else
LABEL_5:
    Flink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  v14 = Flink[75].Flink;
  v15 = a5;
  if ( a5 >= v9 )
    v15 = v9;
  if ( v8 )
    *v8 = v15;
  if ( v15 )
  {
    v16 = v15;
    do
    {
      v17 = *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( (unsigned int)v17 >= 0x61 )
      {
        if ( (unsigned int)v17 > 0x7A )
        {
          if ( v14 && (unsigned __int16)v17 >= 0xC0u )
            LOWORD(v17) = *((_WORD *)&v14->Flink
                          + (v17 & 0xF)
                          + *((unsigned __int16 *)&v14->Flink
                            + ((unsigned __int8)v17 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&v14->Flink + (v17 >> 8))))
                        + v17;
        }
        else
        {
          LOWORD(v17) = v17 - 32;
        }
      }
      ++a4;
      *a1++ = *(_BYTE *)((unsigned __int16)v17 + a6);
      --v16;
    }
    while ( v16 );
  }
  return v9 < a5 ? 0x80000005 : 0;
}
