/*
 * XREFs of sub_140002930 @ 0x140002930
 * Callers:
 *     sub_1400AC554 @ 0x1400AC554 (sub_1400AC554.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  v14 = a6;
  v15 = 4LL;
  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = &unk_1400C67A8;
    v8 = 1;
  }
  v12 = v8;
  v11 = v6;
  v13 = 0;
  return sub_1400285F0(&dword_1400E7460, a2, 0LL, 0LL, 4, v10);
}
