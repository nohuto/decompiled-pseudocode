/*
 * XREFs of sub_180093978 @ 0x180093978
 * Callers:
 *     sub_1800942A4 @ 0x1800942A4 (sub_1800942A4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180093978(_DWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  _DWORD *v8; // rdi
  unsigned __int64 v9; // rcx

  v3 = a1;
  result = a2 - (_QWORD)a1;
  if ( *a3 == _mm_cvtsi128_si32((__m128i)0LL) )
    return (unsigned __int64)memset(a1, 0, result & 0xFFFFFFFFFFFFFFFCuLL);
  v6 = (result + 3) >> 2;
  if ( (unsigned __int64)a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 4 )
  {
    result = (unsigned __int64)&a1[v6 - 1];
    if ( a1 > a3 || result < (unsigned __int64)a3 )
    {
      v7 = 4 * (v6 & 0xFFFFFFFFFFFFFFFCuLL);
      v8 = a1;
      v9 = v7 >> 2;
      result = _mm_cvtsi128_si32((__m128i)(unsigned int)*a3);
      v3 = (_DWORD *)((char *)v3 + v7);
      while ( v9 )
      {
        *v8++ = result;
        --v9;
      }
    }
  }
  while ( v3 != (_DWORD *)a2 )
  {
    result = (unsigned int)*a3;
    *v3++ = result;
  }
  return result;
}
