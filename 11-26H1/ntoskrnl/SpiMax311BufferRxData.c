/*
 * XREFs of SpiMax311BufferRxData @ 0x1407220E4
 * Callers:
 *     SpiMax311PutByte @ 0x1407221F0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x140722270 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x140722420 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140E65010;
  v2 = ((_WORD)qword_140E65010 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140E65010) )
  {
    word_140E6501A[(unsigned int)qword_140E65010] = a1;
    LODWORD(qword_140E65010) = v2;
  }
  return result;
}
