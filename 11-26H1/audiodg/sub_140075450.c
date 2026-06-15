/*
 * XREFs of sub_140075450 @ 0x140075450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140075398 @ 0x140075398 (sub_140075398.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075450(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  signed int v4; // r8d
  signed int v5; // ebx
  __int64 v6; // r11
  __int64 result; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 < 0 )
    return 0LL;
  v8 = 0;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v4 = a3 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 )
    return 0LL;
  if ( (int)sub_140075398(&v8, v5, a4) < 0 )
    return 0LL;
  if ( v8 > 0xFFFFFFE7 )
    return 0LL;
  result = sub_1400B6010(*(_QWORD *)(v6 + 8));
  if ( !result )
    return 0LL;
  *(_DWORD *)(result + 12) = v5 - 1;
  return result;
}
