/*
 * XREFs of sub_140028D60 @ 0x140028D60
 * Callers:
 *     sub_1400122B4 @ 0x1400122B4 (sub_1400122B4.c)
 *     sub_140065010 @ 0x140065010 (sub_140065010.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140028D60(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rdx
  __int64 result; // rax

  v3 = (unsigned __int16 *)sub_1400B6010(a1);
  *(_DWORD *)(a2 + 16) = v3[1];
  *(_DWORD *)(a2 + 20) = v3[7] >> 3;
  *(float *)(a2 + 28) = (float)*((int *)v3 + 1);
  if ( *v3 == 0xFFFE )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 12);
    *(_DWORD *)(a2 + 24) = v3[9];
    result = *((unsigned int *)v3 + 5);
  }
  else
  {
    *(_OWORD *)a2 = xmmword_1400C6E60;
    *(_DWORD *)a2 = *v3;
    *(_DWORD *)(a2 + 24) = v3[7];
    result = 1LL;
    if ( v3[1] != 1 )
    {
      result = 0LL;
      if ( v3[1] == 2 )
        result = 3LL;
    }
  }
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
