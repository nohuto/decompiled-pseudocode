/*
 * XREFs of sub_140023608 @ 0x140023608
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140023608(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 *a12,
        void **a13,
        void **a14,
        __int64 *a15,
        __int64 a16)
{
  int v19; // r8d
  __int64 v20; // rcx
  _WORD *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  _WORD *v24; // rdx
  __int64 v25; // rcx
  _BYTE v27[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  _WORD *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  _WORD *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]

  v52 = a16;
  v53 = 4LL;
  v51 = 16LL;
  v19 = 2;
  v50 = *a15;
  v20 = -1LL;
  v21 = *a14;
  if ( *a14 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &unk_1400C7450;
    v23 = 2;
  }
  v48 = v23;
  v47 = v21;
  v49 = 0;
  v24 = *a13;
  if ( *a13 )
  {
    do
      ++v20;
    while ( v24[v20] );
    v19 = 2 * v20 + 2;
  }
  else
  {
    v24 = &unk_1400C7450;
  }
  v44 = v24;
  v45 = v19;
  v46 = 0;
  v42 = *a12;
  v43 = 16LL;
  v41 = 16LL;
  v25 = *a11;
  v38 = a10;
  v36 = a9;
  v34 = a8;
  v32 = a7;
  v30 = a6;
  v40 = v25;
  v39 = 4LL;
  v37 = 4LL;
  v28 = *a5;
  v35 = 4LL;
  v33 = 4LL;
  v31 = 8LL;
  v29 = 16LL;
  return sub_1400239C4(a1, a2, a3, 0, 14, (__int64)v27);
}
