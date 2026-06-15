/*
 * XREFs of sub_140069B3C @ 0x140069B3C
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_140006490 @ 0x140006490 (sub_140006490.c)
 *     sub_14000DE10 @ 0x14000DE10 (sub_14000DE10.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140011068 @ 0x140011068 (sub_140011068.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400126E8 @ 0x1400126E8 (sub_1400126E8.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_140041B94 @ 0x140041B94 (sub_140041B94.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A544 @ 0x14006A544 (sub_14006A544.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_14006AEEC @ 0x14006AEEC (sub_14006AEEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_140069B3C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v6; // r14d
  int v7; // r12d
  int v8; // r13d
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm6
  int v21; // r12d
  int v22; // r14d
  int v23; // ebx
  int v24; // edx
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // r14d
  int v37; // r9d
  __int64 *v38; // rdx
  __int64 v39; // rcx
  _UNKNOWN **v40; // rcx
  __int64 v41; // rdx
  __int64 result; // rax
  __int64 v43; // r8
  __int64 v44; // [rsp+40h] [rbp-148h] BYREF
  int v45; // [rsp+48h] [rbp-140h]
  unsigned int v46; // [rsp+4Ch] [rbp-13Ch]
  __int128 v47; // [rsp+50h] [rbp-138h] BYREF
  __int64 v48; // [rsp+60h] [rbp-128h] BYREF
  __int64 v49; // [rsp+68h] [rbp-120h] BYREF
  __int64 v50; // [rsp+70h] [rbp-118h]
  int pExceptionObject; // [rsp+78h] [rbp-110h] BYREF
  int v52; // [rsp+7Ch] [rbp-10Ch] BYREF
  int v53; // [rsp+80h] [rbp-108h] BYREF
  int v54; // [rsp+84h] [rbp-104h] BYREF
  int v55; // [rsp+88h] [rbp-100h] BYREF
  int v56; // [rsp+8Ch] [rbp-FCh] BYREF
  int v57; // [rsp+90h] [rbp-F8h] BYREF
  int v58; // [rsp+94h] [rbp-F4h] BYREF
  int v59; // [rsp+98h] [rbp-F0h] BYREF
  int v60; // [rsp+9Ch] [rbp-ECh] BYREF
  int v61; // [rsp+A0h] [rbp-E8h] BYREF
  int v62; // [rsp+A4h] [rbp-E4h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v66[2]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-98h]
  __int128 v70; // [rsp+F8h] [rbp-90h]
  int v71; // [rsp+108h] [rbp-80h]
  __int64 v72; // [rsp+110h] [rbp-78h] BYREF
  __int64 v73; // [rsp+118h] [rbp-70h] BYREF
  __int64 v74; // [rsp+120h] [rbp-68h]
  long *v75; // [rsp+128h] [rbp-60h] BYREF
  ATL::CAtlException *v76; // [rsp+130h] [rbp-58h] BYREF
  __int64 v79; // [rsp+1A0h] [rbp+18h] BYREF
  __int64 v80; // [rsp+1A8h] [rbp+20h]

  v80 = a4;
  v74 = (__int64)a5;
  v6 = 0;
  v45 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 10;
  v7 = 0;
  LODWORD(v79) = 0;
  v8 = 0;
  v64 = 0LL;
  v63 = 0LL;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 0xAu, (__int64)&unk_1400C9A58);
  }
  try
  {
    v9 = sub_140041B94(*(_QWORD *)(a3 + 56), &v64);
    if ( v9 < 0 )
    {
      pExceptionObject = v9;
      throw (long *)&pExceptionObject;
    }
    v10 = sub_14006A544(*(_QWORD *)(a3 + 56), &v63);
    if ( v10 < 0 )
    {
      v52 = v10;
      throw (long *)&v52;
    }
    v12 = *(_QWORD *)(a3 + 24);
    if ( v12 )
    {
      v13 = sub_14001137C(*(_DWORD *)(a3 + 72), v12, &v48);
      if ( v13 < 0 )
      {
        v53 = v13;
        throw (long *)&v53;
      }
      sub_140011180((__int64)&v68, &v48);
      v48 = 0LL;
    }
    if ( !*(_DWORD *)(a3 + 72) )
    {
      v7 = 1;
      LODWORD(v79) = 1;
      v14 = (_DWORD *)sub_140006490(v11, (__int64)sub_140051D10)[1];
      if ( v14 )
      {
        if ( *v14 > 4u && sub_14002813C((__int64)v14, 0x400000000000LL) )
          v8 = 1;
      }
    }
    v15 = 0;
    while ( 1 )
    {
      v46 = v15;
      if ( v15 >= *(_DWORD *)(a3 + 96) )
      {
        if ( v7 )
        {
          v67 = xmmword_1400C6878;
          v26 = sub_14006A97C(
                  (unsigned int)&xmmword_1400C6938,
                  0,
                  0,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  (__int64)&v67,
                  (__int64)&v44);
          if ( v26 < 0 )
          {
            v57 = v26;
            throw (long *)&v57;
          }
          v79 = v44;
          sub_140011180((__int64)&v68, &v79);
          v44 = 0LL;
        }
        if ( v8 )
        {
          v67 = xmmword_1400C6878;
          v27 = sub_14006A97C(
                  (unsigned int)&xmmword_1400C69D0,
                  0,
                  0,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  (__int64)&v67,
                  (__int64)&v44);
          if ( v27 < 0 )
          {
            v58 = v27;
            throw (long *)&v58;
          }
          v79 = v44;
          sub_140011180((__int64)&v68, &v79);
          v44 = 0LL;
        }
        v28 = sub_14006AEEC(a3, v80, &v49);
        if ( v28 < 0 )
        {
          v59 = v28;
          throw (long *)&v59;
        }
        v79 = v49;
        sub_140011180((__int64)&v68, &v79);
        v49 = 0LL;
        v29 = sub_140049338(344LL, (__int64)&unk_1400C75FC);
        v79 = v29;
        if ( v29 )
        {
          v30 = sub_1400126E8(v29, 1);
          v31 = v30;
          v50 = v30;
          if ( v30 )
          {
            *(_OWORD *)(v30 + 296) = *(_OWORD *)(a3 + 148);
            *(_DWORD *)(v30 + 12) = *(_DWORD *)(a3 + 72);
            *(_DWORD *)(v30 + 136) = *(_DWORD *)(a3 + 80) != 0;
            *(_DWORD *)(v30 + 124) = *(_DWORD *)(a3 + 100) == 1;
            *(_DWORD *)(v30 + 128) = *(_DWORD *)(a3 + 100);
            if ( *(_QWORD *)(v30 + 152) != a1 )
              sub_1400115FC((_QWORD *)(v30 + 152), a1);
            sub_140004C9C((_QWORD *)(v31 + 240), a2);
            sub_140011068(v31 + 16, (__int64)&v68);
            *(_DWORD *)(v31 + 212) = *(_DWORD *)(a3 + 88) != -1;
            *(_DWORD *)(v31 + 312) = *(_DWORD *)(a3 + 144);
            *(_OWORD *)(v31 + 320) = *(_OWORD *)(a3 + 196);
            v32 = MMDevAPI_8(*(_QWORD *)(a3 + 56), v31 + 160);
            if ( v32 < 0 )
            {
              v60 = v32;
              throw (long *)&v60;
            }
            v35 = sub_140011760(v34, v33, *(_QWORD *)(a3 + 56), (_QWORD *)(v31 + 192));
            v36 = v35;
            if ( v35 < 0 )
            {
              v61 = v35;
              throw (long *)&v61;
            }
            v37 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                              / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                      * (double)(int)*(_QWORD *)(a3 + 32)
                      / 10000000.0
                      + 0.5);
            *(_DWORD *)(v31 + 148) = v37;
            if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
              && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
              && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
            {
              sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xBu, (__int64)&unk_1400C9A58, v37);
            }
            goto LABEL_106;
          }
        }
        else
        {
          v50 = 0LL;
        }
        v62 = -2147024882;
        throw (long *)&v62;
      }
      v16 = *(_DWORD *)(a3 + 80) & (1 << v15);
      v45 = v16;
      v17 = (1 << v15) & *(_DWORD *)(a3 + 92);
      if ( v16 )
      {
        if ( *(_DWORD *)(a3 + 88) == v15 )
        {
          if ( v7 )
          {
            v47 = xmmword_1400C6878;
            v18 = sub_14006A97C(
                    (unsigned int)&xmmword_1400C6938,
                    0,
                    0,
                    *(_DWORD *)(a3 + 72),
                    1,
                    0,
                    (__int64)&v47,
                    (__int64)&v44);
            if ( v18 < 0 )
            {
              v54 = v18;
              throw (long *)&v54;
            }
            v79 = v44;
            sub_140011180((__int64)&v68, &v79);
            v44 = 0LL;
            v7 = 0;
            LODWORD(v79) = 0;
          }
          if ( v8 )
          {
            v47 = xmmword_1400C6878;
            v19 = sub_14006A97C(
                    (unsigned int)&xmmword_1400C69D0,
                    0,
                    0,
                    *(_DWORD *)(a3 + 72),
                    1,
                    0,
                    (__int64)&v47,
                    (__int64)&v44);
            if ( v19 < 0 )
            {
              v55 = v19;
              throw (long *)&v55;
            }
            *(_QWORD *)&v47 = v44;
            sub_140011180((__int64)&v68, &v47);
            v44 = 0LL;
            v8 = 0;
          }
        }
        v16 = v45;
        if ( !v17 )
          break;
      }
      LODWORD(v79) = v7;
      v20 = xmmword_1400C6878;
      if ( v16 )
        goto LABEL_28;
      v21 = 0;
LABEL_30:
      LODWORD(v47) = *(_DWORD *)(a3 + 72);
      if ( v16 )
      {
        sub_140010994(v66, v63);
        v22 = v6 | 1;
        v23 = v66[0];
        v16 = v45;
      }
      else
      {
        v73 = 0LL;
        v22 = v6 | 2;
        v23 = 0;
      }
      if ( v16 )
      {
        sub_140010994(&v65, v64);
        v6 = v22 | 4;
        v24 = v65;
      }
      else
      {
        v72 = 0LL;
        v6 = v22 | 8;
        v24 = 0;
      }
      v45 = v6;
      v67 = v20;
      v25 = sub_14006A97C((unsigned int)a3 + 16 * v46 + 216, v24, v23, v47, 0, v21, (__int64)&v67, (__int64)&v44);
      if ( (v6 & 8) != 0 )
      {
        v6 &= ~8u;
        sub_140003238(&v72);
      }
      if ( (v6 & 4) != 0 )
      {
        v6 &= ~4u;
        sub_140003238(&v65);
      }
      if ( (v6 & 2) != 0 )
      {
        v6 &= ~2u;
        sub_140003238(&v73);
      }
      if ( (v6 & 1) != 0 )
      {
        v6 &= ~1u;
        sub_140003238(v66);
      }
      if ( v25 < 0 )
      {
        v56 = v25;
        throw (long *)&v56;
      }
      *(_QWORD *)&v47 = v44;
      sub_140011180((__int64)&v68, &v47);
      v44 = 0LL;
      v15 = v46 + 1;
      v7 = v79;
    }
    v20 = *(_OWORD *)(a3 + 120);
LABEL_28:
    v21 = (v17 != 0) + 2;
    goto LABEL_30;
  }
  catch ( long *v75 )
  {
    LODWORD(v79) = *(_DWORD *)v75;
    goto LABEL_64;
  }
  catch ( ATL::CAtlException *v76 )
  {
    LODWORD(v79) = *(_DWORD *)v76;
LABEL_64:
    v36 = v79;
    if ( (int)v79 < 0 )
    {
      if ( v48 )
        sub_1400B6010(v48);
      if ( v44 )
        sub_1400B6010(v44);
      if ( v49 )
        sub_1400B6010(v49);
      v39 = v50;
      if ( v50 )
        goto LABEL_67;
      while ( v69 )
      {
        v43 = sub_14000DE10((__int64)&v68);
        if ( v43 )
          sub_1400B6010(v43);
      }
      goto LABEL_68;
    }
    v31 = v50;
    v38 = (__int64 *)v74;
LABEL_66:
    v39 = *v38;
    *v38 = v31;
    if ( v39 )
LABEL_67:
      sub_140010010(v39);
LABEL_68:
    v40 = (_UNKNOWN **)off_1400E73D8;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xCu, (__int64)&unk_1400C9A58, v36);
      v40 = (_UNKNOWN **)off_1400E73D8;
    }
    if ( v36 < 0 )
    {
      if ( v40 != &off_1400E73D8 && (*((_DWORD *)v40 + 7) & 0x20000) != 0 && *((_BYTE *)v40 + 25) >= 2u )
        sub_14005A040((__int64)v40[2], 0xDu, (__int64)&unk_1400C9A58, v36);
      sub_14005A470("CPipeInstance::CreateDevicePipeInstance", 352, v36);
    }
    sub_140003238(&v63);
    sub_140003238(&v64);
    sub_14000DE78((__int64)&v68, v41);
    result = (unsigned int)v36;
  }
LABEL_106:
  v38 = a5;
  goto LABEL_66;
}
