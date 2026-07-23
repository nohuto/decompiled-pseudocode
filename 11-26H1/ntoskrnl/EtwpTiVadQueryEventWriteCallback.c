/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x140A88B10
 * Callers:
 *     <none>
 * Callees:
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiClearBloomFilter @ 0x14025A220 (EtwpTiClearBloomFilter.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     EtwpTiFillVadEventWrite @ 0x14048BBC8 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiFreeVad @ 0x140A88C10 (EtwpTiFreeVad.c)
 *     EtwpTiQueryVad @ 0x140A88C30 (EtwpTiQueryVad.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  char *Pool2; // rsi
  __int64 v4; // rcx
  unsigned int i; // edi
  void *v6; // rcx
  BOOLEAN v7; // [rsp+20h] [rbp-28h]

  Vad = 0;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(Pool2, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v7);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)Pool2,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
      EtwpTiFreeVad(&Pool2[64 * (unsigned __int64)i]);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  EtwpTiClearBloomFilter(v4, *((_QWORD *)P + 10));
  v6 = (void *)*((_QWORD *)P + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
