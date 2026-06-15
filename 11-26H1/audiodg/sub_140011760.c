/*
 * XREFs of sub_140011760 @ 0x140011760
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_140011660 @ 0x140011660 (sub_140011660.c)
 *     sub_14001F1BC @ 0x14001F1BC (sub_14001F1BC.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140055CB4 @ 0x140055CB4 (sub_140055CB4.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_14006B590 @ 0x14006B590 (sub_14006B590.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_140073F98 @ 0x140073F98 (sub_140073F98.c)
 * Callees:
 *     sub_140055BB4 @ 0x140055BB4 (sub_140055BB4.c)
 *     sub_140055C30 @ 0x140055C30 (sub_140055C30.c)
 *     sub_140055C58 @ 0x140055C58 (sub_140055C58.c)
 *     sub_140055C7C @ 0x140055C7C (sub_140055C7C.c)
 */

__int64 __fastcall sub_140011760(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  _WORD *v8; // rax
  _WORD *v9; // r14
  __int64 result; // rax
  int v11; // eax
  unsigned __int64 v12; // rsi
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a1;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(a3 + 2 * v6) );
  v7 = v6 + 1;
  *a4 = 0LL;
  if ( v6 + 1 < v6 )
    return 2147942934LL;
  v14 = 0LL;
  if ( !is_mul_ok(v7, 2uLL) )
    return 2147942934LL;
  v8 = CoTaskMemAlloc(2 * v7);
  *a4 = v8;
  v9 = v8;
  if ( !v8 )
    return 2147942414LL;
  v14 = v6;
  v15 = a3;
  if ( (int)sub_140055C58(v8, v6 + 1) < 0 )
  {
    result = 0LL;
    if ( v6 != -1LL )
      *v9 = 0;
  }
  else
  {
    if ( (int)sub_140055C7C(&v15, &v14) < 0 )
    {
      if ( v6 != -1LL )
        *v9 = 0;
    }
    else if ( v6 != -1LL )
    {
      v13 = 0LL;
      v11 = sub_140055BB4((_DWORD)v9, (int)v6 + 1, (unsigned int)&v13, v15, v14);
      v12 = v7 - v13;
      if ( v11 >= 0 && v12 > 1 )
        sub_140055C30(&v9[v13], 2 * v12);
    }
    return 0LL;
  }
  return result;
}
