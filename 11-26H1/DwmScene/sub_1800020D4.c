/*
 * XREFs of sub_1800020D4 @ 0x1800020D4
 * Callers:
 *     sub_180023D10 @ 0x180023D10 (sub_180023D10.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800020D4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rdx
  int v17; // r8d
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  _BYTE *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  _BYTE *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]

  v51 = a15;
  v16 = -1LL;
  v49 = a14;
  v17 = 1;
  v47 = a13;
  v45 = a12;
  v43 = a11;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v18 = *a10;
  v46 = 4LL;
  v44 = 8LL;
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_1800F9DE0;
    v20 = 1;
  }
  v41 = v20;
  v40 = v18;
  v42 = 0;
  v21 = *a9;
  if ( *a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_1800F9DE0;
    v23 = 1;
  }
  v38 = v23;
  v37 = v21;
  v39 = 0;
  v36 = 16LL;
  v35 = *a8;
  v34 = 16LL;
  v32 = 4LL;
  v24 = *a7;
  v31 = a6;
  v33 = v24;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v16;
    while ( v25[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v25 = &unk_1800F9DE0;
  }
  v28 = v25;
  v29 = v17;
  v30 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0xDu, &v27);
}
