/*
 * XREFs of sub_14002DD08 @ 0x14002DD08
 * Callers:
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000655C @ 0x14000655C (sub_14000655C.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115CC @ 0x1400115CC (sub_1400115CC.c)
 *     sub_140011A18 @ 0x140011A18 (sub_140011A18.c)
 *     sub_140011EE8 @ 0x140011EE8 (sub_140011EE8.c)
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_14002644C @ 0x14002644C (sub_14002644C.c)
 *     sub_140028694 @ 0x140028694 (sub_140028694.c)
 *     sub_140029734 @ 0x140029734 (sub_140029734.c)
 *     sub_14002DCA4 @ 0x14002DCA4 (sub_14002DCA4.c)
 *     sub_140030D48 @ 0x140030D48 (sub_140030D48.c)
 *     sub_1400313BC @ 0x1400313BC (sub_1400313BC.c)
 *     sub_1400319B8 @ 0x1400319B8 (sub_1400319B8.c)
 *     sub_140035CE4 @ 0x140035CE4 (sub_140035CE4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A72C @ 0x14006A72C (sub_14006A72C.c)
 *     sub_14006A830 @ 0x14006A830 (sub_14006A830.c)
 *     sub_14006A86C @ 0x14006A86C (sub_14006A86C.c)
 *     sub_14006A8B0 @ 0x14006A8B0 (sub_14006A8B0.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_14002DD08(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r14d
  unsigned __int16 *v5; // rax
  int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r15
  _QWORD *v10; // rax
  void *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  int *v14; // r13
  __int64 v15; // r14
  __int128 v16; // xmm6
  __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int128 v22; // xmm6
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  LPVOID v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // ecx
  LPVOID v32; // rax
  int v33; // eax
  bool v34; // zf
  unsigned __int16 *v35; // rax
  _QWORD *v36; // rcx
  const char *v37; // rax
  __int64 result; // rax
  int *v39; // rbx
  int *v40; // kr10_8
  int *v41; // rbx
  int *v42; // kr20_8
  int *v43; // rbx
  int *v44; // kr30_8
  int *v45; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-388h]
  int ppva; // [rsp+20h] [rbp-388h]
  int v48[2]; // [rsp+28h] [rbp-380h]
  char v49; // [rsp+40h] [rbp-368h]
  char v50; // [rsp+41h] [rbp-367h]
  __int64 v51; // [rsp+48h] [rbp-360h] BYREF
  __int64 v52; // [rsp+50h] [rbp-358h] BYREF
  int v53[2]; // [rsp+58h] [rbp-350h] BYREF
  __int64 v54; // [rsp+60h] [rbp-348h] BYREF
  __int128 *v55; // [rsp+68h] [rbp-340h] BYREF
  char v56; // [rsp+70h] [rbp-338h]
  LPVOID pv; // [rsp+78h] [rbp-330h] BYREF
  __int64 *v58; // [rsp+80h] [rbp-328h] BYREF
  int v59; // [rsp+88h] [rbp-320h]
  _DWORD *v60; // [rsp+90h] [rbp-318h]
  __int64 **v61; // [rsp+98h] [rbp-310h]
  __int64 v62; // [rsp+A0h] [rbp-308h] BYREF
  int v63; // [rsp+A8h] [rbp-300h]
  __int64 v64[2]; // [rsp+B0h] [rbp-2F8h] BYREF
  __int128 v65; // [rsp+C0h] [rbp-2E8h] BYREF
  __int64 *v66; // [rsp+D0h] [rbp-2D8h]
  __int64 v67; // [rsp+D8h] [rbp-2D0h]
  __int64 v68; // [rsp+E0h] [rbp-2C8h]
  __int64 *v69; // [rsp+E8h] [rbp-2C0h]
  __int64 *v70; // [rsp+F0h] [rbp-2B8h]
  __int64 v71; // [rsp+F8h] [rbp-2B0h] BYREF
  __int64 v72; // [rsp+100h] [rbp-2A8h] BYREF
  LPVOID v73; // [rsp+108h] [rbp-2A0h] BYREF
  int *v74; // [rsp+110h] [rbp-298h]
  __int64 *v75; // [rsp+118h] [rbp-290h]
  _DWORD *v76; // [rsp+120h] [rbp-288h]
  __int64 **v77; // [rsp+128h] [rbp-280h]
  int *v78; // [rsp+130h] [rbp-278h]
  ATL::CAtlException *v79; // [rsp+138h] [rbp-270h] BYREF
  ATL::CAtlException *v80; // [rsp+140h] [rbp-268h] BYREF
  ATL::CAtlException *v81; // [rsp+148h] [rbp-260h] BYREF
  ATL::CAtlException *v82; // [rsp+150h] [rbp-258h] BYREF
  __int128 v83; // [rsp+158h] [rbp-250h] BYREF
  __int128 v84; // [rsp+168h] [rbp-240h] BYREF
  LARGE_INTEGER v85[30]; // [rsp+180h] [rbp-228h] BYREF
  LARGE_INTEGER v86[30]; // [rsp+270h] [rbp-138h] BYREF

  v1 = a1;
  v68 = a1;
  v71 = 0LL;
  v50 = 0;
  v63 = 0;
  v59 = 1;
  v84 = 0LL;
  v83 = 0LL;
  v52 = 0LL;
  v73 = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v61 = (__int64 **)(a1 + 16);
  v77 = (__int64 **)(a1 + 16);
  v70 = (__int64 *)(a1 + 16);
  v58 = *(__int64 **)(a1 + 16);
  v2 = *(_QWORD *)sub_1400313BC(a1, &v58);
  v4 = sub_1400B6010(v2);
  if ( v4 < 0
    || (pv = 0LL, v5 = (unsigned __int16 *)sub_1400B6010(v62), v4 = sub_140006BCC(v5, &pv), v4 < 0)
    || (v6 = (int *)pv,
        sub_140035CE4(pv),
        v4 = sub_14004B6D4(v6, (unsigned int)*((unsigned __int16 *)v6 + 8) + 18, &v72),
        CoTaskMemFree(v6),
        v4 < 0) )
  {
LABEL_138:
    v36 = off_1400E73D8;
    goto LABEL_139;
  }
  v58 = *(__int64 **)(v1 + 24);
  v8 = *(_QWORD *)v1;
  if ( *(_QWORD *)v1 )
  {
    if ( *(_DWORD *)(v1 + 120) && !*(_DWORD *)(v8 + 212) )
    {
      pv = 0LL;
      sub_14002644C(v8, (__int64)&unk_1400C6968, &pv, 0LL, 0LL);
      v9 = pv;
      v60 = pv;
      if ( pv )
        goto LABEL_13;
      pv = 0LL;
      sub_14002644C(*(_QWORD *)v1, (__int64)&unk_1400C6A70, &pv, 0LL, 0LL);
      v9 = pv;
      v60 = pv;
      if ( pv )
        goto LABEL_13;
      v8 = *(_QWORD *)v1;
    }
    v10 = (_QWORD *)sub_140009AA8((_QWORD *)(v8 + 16), v7);
  }
  else
  {
    v10 = (_QWORD *)sub_140028694(0LL, (__int64 *)&v58);
  }
  v9 = (_DWORD *)*v10;
  v60 = (_DWORD *)*v10;
LABEL_13:
  v4 = sub_1400B6010(v9);
  if ( v4 < 0 )
    goto LABEL_138;
  v11 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 21LL, &unk_1400C9A58, v1);
  }
  while ( 1 )
  {
    v12 = v58;
    v69 = v58;
    if ( !v58 )
    {
      sub_1400B6010(v9);
      goto LABEL_132;
    }
    v51 = 0LL;
    v54 = 0LL;
    v75 = v58;
    v14 = *(int **)sub_140028694((__int64)v11, (__int64 *)&v58);
    v78 = v14;
    LOBYTE(v6) = 0;
    v49 = 0;
    if ( v14[10] == 2 )
      break;
    v4 = sub_1400B6010(v14);
    if ( v4 < 0 )
      goto LABEL_45;
    v27 = v14 + 8;
LABEL_103:
    if ( v4 == 1 )
      goto LABEL_104;
    if ( !v4 )
    {
      sub_1400B6010(v9);
      sub_1400B6010(v14);
      v34 = (_BYTE)v6 == 0;
LABEL_111:
      if ( !v34 && *(_DWORD *)(*(_QWORD *)v27 + 4LL) && *(_DWORD *)(*(_QWORD *)v27 + 52LL) )
      {
        sub_1400115CC(&v52);
        sub_140030D48(&v52, &v62);
      }
    }
LABEL_115:
    if ( !v50 )
    {
      if ( (*(_BYTE *)(v1 + 140) & 8) == 0
        || (v6 = (int *)sub_1400B6010(v72),
            v35 = (unsigned __int16 *)sub_1400B6010(v52),
            !(unsigned int)sub_140018A60(v35, (unsigned __int16 *)v6)) )
      {
        v9 = v14;
        v60 = v14;
        goto LABEL_130;
      }
      if ( !v51 )
        sub_140030D48(&v51, &v62);
    }
    v53[0] = 0;
    v4 = sub_1400319B8(v1, v52, v51, (unsigned int)v53, (__int64)&v84);
    if ( v4 < 0 )
      goto LABEL_45;
    v65 = xmmword_1400C6878;
    v4 = sub_14006A97C((unsigned int)&v84, 0, 0, v14[6], v53[0], 0, (__int64)&v65, (__int64)&v71);
    if ( v4 < 0 )
      goto LABEL_45;
    v4 = 0;
    try
    {
      *(_QWORD *)&v65 = v71;
      v58 = sub_140011EE8((__int64)v61, v69, (__int64 *)&v65);
    }
    catch ( ATL::CAtlException *v82 )
    {
      v44 = v6;
      v45 = (int *)v82;
      if ( *(_DWORD *)v82 == -1073741571 )
        o__resetstkoflw();
      v53[0] = *v45;
      v6 = v44;
      v4 = v53[0];
      if ( v53[0] < 0 )
        goto LABEL_125;
      v9 = v60;
      v1 = v68;
      v61 = (__int64 **)v70;
    }
    v71 = 0LL;
    v50 = 0;
LABEL_130:
    sub_1400115CC(&v54);
    sub_1400115CC(&v51);
    sub_140003238(&v54);
    sub_140003238(&v51);
  }
  pv = v14 + 8;
  v15 = *((_QWORD *)v14 + 4);
  v67 = v15;
  v66 = (__int64 *)(v15 + 40);
  if ( *(_QWORD *)(v15 + 40) )
  {
    v6 = (int *)(v15 + 4);
  }
  else
  {
    v55 = (__int128 *)(v15 + 8);
    v16 = *(_OWORD *)(v15 + 8);
    v17 = sub_140006470(v13);
    v65 = v16;
    sub_14000655C(v85, (LARGE_INTEGER)v17, "CreateApo", (__int64)&v65);
    v6 = (int *)(v15 + 4);
    *(_QWORD *)v48 = v66;
    ppv = *(LPVOID **)(v15 + 56);
    v4 = sub_1400B6010(*(_QWORD *)(v1 + 240));
    sub_1400066EC(v85);
    if ( v4 < 0 )
    {
      if ( v4 == -2147024882 )
        goto LABEL_45;
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 22LL, &unk_1400C9A58, v55, ppv, *(_QWORD *)v48);
      }
      sub_14002DCA4(v77, v12);
      v18 = *v6;
      if ( *v6 )
      {
        v19 = 1;
        v63 = v4;
        v83 = *v55;
      }
      else
      {
        v19 = 0;
      }
      if ( !v19 )
        v18 = v59;
      v59 = v18;
      goto LABEL_130;
    }
    if ( *v6 )
    {
      *(_QWORD *)v53 = 0LL;
      v4 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &v73);
      if ( v4 < 0 )
        goto LABEL_44;
      v4 = sub_1400B6010(v73);
      if ( v4 < 0 )
        goto LABEL_44;
      v21 = (__int64)v55;
      v22 = *v55;
      v23 = sub_140006470(v20);
      v65 = v22;
      sub_14000655C(v86, (LARGE_INTEGER)v23, "InitializeSystemEffect", (__int64)&v65);
      v65 = *(_OWORD *)(v67 + 24);
      v4 = sub_140029734(v53[0], *v66, v21, &v65, ppva, *(_DWORD *)(v1 + 128));
      sub_1400066EC(v86);
      if ( v4 < 0 )
      {
        if ( v4 == -2147024882 )
          goto LABEL_44;
        if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
          && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
          && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
        {
          sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 23LL, &unk_1400C9A58, v55, ppv, *(_QWORD *)v48);
        }
        if ( (int)sub_1400B6010(*(_QWORD *)(v1 + 240)) < 0 )
        {
LABEL_44:
          sub_140003238((__int64 *)v53);
LABEL_45:
          sub_140003238(&v54);
          sub_140003238(&v51);
          goto LABEL_132;
        }
        sub_14002DCA4(v61, v12);
        v63 = v4;
        v59 = *v6;
        v83 = *v55;
        sub_140003238((__int64 *)v53);
        goto LABEL_130;
      }
      sub_140003238((__int64 *)v53);
    }
    v15 = v67;
  }
  *(_QWORD *)&v65 = v6;
  if ( !*v6 || (v76 = (_DWORD *)(v15 + 52), !*(_DWORD *)(v15 + 52)) )
  {
    v4 = sub_1400B6010(v14);
    if ( v4 < 0 )
      goto LABEL_45;
LABEL_100:
    v27 = pv;
    LOBYTE(v6) = v49;
    goto LABEL_103;
  }
  v49 = 1;
  v56 = 1;
  v24 = sub_1400B6010(v14);
  v4 = v24;
  if ( v24 == -2005073917 )
  {
    v74 = v9 + 6;
    if ( v9[6] != 1 || !*(_DWORD *)(v1 + 312) )
      goto LABEL_73;
    v55 = 0LL;
    v4 = sub_1400B6010(*v66);
    if ( !v4 )
    {
      v64[0] = 0LL;
      v25 = sub_1400B6010(v55);
      v4 = sub_14001137C(*v74, v25, v64);
      if ( v4 >= 0 )
      {
        try
        {
          *(_QWORD *)v53 = v64[0];
          v58 = sub_140011A18((__int64 *)v61, (__int64)v12, (__int64 *)v53);
        }
        catch ( ATL::CAtlException *v79 )
        {
          v39 = (int *)v79;
          if ( *(_DWORD *)v79 == -1073741571 )
            o__resetstkoflw();
          v53[0] = *v39;
          v4 = v53[0];
          if ( v53[0] < 0 )
          {
LABEL_58:
            if ( v64[0] )
              sub_1400B6010(v64[0]);
            sub_140003238((__int64 *)&v55);
            goto LABEL_125;
          }
          v9 = v60;
          v14 = v78;
          v12 = v75;
          v69 = v75;
          v49 = v56;
          v6 = (int *)v65;
          v1 = v68;
          v61 = (__int64 **)v70;
        }
        v64[0] = 0LL;
        v26 = sub_1400B6010(v62);
        v4 = sub_14001137C(*v74, v26, v64);
        if ( v4 >= 0 )
        {
          try
          {
            v4 = 0;
            *(_QWORD *)&v65 = v64[0];
            sub_140011A18((__int64 *)v61, (__int64)v58, (__int64 *)&v65);
          }
          catch ( ATL::CAtlException *v80 )
          {
            v40 = v6;
            v41 = (int *)v80;
            if ( *(_DWORD *)v80 == -1073741571 )
              o__resetstkoflw();
            v53[0] = *v41;
            v6 = v40;
            v4 = v53[0];
            if ( v53[0] < 0 )
              goto LABEL_58;
            v9 = v60;
            v12 = v75;
            v1 = v68;
            v61 = (__int64 **)v70;
          }
          *(_DWORD *)(v1 + 140) |= 6u;
          *v76 = 0;
          v58 = v12;
          sub_140003238((__int64 *)&v55);
          goto LABEL_130;
        }
      }
      if ( v64[0] )
        sub_1400B6010(v64[0]);
    }
    sub_140003238((__int64 *)&v55);
    goto LABEL_70;
  }
  if ( v24 != 1 )
  {
LABEL_70:
    if ( v4 < 0 )
      goto LABEL_71;
    goto LABEL_100;
  }
  v27 = pv;
  if ( v9[6] != 1 || !*(_DWORD *)(v1 + 312) )
    goto LABEL_104;
  if ( !(unsigned __int8)sub_14006A72C(*v66) )
  {
    v29 = v62;
    v6 = (int *)sub_1400B6010(v52);
    if ( *((_WORD *)v6 + 1) != *(_WORD *)(sub_1400B6010(v29) + 2) )
    {
      v32 = pv;
      goto LABEL_97;
    }
    v30 = v52;
    v6 = (int *)sub_1400B6010(v62);
    v31 = *(_DWORD *)(sub_1400B6010(v30) + 4);
    v32 = pv;
    v27 = pv;
    if ( v31 != v6[1] )
    {
LABEL_97:
      v27 = v32;
      if ( (*(_BYTE *)(v1 + 140) & 6) == 0 )
      {
        *v76 = 0;
        v58 = v69;
        goto LABEL_130;
      }
    }
LABEL_104:
    v33 = sub_1400B6010(v9);
    v4 = v33;
    if ( v33 < 0 )
      goto LABEL_45;
    if ( v33 )
    {
      if ( v33 == 1 )
      {
        sub_1400115CC(&v52);
        sub_140030D48(&v52, &v54);
        v50 = 1;
      }
      goto LABEL_115;
    }
    sub_1400115CC(&v52);
    sub_140030D48(&v52, &v51);
    sub_1400B6010(v9);
    sub_1400B6010(v14);
    v34 = v49 == 0;
    goto LABEL_111;
  }
  v55 = 0LL;
  v28 = sub_1400B6010(v51);
  v4 = sub_14001137C(v14[6], v28, (__int64 *)&v55);
  if ( v4 < 0 )
  {
    if ( v55 )
      sub_1400B6010(v55);
LABEL_71:
    if ( v4 == -2147024882 )
      goto LABEL_45;
    v12 = v69;
LABEL_73:
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 24LL, &unk_1400C9A58, v67 + 8, ppv, *(_QWORD *)v48);
    }
    if ( (int)sub_1400B6010(*(_QWORD *)(v1 + 240)) < 0 )
      goto LABEL_45;
    if ( v4 != -2005073917 )
    {
      v63 = v4;
      v59 = *v6;
      v83 = *(_OWORD *)(v67 + 8);
    }
    sub_14002DCA4(v61, v12);
    goto LABEL_130;
  }
  try
  {
    v4 = 0;
    *(_QWORD *)&v65 = v55;
    v58 = sub_140011EE8((__int64)v61, v69, (__int64 *)&v65);
  }
  catch ( ATL::CAtlException *v81 )
  {
    v42 = v6;
    v43 = (int *)v81;
    if ( *(_DWORD *)v81 == -1073741571 )
      o__resetstkoflw();
    v53[0] = *v43;
    v6 = v42;
    v4 = v53[0];
    if ( v53[0] >= 0 )
    {
      v9 = v60;
      v1 = v68;
      v61 = (__int64 **)v70;
      goto LABEL_92;
    }
    if ( v55 )
      sub_1400B6010(v55);
LABEL_125:
    sub_140003238(&v54);
    sub_140003238(&v51);
    if ( v71 )
      sub_1400B6010(v71);
    v1 = v68;
LABEL_132:
    v3 = v63;
    if ( v63 >= 0 || (int)sub_1400732C4(*(_QWORD *)(v1 + 192), v59, v63, 0, (__int64)&v83, 1065353216) >= 0 )
      goto LABEL_138;
    v36 = off_1400E73D8;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 )
    {
      if ( (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0 && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 25LL, &unk_1400C9A58);
        goto LABEL_138;
      }
LABEL_139:
      if ( v36 != &off_1400E73D8 && (*((_DWORD *)v36 + 7) & 0x20000) != 0 && *((_BYTE *)v36 + 25) >= 4u )
      {
        v37 = "SUCCEEDED";
        if ( v4 < 0 )
          v37 = "FAILED";
        sub_14006A8B0(v36[2], 26, v3, v1, (__int64)v37);
        v36 = off_1400E73D8;
      }
    }
    if ( v4 < 0 )
    {
      if ( v36 != &off_1400E73D8 && (*((_DWORD *)v36 + 7) & 0x20000) != 0 && *((_BYTE *)v36 + 25) >= 2u )
        sub_14005A040(v36[2], 27LL, &unk_1400C9A58);
      sub_14005A470("CPipeInstance::ResolveFormatConflictsRightLeft", 1727LL, (unsigned int)v4);
    }
    sub_140003238(&v72);
    sub_140003238(&v62);
    sub_140003238((__int64 *)&v73);
    sub_140003238(&v52);
    result = (unsigned int)v4;
  }
LABEL_92:
  *(_DWORD *)(v1 + 140) |= 6u;
  goto LABEL_130;
}
