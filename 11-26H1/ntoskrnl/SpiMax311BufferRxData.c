/*
 * XREFs of SpiMax311BufferRxData @ 0x140726CB4
 * Callers:
 *     SpiMax311PutByte @ 0x140726DC0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x140726E40 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x140726FF0 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140E65220;
  v2 = ((_WORD)qword_140E65220 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140E65220) )
  {
    word_140E6522A[(unsigned int)qword_140E65220] = a1;
    LODWORD(qword_140E65220) = v2;
  }
  return result;
}
