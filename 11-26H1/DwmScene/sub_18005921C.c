/*
 * XREFs of sub_18005921C @ 0x18005921C
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 *__fastcall sub_18005921C(__int64 a1, int a2)
{
  __int64 *result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (__int64 *)sub_18007AB60(a1);
  v5 = result[64];
  v6 = **(_QWORD **)(a1 + 1616);
  v7 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_DWORD *)(v6 + 32) == -1 || *(_DWORD *)(v6 + 32) == a2 )
      sub_18004EDEC(v5, v6 + 40);
    result = sub_18001D6F4(&v7, v6);
    v6 = v7;
  }
  return result;
}
