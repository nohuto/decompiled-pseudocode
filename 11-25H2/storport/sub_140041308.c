/*
 * XREFs of sub_140041308 @ 0x140041308
 * Callers:
 *     sub_140044848 @ 0x140044848 (sub_140044848.c)
 * Callees:
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_140038378 @ 0x140038378 (sub_140038378.c)
 *     sub_1400383AC @ 0x1400383AC (sub_1400383AC.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_140041308(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const int *a7,
        _BYTE *a8,
        _BYTE *a9,
        _BYTE *a10,
        int a11,
        __int64 a12,
        int a13,
        const int *a14)
{
  _UNKNOWN **v14; // rax
  int v17; // ecx
  char v18; // r11
  unsigned __int16 v19; // r10
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D8h]
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  char v27; // [rsp+49h] [rbp-BFh] BYREF
  char v28; // [rsp+4Ah] [rbp-BEh] BYREF
  char v29; // [rsp+4Bh] [rbp-BDh] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  char *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  int *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  char *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  char *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  __int64 v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  _BYTE v51[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v52[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v53[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v54[16]; // [rsp+138h] [rbp+30h] BYREF
  int *v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+150h] [rbp+48h]
  int v57; // [rsp+154h] [rbp+4Ch]
  _DWORD *v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  __int64 v61; // [rsp+168h] [rbp+60h]
  _DWORD v62[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+180h] [rbp+78h]
  int v65; // [rsp+184h] [rbp+7Ch]
  _BYTE v66[16]; // [rsp+188h] [rbp+80h] BYREF
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v14 = &retaddr;
  if ( (unsigned int)dword_140168178 > 5 )
  {
    LOBYTE(v14) = sub_14003F840(a1, 0x400000000000LL);
    if ( (_BYTE)v14 )
    {
      v30 = v17;
      v26 = 1;
      v35 = &v33;
      v38 = 1LL;
      v37 = &v26;
      v39 = &v30;
      v41 = &v27;
      v43 = &v28;
      v45 = &v29;
      v47 = a5;
      v42 = 1LL;
      v44 = 1LL;
      v46 = 1LL;
      v49 = a6;
      v33 = 0x1000000LL;
      v36 = 8LL;
      v40 = 4LL;
      v27 = a2;
      v28 = a3;
      v29 = v18;
      v48 = 16LL;
      v50 = 16LL;
      sub_140037B0C((__int64)v51, a7);
      sub_140038378((__int64)v52, a8);
      sub_140038378((__int64)v53, a9);
      sub_140038378((__int64)v54, a10);
      v57 = 0;
      v60 = 0;
      v55 = &v31;
      v58 = v62;
      v56 = 4;
      v62[0] = v19;
      v62[1] = 0;
      v65 = 0;
      v32 = a13;
      v61 = a12 & -(__int64)(v19 != 0);
      v64 = 4;
      v63 = &v32;
      v31 = v20;
      v59 = 2;
      sub_140037B0C((__int64)v66, a14);
      LOBYTE(v14) = sub_1400383AC((__int64)v34, (unsigned __int8 *)dword_14015748D, v21, v22, v24, v25, 0x13u, v34);
    }
  }
  return (char)v14;
}
