/*
 * XREFs of sub_140043088 @ 0x140043088
 * Callers:
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140011068 @ 0x140011068 (sub_140011068.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400126E8 @ 0x1400126E8 (sub_1400126E8.c)
 *     sub_140041B94 @ 0x140041B94 (sub_140041B94.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A544 @ 0x14006A544 (sub_14006A544.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_140043088(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // esi
  BOOL v6; // r13d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int i; // r15d
  int v11; // eax
  __int128 v12; // xmm6
  int v13; // r12d
  int v14; // edi
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // eax
  unsigned int v27; // esi
  int v28; // eax
  __int64 v29; // rdx
  _BYTE *v30; // rdx
  _BYTE v32[32]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v33; // [rsp+40h] [rbp-108h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-100h] BYREF
  int v35; // [rsp+4Ch] [rbp-FCh] BYREF
  int v36; // [rsp+50h] [rbp-F8h] BYREF
  int v37; // [rsp+54h] [rbp-F4h] BYREF
  int v38; // [rsp+58h] [rbp-F0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ECh] BYREF
  int v40; // [rsp+60h] [rbp-E8h] BYREF
  int v41; // [rsp+64h] [rbp-E4h] BYREF
  int v42; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-78h]
  __int128 v53; // [rsp+D8h] [rbp-70h]
  int v54; // [rsp+E8h] [rbp-60h]
  long *v55; // [rsp+F0h] [rbp-58h] BYREF
  ATL::CAtlException *v56; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v58; // [rsp+158h] [rbp+10h] BYREF
  __int64 *v59; // [rsp+160h] [rbp+18h]
  __int64 v60; // [rsp+168h] [rbp+20h] BYREF

  v59 = a3;
  v5 = 0;
  LODWORD(v58) = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 14LL, &unk_1400C9A58);
  }
  try
  {
    *a3 = 0LL;
    v45 = 0LL;
    v7 = sub_140041B94(*(_QWORD *)(a2 + 32), &v45);
    if ( v7 < 0 )
    {
      pExceptionObject = v7;
      throw (long *)&pExceptionObject;
    }
    v44 = 0LL;
    v8 = sub_14006A544(*(_QWORD *)(a2 + 32), &v44);
    if ( v8 < 0 )
    {
      v35 = v8;
      throw (long *)&v35;
    }
    v43 = 0LL;
    v9 = sub_14001137C(v6, *(_QWORD *)(a2 + 24), &v43);
    if ( v9 < 0 )
    {
      v36 = v9;
      throw (long *)&v36;
    }
    v58 = v43;
    sub_140011180((__int64)&v51, &v58);
    v43 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a2 + 92); ++i )
    {
      v48 = 0LL;
      v11 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v11, i) )
      {
        v12 = *(_OWORD *)(a2 + 68);
        v13 = 2;
        sub_140010994(&v47, v44);
        v14 = v47;
        sub_140010994(&v46, v45);
        v5 |= 5u;
        v15 = v46;
      }
      else
      {
        v12 = xmmword_1400C6878;
        v13 = 0;
        v33 = 0LL;
        v14 = 0;
        v49 = 0LL;
        v5 |= 0xAu;
        v15 = 0;
      }
      LODWORD(v58) = v5;
      v50 = v12;
      v16 = sub_14006A97C((unsigned int)a2 + 16 * (i + 6), v15, v14, v6, 0, v13, (__int64)&v50, (__int64)&v48);
      if ( (v5 & 8) != 0 )
      {
        v5 &= ~8u;
        sub_140003238(&v49);
      }
      if ( (v5 & 4) != 0 )
      {
        v5 &= ~4u;
        sub_140003238(&v46);
      }
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        sub_140003238(&v33);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        sub_140003238(&v47);
      }
      if ( v16 < 0 )
      {
        v37 = v16;
        throw (long *)&v37;
      }
      v58 = v48;
      sub_140011180((__int64)&v51, &v58);
    }
    v60 = 0LL;
    v17 = sub_14004B6D4(*(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40), &v60);
    if ( v17 < 0 )
    {
      v38 = v17;
      throw (long *)&v38;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v58 = 0LL;
        v20 = sub_1400B6010(v60);
        v21 = sub_14001137C(v6, v20, &v58);
        if ( v21 < 0 )
        {
          v40 = v21;
          throw (long *)&v40;
        }
        v33 = v58;
        sub_140011180((__int64)&v51, &v33);
      }
    }
    else
    {
      v58 = 0LL;
      v50 = xmmword_1400C6878;
      v18 = sub_14006A97C((unsigned int)&qword_1400C9798, 0, 0, v6, 1, 0, (__int64)&v50, (__int64)&v58);
      if ( v18 < 0 )
      {
        v39 = v18;
        throw (long *)&v39;
      }
      v19 = v58;
      sub_1400B6010(v58);
      sub_1400B6010(v19);
      v33 = v19;
      sub_140011180((__int64)&v51, &v33);
    }
    v22 = sub_140049338(344LL, &unk_1400C75FC);
    v58 = v22;
    if ( v22 )
      v25 = sub_1400126E8(v22, *(_DWORD *)(a2 + 8));
    else
      v25 = 0LL;
    v58 = v25;
    if ( !v25 )
    {
      v41 = -2147024882;
      throw (long *)&v41;
    }
    v26 = sub_140011760(v24, v23, *(_QWORD *)(a2 + 32), (_QWORD *)(v25 + 192));
    v27 = v26;
    if ( v26 < 0 )
    {
      v42 = v26;
      throw (long *)&v42;
    }
    if ( *(_DWORD *)a2 == 2 || (v28 = 0, *(_DWORD *)a2 == 3) )
      v28 = 1;
    *(_DWORD *)(v25 + 120) = v28;
    *(_DWORD *)(v25 + 132) = *(_DWORD *)a2;
    *(_DWORD *)(v25 + 12) = v6;
    *(_DWORD *)(v25 + 136) = *(_DWORD *)(a2 + 64) != 0;
    if ( *(_QWORD *)(v25 + 152) )
      sub_1400115FC((_QWORD *)(v25 + 152), 0LL);
    sub_140004C9C((_QWORD *)(v25 + 240), a1);
    *(_QWORD *)v25 = 0LL;
    *(_DWORD *)(v25 + 8) = 1;
    sub_140011068(v25 + 16, (__int64)&v51);
    sub_14000DE78((__int64)&v51, v29);
    *(_DWORD *)(v25 + 336) = *(_BYTE *)(a2 + 86) != 0;
    *(_DWORD *)(v25 + 312) = *(unsigned __int8 *)(a2 + 86);
    *(_DWORD *)(v25 + 148) = (int)(float)((float)(int)((float)((float)*(int *)(*(_QWORD *)(a2 + 48) + 8LL)
                                                             / (float)*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 12LL))
                                                     * (double)(int)*(_QWORD *)(a2 + 56)
                                                     / 10000000.0
                                                     + 0.5)
                                        * 1.1);
    *(_DWORD *)(v25 + 140) = 0;
    *(_DWORD *)(v25 + 212) = 0;
    *(_OWORD *)(v25 + 216) = *(_OWORD *)(a2 + 68);
    *(_BYTE *)(v25 + 317) = *(_BYTE *)(a2 + 85);
    *(_DWORD *)(v25 + 128) = *(_DWORD *)(a2 + 88);
    v58 = 0LL;
    *v59 = v25;
    sub_14000FFE4(&v58);
    sub_140003238(&v60);
    sub_140003238(&v44);
    sub_140003238(&v45);
  }
  catch ( long *v55 )
  {
    v30 = v32;
    LODWORD(v59) = *(_DWORD *)v55;
    goto LABEL_41;
  }
  catch ( ATL::CAtlException *v56 )
  {
    v30 = v32;
    LODWORD(v59) = *(_DWORD *)v56;
LABEL_41:
    v27 = (unsigned int)v59;
    if ( (int)v59 < 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 15LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::CreateSubmixPipeInstance", 507LL, v27);
    }
  }
  sub_14000DE78((__int64)&v51, (__int64)v30);
  return v27;
}
