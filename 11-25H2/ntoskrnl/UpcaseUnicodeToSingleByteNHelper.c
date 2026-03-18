/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x140310D10
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1408E6250 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408E7AB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
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
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned __int64 v16; // r8

  v7 = a2;
  v8 = a5;
  if ( KeGetPcr()->Prcb.NestingLevel )
    goto LABEL_5;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
  {
    Blink = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  }
  else if ( Blink && !PsIsServerSilo(Blink) )
  {
    while ( !PsIsServerSilo(*(_QWORD *)(Blink + 1304)) )
      ;
  }
  if ( Blink )
    v12 = *(_QWORD **)(Blink + 1504);
  else
LABEL_5:
    v12 = &PspHostSiloGlobals;
  v13 = v12[150];
  v14 = v8;
  if ( v8 >= v7 )
    v14 = v7;
  if ( a3 )
    *a3 = v14;
  if ( v14 )
  {
    v15 = v14;
    do
    {
      v16 = *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( (unsigned int)v16 >= 0x61 )
      {
        if ( (unsigned int)v16 > 0x7A )
        {
          if ( v13 && (unsigned __int16)v16 >= 0xC0u )
            LOWORD(v16) = *(_WORD *)(v13
                                   + 2
                                   * ((v16 & 0xF)
                                    + *(unsigned __int16 *)(v13
                                                          + 2LL
                                                          * (((unsigned __int8)v16 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v13 + 2 * (v16 >> 8))))))
                        + v16;
        }
        else
        {
          LOWORD(v16) = v16 - 32;
        }
      }
      ++a4;
      *a1++ = *(_BYTE *)((unsigned __int16)v16 + a6);
      --v15;
    }
    while ( v15 );
  }
  return v7 < v8 ? 0x80000005 : 0;
}
