/*
 * XREFs of sub_140002380 @ 0x140002380
 * Callers:
 *     sub_1400734AC @ 0x1400734AC (sub_1400734AC.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002380(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        void **a7,
        void **a8,
        __int64 a9)
{
  __int64 v11; // rdx
  int v12; // r8d
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _WORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rcx
  _BYTE v21[32]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+5Ch] [rbp-25h]
  __int64 v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h]
  _WORD *v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  int v29; // [rsp+7Ch] [rbp-5h]
  _BYTE *v30; // [rsp+80h] [rbp-1h]
  int v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+8Ch] [rbp+Bh]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v33 = a9;
  v11 = -1LL;
  v34 = 4LL;
  v12 = 1;
  v13 = *a8;
  if ( *a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1400C67A8;
    v15 = 1;
  }
  v31 = v15;
  v30 = v13;
  v32 = 0;
  v16 = *a7;
  if ( *a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &unk_1400C7450;
    v18 = 2;
  }
  v28 = v18;
  v27 = v16;
  v29 = 0;
  v26 = 16LL;
  v25 = *a6;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v19 = &unk_1400C67A8;
  }
  v22 = v19;
  v23 = v12;
  v24 = 0;
  return sub_1400239C4(a1, a2, 0, 0, 7, (__int64)v21);
}
