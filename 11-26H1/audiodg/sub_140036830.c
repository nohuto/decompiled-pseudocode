/*
 * XREFs of sub_140036830 @ 0x140036830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140036830(__int64 a1, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  __int64 result; // rax

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5
    || v5 && (0xFFFFFFFFFFFFFFFFuLL / v5 < a3 || (unsigned __int64)(v5 * (__int64)a3) > 0xFFFFFFFFFFFFFFE7uLL) )
  {
    return 0LL;
  }
  result = sub_1400B6010(*(_QWORD *)(a1 + 8));
  if ( !result )
    return 0LL;
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 12) = v5 - 1;
  *(_DWORD *)(result + 16) = 1;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
