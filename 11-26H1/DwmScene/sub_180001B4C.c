/*
 * XREFs of sub_180001B4C @ 0x180001B4C
 * Callers:
 *     sub_180022110 @ 0x180022110 (sub_180022110.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180023BE0 @ 0x180023BE0 (sub_180023BE0.c)
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001B4C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9)
{
  __int64 v10; // rdx
  int v11; // r8d
  _BYTE *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  _BYTE *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
  v11 = 1;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_1800F9DE0;
    v14 = 1;
  }
  v29 = v14;
  v28 = v12;
  v30 = 0;
  v27 = 16LL;
  v26 = *a8;
  v25 = 16LL;
  v23 = 4LL;
  v15 = *a7;
  v22 = a6;
  v24 = v15;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v16[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v16 = &unk_1800F9DE0;
  }
  v19 = v16;
  v20 = v11;
  v21 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 7u, &v18);
}
