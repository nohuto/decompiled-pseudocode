/*
 * XREFs of write_char_1 @ 0x180134ECC
 * Callers:
 *     _output_s @ 0x18013444C (_output_s.c)
 *     write_multi_char_1 @ 0x180134F1C (write_multi_char_1.c)
 *     write_string_1 @ 0x180134F74 (write_string_1.c)
 * Callees:
 *     _flsbuf_s @ 0x1801375C4 (_flsbuf_s.c)
 */

__int64 __fastcall write_char_1(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      result = flsbuf_s((unsigned int)(char)a1, a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      result = a1;
    }
    if ( (_DWORD)result == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
