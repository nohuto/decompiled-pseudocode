/*
 * XREFs of sub_14002F304 @ 0x14002F304
 * Callers:
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14002F304(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _DWORD v11[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v13; // [rsp+50h] [rbp-9h] BYREF
  int v14; // [rsp+58h] [rbp-1h]
  int v15; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  __int64 v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+78h] [rbp+1Fh]
  _WORD *v21; // [rsp+80h] [rbp+27h]
  int v22; // [rsp+88h] [rbp+2Fh]
  int v23; // [rsp+8Ch] [rbp+33h]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_1400C7450;
    v9 = 2;
  }
  v22 = v9;
  v19 = a5;
  v11[0] = *a2 << 24;
  v11[1] = *(unsigned __int16 *)(a2 + 1);
  v12 = *(_QWORD *)(a2 + 3);
  v13 = *(unsigned __int16 **)(a1 + 8);
  v21 = v7;
  v23 = 0;
  v20 = 8LL;
  v14 = *v13;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v15 = 2;
  v18 = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v11,
           0LL,
           0LL,
           4,
           &v13,
           (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
}
