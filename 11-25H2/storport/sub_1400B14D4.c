/*
 * XREFs of sub_1400B14D4 @ 0x1400B14D4
 * Callers:
 *     sub_1400B7E68 @ 0x1400B7E68 (sub_1400B7E68.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_1400B14D4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _UNKNOWN **v11; // rax
  __int64 v13; // rcx
  const int *v14; // rdx
  __int64 v15; // r10
  __int16 v16; // cx
  const int *v17; // rdx
  const int *v18; // rax
  __int64 v19; // r10
  int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r8
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  char v25; // [rsp+39h] [rbp-CFh] BYREF
  __int16 v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  __int64 *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  _BYTE v40[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  _BYTE v45[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  char *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  _DWORD *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  __int64 v52; // [rsp+128h] [rbp+20h]
  _DWORD v53[2]; // [rsp+130h] [rbp+28h] BYREF
  char *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  __int16 *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  _DWORD *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 v60; // [rsp+168h] [rbp+60h]
  _DWORD v61[2]; // [rsp+170h] [rbp+68h] BYREF
  __int64 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  __int64 *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  __int64 *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  __int64 *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v11 = &retaddr;
  if ( (unsigned int)dword_140168178 > 5 )
  {
    LOBYTE(v11) = sub_14003F840(a1, 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v14 = *(const int **)(v13 + 4720);
      v36 = v13 + 5064;
      LODWORD(v29) = *(_DWORD *)(v13 + 56);
      v38 = &v29;
      v37 = 16LL;
      v39 = 4LL;
      sub_140037B0C((__int64)v40, v14);
      v16 = *(_WORD *)(v15 + 4736);
      v41 = &v26;
      v17 = (const int *)&unk_140149394;
      LOWORD(v27) = *(_WORD *)(v15 + 4738);
      v43 = &v27;
      v18 = *(const int **)(v15 + 5080);
      v26 = v16;
      v42 = 2LL;
      if ( v18 )
        v17 = v18;
      v44 = 2LL;
      sub_140037B0C((__int64)v45, v17);
      v46 = &v30;
      v24 = *(_BYTE *)(v19 + 5316);
      v48 = &v24;
      v50 = v53;
      v54 = &v25;
      v28 = a5;
      v56 = &v28;
      v58 = v61;
      v60 = a6;
      v61[0] = a7;
      v31 = a8;
      v62 = &v31;
      v32 = a9;
      v64 = &v32;
      v33 = a10;
      v66 = &v33;
      v34 = a11;
      v68 = &v34;
      v30 = *(_QWORD *)&qword_140168DC8;
      v47 = 8LL;
      v49 = 1LL;
      v51 = 2LL;
      v52 = a2;
      v53[0] = v20;
      v53[1] = 0;
      v25 = v21;
      v55 = 1LL;
      v57 = 2LL;
      v59 = 2LL;
      v61[1] = 0;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 8LL;
      LOBYTE(v11) = sub_140037A5C(
                      *(__int64 *)&qword_140168DC8,
                      (unsigned __int8 *)dword_1401569BE,
                      v22,
                      v21,
                      0x14u,
                      &v35);
    }
  }
  return (char)v11;
}
