/*
 * XREFs of sub_14002C870 @ 0x14002C870
 * Callers:
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115CC @ 0x1400115CC (sub_1400115CC.c)
 *     sub_140011A18 @ 0x140011A18 (sub_140011A18.c)
 *     sub_140011EE8 @ 0x140011EE8 (sub_140011EE8.c)
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_140029734 @ 0x140029734 (sub_140029734.c)
 *     sub_14002DCA4 @ 0x14002DCA4 (sub_14002DCA4.c)
 *     sub_140030D48 @ 0x140030D48 (sub_140030D48.c)
 *     sub_1400313BC @ 0x1400313BC (sub_1400313BC.c)
 *     sub_1400319B8 @ 0x1400319B8 (sub_1400319B8.c)
 *     sub_140035CE4 @ 0x140035CE4 (sub_140035CE4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
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

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_14002C870(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // esi
  int v6; // r8d
  __int64 *v7; // r13
  _QWORD *v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  _DWORD *v12; // r12
  void *v13; // rcx
  _DWORD *v14; // r15
  __int64 v15; // rdx
  int *v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // eax
  __int128 *v20; // r15
  int v21; // eax
  __int128 *v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // eax
  unsigned __int16 *v28; // rbx
  unsigned __int16 *v29; // rax
  __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  const char *v33; // rax
  __int64 result; // rax
  ATL::CAtlException *v35; // rbx
  ATL::CAtlException *v36; // rbx
  ATL::CAtlException *v37; // rbx
  ATL::CAtlException *v38; // rbx
  ATL::CAtlException *v39; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-198h]
  int ppva; // [rsp+20h] [rbp-198h]
  int v42[2]; // [rsp+28h] [rbp-190h]
  char v43; // [rsp+40h] [rbp-178h]
  BOOL v44; // [rsp+44h] [rbp-174h]
  __int64 v45; // [rsp+48h] [rbp-170h] BYREF
  __int128 *v46; // [rsp+50h] [rbp-168h] BYREF
  int v47[2]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v48; // [rsp+60h] [rbp-158h] BYREF
  __int64 v49; // [rsp+68h] [rbp-150h] BYREF
  __int64 *v50; // [rsp+70h] [rbp-148h] BYREF
  __int64 v51; // [rsp+78h] [rbp-140h] BYREF
  int v52; // [rsp+80h] [rbp-138h]
  int v53; // [rsp+84h] [rbp-134h]
  __int64 *v54; // [rsp+88h] [rbp-130h]
  LPVOID pv; // [rsp+90h] [rbp-128h] BYREF
  __int64 v56; // [rsp+98h] [rbp-120h]
  _QWORD *v57; // [rsp+A0h] [rbp-118h]
  __int64 v58; // [rsp+A8h] [rbp-110h] BYREF
  _DWORD *v59; // [rsp+B0h] [rbp-108h]
  __int128 v60; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 *v61; // [rsp+D0h] [rbp-E8h]
  __int64 *v62; // [rsp+D8h] [rbp-E0h]
  __int64 v63; // [rsp+E0h] [rbp-D8h] BYREF
  int *v64; // [rsp+E8h] [rbp-D0h]
  BOOL v65; // [rsp+F0h] [rbp-C8h]
  int pExceptionObject; // [rsp+F4h] [rbp-C4h] BYREF
  LPVOID v67; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+100h] [rbp-B8h] BYREF
  __int128 *v69; // [rsp+108h] [rbp-B0h] BYREF
  int *v70; // [rsp+110h] [rbp-A8h]
  __int64 *v71; // [rsp+118h] [rbp-A0h]
  __int64 *v72; // [rsp+120h] [rbp-98h]
  __int128 *v73; // [rsp+128h] [rbp-90h] BYREF
  _DWORD *v74; // [rsp+130h] [rbp-88h]
  ATL::CAtlException *v75; // [rsp+138h] [rbp-80h] BYREF
  ATL::CAtlException *v76; // [rsp+140h] [rbp-78h] BYREF
  ATL::CAtlException *v77; // [rsp+148h] [rbp-70h] BYREF
  ATL::CAtlException *v78; // [rsp+150h] [rbp-68h] BYREF
  ATL::CAtlException *v79; // [rsp+158h] [rbp-60h] BYREF
  __int128 v80; // [rsp+160h] [rbp-58h] BYREF
  __int128 v81; // [rsp+170h] [rbp-48h] BYREF

  v2 = a1;
  v57 = a1;
  v58 = 0LL;
  v63 = 0LL;
  v43 = 0;
  v52 = 0;
  v53 = 1;
  v80 = 0LL;
  v81 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v4 = (_QWORD *)sub_140009AA8((_QWORD *)(v3 + 16), a2);
    v5 = sub_1400B6010(*v4);
    if ( v5 < 0 )
      goto LABEL_122;
    v7 = v2 + 2;
  }
  else
  {
    v7 = v2 + 2;
    v8 = (_QWORD *)sub_140024510((__int64)(v2 + 2), a2);
    v5 = sub_1400B6010(*v8);
    if ( v5 < 0 )
      goto LABEL_122;
  }
  pv = 0LL;
  v9 = (unsigned __int16 *)sub_1400B6010(v51);
  v5 = sub_140006BCC(v9, &pv);
  if ( v5 < 0 )
    goto LABEL_122;
  v10 = (unsigned __int16 *)pv;
  sub_140035CE4(pv);
  v5 = sub_14004B6D4(v10, (unsigned int)v10[8] + 18, &v68);
  CoTaskMemFree(v10);
  if ( v5 < 0 )
    goto LABEL_122;
  v72 = v7;
  v62 = v7;
  v50 = (__int64 *)*v7;
  v12 = *(_DWORD **)sub_1400313BC(v11, &v50);
  v59 = v12;
  v5 = sub_1400B6010(v12);
  if ( v5 < 0 )
    goto LABEL_122;
  v13 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 28LL, &unk_1400C9A58, v2);
  }
  while ( 1 )
  {
    v54 = v50;
    if ( !v50 )
    {
      sub_1400B6010(v12);
      goto LABEL_116;
    }
    v48 = 0LL;
    v45 = 0LL;
    v71 = v50;
    v14 = *(_DWORD **)sub_1400313BC(v13, &v50);
    v74 = v14;
    v44 = 0;
    if ( v14[10] != 2 )
    {
      v5 = sub_1400B6010(v14);
      if ( v5 < 0 )
        goto LABEL_17;
      pv = v14 + 8;
      goto LABEL_74;
    }
    pv = v14 + 8;
    v69 = (__int128 *)(v14 + 8);
    v15 = *((_QWORD *)v14 + 4);
    v56 = v15;
    v16 = (int *)(v15 + 4);
    v64 = (int *)(v15 + 4);
    v17 = *(_DWORD *)(v15 + 4);
    v47[0] = v17;
    v44 = v17 != 0;
    v65 = v44;
    v61 = (__int64 *)(v15 + 40);
    if ( *(_QWORD *)(v15 + 40) )
    {
      if ( !v17 )
        goto LABEL_70;
    }
    else
    {
      v18 = v2[30];
      v46 = (__int128 *)(v15 + 8);
      *(_QWORD *)v42 = v15 + 40;
      ppv = *(LPVOID **)(v15 + 56);
      v19 = sub_1400B6010(v18);
      v5 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -2147024882 )
          goto LABEL_17;
        if ( off_1400E73D8 == (_UNKNOWN *)&off_1400E73D8 || (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) == 0 )
        {
          v20 = v46;
        }
        else
        {
          v20 = v46;
          if ( *((_BYTE *)off_1400E73D8 + 25) >= 4u )
            sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 29LL, &unk_1400C9A58, v46, ppv, *(_QWORD *)v42);
        }
        sub_14002DCA4(v72, v54);
        if ( v47[0] )
        {
          v52 = v5;
          v53 = *v64;
          v81 = *v20;
        }
LABEL_99:
        if ( v44 )
        {
          v30 = sub_1400B6010(v51);
          v31 = sub_14001137C(v12[6], v30, &v63);
          if ( v31 < 0 )
          {
            pExceptionObject = v31;
            throw (long *)&pExceptionObject;
          }
          sub_1400B6010(v63);
          v5 = 0;
          try
          {
            v50 = sub_140011A18(v7, (__int64)v50, &v63);
          }
          catch ( ATL::CAtlException *v78 )
          {
            v38 = v78;
            if ( *(_DWORD *)v78 == -1073741571 )
              o__resetstkoflw();
            v5 = *(_DWORD *)v38;
            if ( *(int *)v38 < 0 )
              goto LABEL_109;
            v12 = v59;
            v2 = v57;
            v7 = v62;
          }
          v63 = 0LL;
        }
        goto LABEL_114;
      }
      if ( !v47[0] )
      {
LABEL_70:
        v5 = sub_1400B6010(v14);
        if ( v5 < 0 )
          goto LABEL_17;
        goto LABEL_74;
      }
      *(_QWORD *)v47 = 0LL;
      v5 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &v67);
      if ( v5 < 0 )
        goto LABEL_27;
      v5 = sub_1400B6010(v67);
      if ( v5 < 0 )
        goto LABEL_27;
      v60 = *(_OWORD *)(v56 + 24);
      v21 = sub_140029734(v47[0], *v61, (__int64)v46, &v60, ppva, *((_DWORD *)v2 + 32));
      v5 = v21;
      if ( v21 < 0 )
      {
        if ( v21 != -2147024882 )
        {
          if ( off_1400E73D8 == (_UNKNOWN *)&off_1400E73D8 || (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) == 0 )
          {
            v22 = v46;
          }
          else
          {
            v22 = v46;
            if ( *((_BYTE *)off_1400E73D8 + 25) >= 4u )
              sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 30LL, &unk_1400C9A58, v46, ppv, *(_QWORD *)v42);
          }
          if ( (int)sub_1400B6010(v2[30]) >= 0 )
          {
            sub_14002DCA4(v7, v54);
            v52 = v5;
            v53 = *v64;
            v81 = *v22;
            sub_140003238((__int64 *)v47);
            goto LABEL_99;
          }
        }
LABEL_27:
        sub_140003238((__int64 *)v47);
LABEL_17:
        sub_140003238(&v45);
        sub_140003238(&v48);
        goto LABEL_116;
      }
      sub_140003238((__int64 *)v47);
      v15 = v56;
      v16 = v64;
    }
    if ( !*v16 )
      goto LABEL_70;
    *(_QWORD *)&v60 = v15 + 48;
    if ( !*(_DWORD *)(v15 + 48) )
      goto LABEL_70;
    v5 = sub_1400B6010(v14);
    if ( v5 == -2005073917 )
      break;
LABEL_60:
    if ( v5 < 0 )
    {
      if ( v5 == -2147024882 )
        goto LABEL_17;
LABEL_62:
      v26 = v56;
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 31LL, &unk_1400C9A58, v56 + 8, ppv, *(_QWORD *)v42);
      }
      if ( (int)sub_1400B6010(v2[30]) < 0 )
        goto LABEL_17;
      if ( v5 != -2005073917 )
      {
        v52 = v5;
        v53 = *v64;
        v81 = *(_OWORD *)(v26 + 8);
      }
      sub_14002DCA4(v7, v54);
      goto LABEL_98;
    }
LABEL_74:
    if ( v5 != 1 )
    {
      if ( v5 )
        goto LABEL_85;
      goto LABEL_81;
    }
    v27 = sub_1400B6010(v12);
    v5 = v27;
    if ( v27 < 0 )
      goto LABEL_17;
    if ( !v27 )
    {
      sub_1400115CC(&v49);
      sub_140030D48(&v49, &v45);
LABEL_81:
      sub_1400B6010(v14);
      sub_1400B6010(v12);
      if ( v44 && *(_DWORD *)(*(_QWORD *)pv + 4LL) && *(_DWORD *)(*(_QWORD *)pv + 48LL) )
      {
        sub_1400115CC(&v49);
        sub_140030D48(&v49, &v51);
      }
      goto LABEL_85;
    }
    if ( v27 == 1 )
    {
      sub_1400115CC(&v49);
      sub_140030D48(&v49, &v48);
      v43 = 1;
    }
LABEL_85:
    if ( v43 )
    {
      v47[0] = 0;
      v5 = sub_1400319B8((_DWORD)v2, v49, v45, (unsigned int)v47, (__int64)&v80);
      if ( v5 < 0 )
        goto LABEL_17;
      v60 = xmmword_1400C6878;
      v5 = sub_14006A97C((unsigned int)&v80, 0, 0, v12[6], v47[0], 0, (__int64)&v60, (__int64)&v58);
      if ( v5 < 0 )
        goto LABEL_17;
      v5 = 0;
      try
      {
        *(_QWORD *)&v60 = v58;
        v50 = sub_140011A18(v7, (__int64)v54, (__int64 *)&v60);
      }
      catch ( ATL::CAtlException *v79 )
      {
        v39 = v79;
        if ( *(_DWORD *)v79 == -1073741571 )
          o__resetstkoflw();
        v5 = *(_DWORD *)v39;
        if ( *(int *)v39 < 0 )
          goto LABEL_109;
        v12 = v59;
        v2 = v57;
        v7 = v62;
      }
      v58 = 0LL;
      v43 = 0;
    }
    else
    {
      if ( (*((_BYTE *)v2 + 140) & 8) == 0
        || (v28 = (unsigned __int16 *)sub_1400B6010(v68),
            v29 = (unsigned __int16 *)sub_1400B6010(v49),
            !(unsigned int)sub_140018A60(v29, v28)) )
      {
        v12 = v14;
        v59 = v14;
LABEL_98:
        if ( v5 >= 0 )
          goto LABEL_114;
        goto LABEL_99;
      }
      v47[0] = 0;
      v46 = 0LL;
      v5 = sub_1400B6010(v14);
      if ( v5 < 0
        || (v5 = sub_1400319B8((_DWORD)v2, (_DWORD)v46, (_DWORD)v46, (unsigned int)v47, (__int64)&v80), v5 < 0)
        || (v60 = xmmword_1400C6878,
            v5 = sub_14006A97C((unsigned int)&v80, 0, 0, v12[6], v47[0], 0, (__int64)&v60, (__int64)&v58),
            v5 < 0) )
      {
        sub_140003238((__int64 *)&v46);
        goto LABEL_17;
      }
      v5 = 0;
      try
      {
        *(_QWORD *)&v60 = v58;
        v50 = sub_140011A18(v7, (__int64)v54, (__int64 *)&v60);
      }
      catch ( ATL::CAtlException *v77 )
      {
        v37 = v77;
        if ( *(_DWORD *)v77 == -1073741571 )
          o__resetstkoflw();
        v5 = *(_DWORD *)v37;
        if ( *(int *)v37 < 0 )
        {
          sub_140003238((__int64 *)&v46);
          goto LABEL_109;
        }
        v12 = v59;
        v2 = v57;
        v7 = v62;
      }
      v58 = 0LL;
      v43 = 0;
      sub_140030D48(&v49, &v46);
      sub_140003238((__int64 *)&v46);
    }
LABEL_114:
    sub_1400115CC(&v45);
    sub_1400115CC(&v48);
    sub_140003238(&v45);
    sub_140003238(&v48);
  }
  v70 = v14 + 6;
  if ( v14[6] != 1 || !(unsigned __int8)sub_14006A72C(*v61) )
    goto LABEL_62;
  v23 = 0LL;
  v46 = 0LL;
  *(_QWORD *)v47 = 0LL;
  v5 = sub_1400B6010(*v61);
  if ( v5 < 0 )
  {
LABEL_58:
    sub_140003238((__int64 *)v47);
    if ( v23 )
      sub_1400B6010(v23);
    goto LABEL_60;
  }
  v24 = sub_1400B6010(*(_QWORD *)v47);
  v5 = sub_14001137C(*v70, v24, (__int64 *)&v46);
  if ( v5 < 0 )
  {
LABEL_57:
    v23 = (__int64)v46;
    goto LABEL_58;
  }
  try
  {
    v73 = v46;
    v50 = sub_140011EE8((__int64)v7, v54, (__int64 *)&v73);
  }
  catch ( ATL::CAtlException *v75 )
  {
    v35 = v75;
    if ( *(_DWORD *)v75 == -1073741571 )
      o__resetstkoflw();
    v5 = *(_DWORD *)v35;
    if ( *(int *)v35 >= 0 )
    {
      v14 = v74;
      v12 = v59;
      v54 = v71;
      v44 = v65;
      pv = v69;
      v2 = v57;
      v7 = v62;
      goto LABEL_52;
    }
LABEL_49:
    sub_140003238((__int64 *)v47);
    if ( v46 )
      sub_1400B6010(v46);
LABEL_109:
    sub_140003238(&v45);
    sub_140003238(&v48);
    if ( v58 )
      sub_1400B6010(v58);
    v2 = v57;
LABEL_116:
    v6 = v52;
    if ( v52 >= 0 || (int)sub_1400732C4(v2[24], v53, v52, 0, (__int64)&v81, 1065353216) >= 0 )
    {
LABEL_122:
      v32 = off_1400E73D8;
      goto LABEL_123;
    }
    v32 = off_1400E73D8;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8 )
    {
      if ( (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0 && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 32LL, &unk_1400C9A58);
        goto LABEL_122;
      }
LABEL_123:
      if ( v32 != &off_1400E73D8 && (*((_DWORD *)v32 + 7) & 0x20000) != 0 && *((_BYTE *)v32 + 25) >= 4u )
      {
        v33 = "SUCCEEDED";
        if ( v5 < 0 )
          v33 = "FAILED";
        sub_14006A8B0(v32[2], 33, v6, (_DWORD)v2, (__int64)v33);
        v32 = off_1400E73D8;
      }
    }
    if ( v5 < 0 )
    {
      if ( v32 != &off_1400E73D8 && (*((_DWORD *)v32 + 7) & 0x20000) != 0 && *((_BYTE *)v32 + 25) >= 2u )
        sub_14005A040(v32[2], 34LL, &unk_1400C9A58);
      sub_14005A470("CPipeInstance::ResolveFormatConflictsLeftRight", 2229LL, (unsigned int)v5);
    }
    sub_140003238((__int64 *)&v67);
    sub_140003238(&v68);
    sub_140003238(&v51);
    sub_140003238(&v49);
    result = (unsigned int)v5;
  }
LABEL_52:
  v46 = 0LL;
  v25 = sub_1400B6010(v51);
  v5 = sub_14001137C(*v70, v25, (__int64 *)&v46);
  if ( v5 >= 0 )
  {
    v5 = 0;
    try
    {
      v69 = v46;
      sub_140011EE8((__int64)v7, v50, (__int64 *)&v69);
    }
    catch ( ATL::CAtlException *v76 )
    {
      v36 = v76;
      if ( *(_DWORD *)v76 == -1073741571 )
        o__resetstkoflw();
      v5 = *(_DWORD *)v36;
      if ( *(int *)v36 < 0 )
        goto LABEL_49;
      v12 = v59;
      v54 = v71;
      v2 = v57;
      v7 = v62;
    }
    *((_DWORD *)v2 + 35) |= 6u;
    *(_DWORD *)v60 = 0;
    v50 = v54;
    sub_140003238((__int64 *)v47);
    goto LABEL_114;
  }
  goto LABEL_57;
}
