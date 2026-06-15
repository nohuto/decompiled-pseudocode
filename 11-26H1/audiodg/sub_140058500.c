/*
 * XREFs of sub_140058500 @ 0x140058500
 * Callers:
 *     sub_140058AB4 @ 0x140058AB4 (sub_140058AB4.c)
 * Callees:
 *     sub_140056B1C @ 0x140056B1C (sub_140056B1C.c)
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 */

__int64 sub_140058500(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  int v3; // edi
  int v4; // ebx
  __int64 v5; // r8
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a1;
  v4 = a2;
  LODWORD(v5) = dword_1400E8540[0];
  if ( (dword_1400E8540[0] & 4) == 0 )
  {
    v5 = *sub_140056B1C(a1, &v7);
    v7 = v5;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  return sub_140058590(v3 + 8, 55042835, ((unsigned int)v5 >> 10) & 1, ((unsigned int)v5 >> 11) & 1, (__int64)va, v4, 3);
}
