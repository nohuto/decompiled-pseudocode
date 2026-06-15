/*
 * XREFs of sub_1400041F8 @ 0x1400041F8
 * Callers:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 * Callees:
 *     sub_140003B8C @ 0x140003B8C (sub_140003B8C.c)
 *     sub_140004108 @ 0x140004108 (sub_140004108.c)
 *     sub_140004A6C @ 0x140004A6C (sub_140004A6C.c)
 *     sub_140004B3C @ 0x140004B3C (sub_140004B3C.c)
 *     sub_140004BD4 @ 0x140004BD4 (sub_140004BD4.c)
 *     sub_140004C44 @ 0x140004C44 (sub_140004C44.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_140009400 @ 0x140009400 (sub_140009400.c)
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_14000E88C @ 0x14000E88C (sub_14000E88C.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1400041F8(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r12
  _QWORD *v27; // rsi
  int v28; // eax
  unsigned int v29; // edi
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 **v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // rsi
  unsigned __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // [rsp+40h] [rbp-88h] BYREF
  int v53; // [rsp+44h] [rbp-84h] BYREF
  int v54; // [rsp+48h] [rbp-80h] BYREF
  int v55; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v56; // [rsp+50h] [rbp-78h] BYREF
  int v57; // [rsp+54h] [rbp-74h] BYREF
  int v58; // [rsp+58h] [rbp-70h] BYREF
  int v59; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v60; // [rsp+60h] [rbp-68h] BYREF
  int v61; // [rsp+64h] [rbp-64h] BYREF
  int pExceptionObject; // [rsp+68h] [rbp-60h] BYREF
  int v63; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v64; // [rsp+70h] [rbp-58h]
  ATL::CAtlException *v65; // [rsp+78h] [rbp-50h] BYREF
  long *v66; // [rsp+80h] [rbp-48h] BYREF
  int v67; // [rsp+D0h] [rbp+8h]
  __int64 v68; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v69; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v70; // [rsp+E8h] [rbp+20h] BYREF

  try
  {
    v64 = 0LL;
    v68 = 0LL;
    v2 = a1[3];
    if ( !v2 )
    {
      v52 = -2005139408;
      throw (long *)&v52;
    }
    v3 = *(_QWORD *)(v2 + 8);
    v69 = v3;
    v4 = *(_QWORD *)(v2 + 16);
    if ( *a1 )
    {
      v42 = *a1;
      if ( *((_DWORD *)a1 + 30) )
        v43 = sub_140047DB4(v42, 0LL);
      else
        v43 = sub_140009934(v42, 0LL);
      v44 = *(_QWORD *)(v43 + 8);
      v46 = sub_140049338(72LL, &unk_1400C75FC);
      v70 = v46;
      if ( !v46 || (v68 = sub_140003B8C(v46, v45, a1[30], v44, *(_DWORD *)(v4 + 24), v4)) == 0 )
      {
        v55 = -2147024882;
        throw (long *)&v55;
      }
      v47 = sub_140049338(48LL, &unk_1400C75FC);
      v48 = (__int64 *)v47;
      if ( !v47 )
      {
        v54 = -2147024882;
        throw (long *)&v54;
      }
      *(_QWORD *)v47 = 0LL;
      *(_QWORD *)(v47 + 8) = 0LL;
      *(_QWORD *)(v47 + 16) = 0LL;
      *(_QWORD *)(v47 + 24) = 0LL;
      *(_QWORD *)(v47 + 32) = 0LL;
      *(_DWORD *)(v47 + 40) = 10;
      v70 = v47;
      sub_140004A6C(v47, &v68);
      sub_140004BD4(a1 + 8, &v70);
      v68 = 0LL;
      if ( *((_DWORD *)a1 + 3) || !*((_BYTE *)a1 + 316) )
        goto LABEL_24;
      v49 = *(_QWORD *)(sub_140009400(*a1) + 8);
      v51 = sub_140049338(72LL, &unk_1400C75FC);
      v70 = v51;
      if ( !v51 || (v68 = sub_140003B8C(v51, v50, a1[30], v49, *(_DWORD *)(v4 + 24), v4)) == 0 )
      {
        v53 = -2147024882;
        throw (long *)&v53;
      }
      sub_140004108(v48, (__int64)&v68);
    }
    else
    {
      if ( !*((_DWORD *)a1 + 2) )
        goto LABEL_25;
      v5 = sub_140049338(72LL, &unk_1400C75FC);
      v70 = v5;
      if ( !v5 )
      {
        v58 = -2147024882;
        throw (long *)&v58;
      }
      v6 = *(_DWORD *)(v4 + 24);
      v7 = a1[30];
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v5 + 8) = -1LL;
      *(_DWORD *)(v5 + 16) = v6;
      *(_QWORD *)(v5 + 24) = v4;
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_DWORD *)(v5 + 40) = 0;
      sub_140004C9C(v5 + 48, v7);
      *(_QWORD *)(v5 + 64) = -1LL;
      v68 = v5;
      v8 = sub_140049338(48LL, &unk_1400C75FC);
      v9 = (_QWORD *)v8;
      if ( !v8 )
      {
        v57 = -2147024882;
        throw (long *)&v57;
      }
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_DWORD *)(v8 + 40) = 10;
      v70 = v8;
      sub_140004A6C(v8, &v68);
      sub_140004BD4(a1 + 8, &v70);
      sub_140004A6C(a1 + 31, &v68);
      v68 = 0LL;
      if ( *((_DWORD *)a1 + 3) || !*((_BYTE *)a1 + 316) )
        goto LABEL_24;
      v10 = sub_140049338(72LL, &unk_1400C75FC);
      v70 = v10;
      if ( !v10 )
      {
        v56 = -2147024882;
        throw (long *)&v56;
      }
      v11 = *(_DWORD *)(v4 + 24);
      v12 = a1[30];
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_QWORD *)(v10 + 64) = 0LL;
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = -2LL;
      *(_DWORD *)(v10 + 16) = v11;
      *(_QWORD *)(v10 + 24) = v4;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 40) = 0;
      sub_140004C9C(v10 + 48, v12);
      *(_QWORD *)(v10 + 64) = -2LL;
      v68 = v10;
      v70 = v9[1];
      sub_140004B3C(v9);
      v13 = (__int64 *)v9[4];
      v14 = *v13;
      v13[2] = v10;
      v9[4] = v14;
      v13[1] = v70;
      *v13 = 0LL;
      ++v9[2];
      v15 = (__int64 **)v9[1];
      if ( v15 )
        *v15 = v13;
      else
        *v9 = v13;
      v9[1] = v13;
      sub_140004A6C(a1 + 31, &v68);
    }
    while ( 1 )
    {
      v68 = 0LL;
LABEL_24:
      v3 = v69;
LABEL_25:
      if ( !v3 )
        break;
      v23 = *(_QWORD *)(v3 + 16);
      v69 = *(_QWORD *)(v3 + 8);
      v70 = v23;
      v24 = sub_140049338(72LL, &unk_1400C75FC);
      v68 = v24;
      if ( !v24 )
      {
        v68 = 0LL;
        v60 = -2147024882;
        throw (long *)&v60;
      }
      v25 = *(_DWORD *)(v23 + 24);
      v26 = a1[30];
      v27 = (_QWORD *)(v24 + 48);
      *(_QWORD *)(v24 + 48) = 0LL;
      *(_QWORD *)(v24 + 56) = 0LL;
      *(_QWORD *)(v24 + 64) = 0LL;
      *(_QWORD *)v24 = 1LL;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_DWORD *)(v24 + 16) = v25;
      *(_QWORD *)(v24 + 24) = v70;
      *(_QWORD *)(v24 + 32) = v4;
      *(_DWORD *)(v24 + 40) = 0;
      if ( v26 && v24 != -48 )
      {
        sub_1400B6010(v26);
        if ( *v27 )
          sub_1400B6010(*v27);
        *v27 = v26;
      }
      v68 = v24;
      v16 = sub_140049338(48LL, &unk_1400C75FC);
      v17 = (_QWORD *)v16;
      if ( !v16 )
      {
        v59 = -2147024882;
        throw (long *)&v59;
      }
      *(_QWORD *)v16 = 0LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_DWORD *)(v16 + 40) = 10;
      sub_140004B3C(v16);
      v18 = (__int64 *)v17[4];
      v19 = *v18;
      v18[2] = v24;
      v17[4] = v19;
      v18[1] = 0LL;
      *v18 = 0LL;
      ++v17[2];
      if ( *v17 )
        *(_QWORD *)(*v17 + 8LL) = v18;
      else
        v17[1] = v18;
      *v17 = v18;
      v20 = a1[8];
      sub_140004B3C(a1 + 8);
      v21 = (__int64 *)a1[12];
      v22 = *v21;
      v21[2] = (__int64)v17;
      a1[12] = v22;
      v21[1] = 0LL;
      *v21 = v20;
      ++a1[10];
      if ( a1[8] )
        *(_QWORD *)(a1[8] + 8) = v21;
      else
        a1[9] = (__int64)v21;
      a1[8] = (__int64)v21;
      v4 = v70;
    }
    v28 = *((_DWORD *)a1 + 28);
    if ( v28 != 1 && (unsigned int)(v28 - 3) > 1 )
      return 0;
    v31 = sub_140049338(72LL, &unk_1400C75FC);
    v68 = v31;
    if ( v31 )
    {
      v68 = sub_140004C44(v31, v32, a1[30], *(_DWORD *)(v4 + 24), 0LL, v4);
      if ( v68 )
      {
        v33 = sub_140049338(48LL, &unk_1400C75FC);
        v34 = (_QWORD *)v33;
        if ( !v33 )
        {
          pExceptionObject = -2147024882;
          throw (long *)&pExceptionObject;
        }
        *(_QWORD *)v33 = 0LL;
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 16) = 0LL;
        *(_QWORD *)(v33 + 24) = 0LL;
        *(_QWORD *)(v33 + 32) = 0LL;
        *(_DWORD *)(v33 + 40) = 10;
        v69 = v33;
        sub_140004A6C(v33, &v68);
        sub_140004BD4(a1 + 8, &v69);
        v68 = 0LL;
        if ( !*((_DWORD *)a1 + 3) && *((_BYTE *)a1 + 317) )
        {
          v35 = sub_140049338(72LL, &unk_1400C75FC);
          v69 = v35;
          if ( !v35 || (v37 = sub_140004C44(v35, v36, a1[30], *(_DWORD *)(v4 + 24), 0LL, v4), (v68 = v37) == 0) )
          {
            v61 = -2147024882;
            throw (long *)&v61;
          }
          v38 = v34[1];
          sub_140004B3C(v34);
          v39 = (__int64 *)v34[4];
          v40 = *v39;
          v39[2] = v37;
          v34[4] = v40;
          v39[1] = v38;
          *v39 = 0LL;
          ++v34[2];
          v41 = (__int64 **)v34[1];
          if ( v41 )
            *v41 = v39;
          else
            *v34 = v39;
          v34[1] = v39;
          v68 = 0LL;
        }
        return 0;
      }
    }
    else
    {
      v68 = 0LL;
    }
    v63 = -2147024882;
    throw (long *)&v63;
  }
  catch ( ATL::CAtlException *v65 )
  {
    v67 = *(_DWORD *)v65;
    goto LABEL_56;
  }
  catch ( long *v66 )
  {
    v67 = *(_DWORD *)v66;
LABEL_56:
    v29 = v67;
    if ( v67 < 0 )
    {
      if ( v68 )
        sub_14000E88C();
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 35LL, &unk_1400C9A58);
      }
      sub_14005A470("CPipeInstance::CreateAPOConnectionList", 2805LL, (unsigned int)v67);
    }
  }
  return v29;
}
