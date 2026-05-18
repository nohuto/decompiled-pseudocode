/*
 * XREFs of sub_18006F7C0 @ 0x18006F7C0
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 * Callees:
 *     sub_18006F6BC @ 0x18006F6BC (sub_18006F6BC.c)
 *     sub_18006F8B8 @ 0x18006F8B8 (sub_18006F8B8.c)
 */

__int64 __fastcall sub_18006F7C0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; i += 152LL )
  {
    v5 = a1[1];
    v6 = a1[4];
    v7 = (v6 + 1) % (0x86BCA1AF286BCA1BuLL * ((a1[2] - v5) >> 3));
    a1[4] = v7;
    v8 = v5 + 152 * v7;
    if ( *(_BYTE *)(i + 120) )
    {
      result = sub_18006F6BC(v8, i);
    }
    else
    {
      sub_18006F6BC(v8, v5 + 152 * v6);
      *(_BYTE *)(v8 + 120) = 0;
      *(_QWORD *)(v8 + 128) = *(_QWORD *)(i + 128);
      result = sub_18006F8B8(v8 + 136);
    }
  }
  return result;
}
