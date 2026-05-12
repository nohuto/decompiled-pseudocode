/*
 * XREFs of sub_14018D030 @ 0x14018D030
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C9A34 @ 0x1400C9A34 (sub_1400C9A34.c)
 *     sub_1400CDA00 @ 0x1400CDA00 (sub_1400CDA00.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400DF8B0 @ 0x1400DF8B0 (sub_1400DF8B0.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018D030(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // rax
  char *v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // r13
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // si
  char v31; // r14
  char v32; // r11
  char *v33; // r11
  unsigned int v34; // r12d
  unsigned __int64 v35; // r14
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r8
  char v43; // al
  __int64 v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  char v49; // [rsp+60h] [rbp-A0h]
  char v50; // [rsp+61h] [rbp-9Fh]
  char v51; // [rsp+62h] [rbp-9Eh]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  GUID v54; // [rsp+78h] [rbp-88h] BYREF
  char Dst[272]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(Dst, 0, 0x101uLL);
  v4 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = 0;
  v52 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v6 == 1 && *(_WORD *)(v6 + 2) >= 0x10u )
    {
      v7 = sub_1400CDA00(a1, *(_QWORD *)(v6 + 8) ^ a1, 1, &v52);
      v53 = v7;
      v8 = v7;
      if ( v7 )
      {
        if ( ((*(_DWORD *)(v7 + 568) - 2) & 0xFFFFFFFD) != 0 )
        {
          v5 = -1073741808;
        }
        else
        {
          v9 = (_QWORD *)(v7 + 136);
          if ( (*(_BYTE *)(v7 + 136) & 8) == 0 )
          {
            v10 = v52;
            *(_DWORD *)(v7 + 568) = 3;
            if ( (*v9 & 1) == 0 )
            {
              *v9 |= 8uLL;
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 632), 1u);
              v11 = *(_QWORD *)(v8 + 64);
              if ( *(_QWORD *)(v11 + 8) != v8 + 64 || (v12 = *(_QWORD **)(v8 + 72), *v12 != v8 + 64) )
                __fastfail(3u);
              *v12 = v11;
              *(_QWORD *)(v11 + 8) = v12;
              --*(_DWORD *)(v10 + 624);
              ExReleaseResourceLite((PERESOURCE)(v10 + 632));
              KeLeaveCriticalRegion();
            }
            v13 = 2LL;
            v14 = (_OWORD *)(v10 + 60);
            v15 = Dst;
            do
            {
              *(_OWORD *)v15 = *v14;
              *((_OWORD *)v15 + 1) = v14[1];
              *((_OWORD *)v15 + 2) = v14[2];
              *((_OWORD *)v15 + 3) = v14[3];
              *((_OWORD *)v15 + 4) = v14[4];
              *((_OWORD *)v15 + 5) = v14[5];
              *((_OWORD *)v15 + 6) = v14[6];
              v15 += 128;
              v16 = v14[7];
              v14 += 8;
              *((_OWORD *)v15 - 1) = v16;
              --v13;
            }
            while ( v13 );
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
            if ( (byte_1401694FA & 2) != 0 )
              sub_1400C9A34(
                a1 + 1032,
                &stru_140149F28,
                v17,
                *(_DWORD *)(a1 + 56),
                a1 + 1032,
                *(const wchar_t **)(a1 + 1016),
                Dst,
                *(_WORD *)(v8 + 4));
            sub_1400E63C4(v8, 0);
            sub_1400DF8B0(v8, v18);
            v19 = *(_QWORD *)(v8 + 1664);
            if ( v19 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v19 + 16));
              *(_QWORD *)(v8 + 1664) = 0LL;
              v8 = v53;
            }
            v20 = *(_QWORD *)(v8 + 1672);
            if ( v20 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v20 + 16));
              *(_QWORD *)(v8 + 1672) = 0LL;
            }
            if ( (*(_BYTE *)v9 & 1) == 0 )
              sub_1400DEFC4(&v53);
            goto LABEL_31;
          }
          v5 = -2147483631;
        }
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v52 + 40));
      }
      else
      {
        v5 = -1073741275;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741637;
  }
LABEL_31:
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v21 )
    goto LABEL_97;
  v54 = 0LL;
  IoGetActivityIdIrp(a2, &v54);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_97;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    v25 = &stru_140148B18;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v4 = *v24;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v4;
        sub_140056AB0(v22, v23, &v54, a2, v45, v46);
      }
      goto LABEL_97;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_97;
    v25 = &stru_140149FE8;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
LABEL_96:
    sub_140052F3C(v22, v25, &v54, a2, v45);
    goto LABEL_97;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_97;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v49 = 0;
  v29 = 0;
  v50 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v26 + 72);
    v28 = *(_BYTE **)(v26 + 32);
    v29 = *(_BYTE *)(v26 + 11);
    v27 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_72;
    goto LABEL_97;
  }
  v33 = 0LL;
  v51 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_97;
  v34 = 0;
  LODWORD(v52) = *(_DWORD *)(v26 + 56);
  if ( !(_DWORD)v52 )
    goto LABEL_69;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v26 + 4LL * v34 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v35 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v22 < (unsigned int)v35 )
        break;
    }
LABEL_62:
    if ( ++v34 >= (unsigned int)v52 )
      goto LABEL_68;
  }
  v36 = (unsigned int)v22;
  v37 = *(_DWORD *)(v22 + v26) - 64;
  if ( v37 )
  {
    v22 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + v26 + 12) )
            v33 = (char *)(v36 + v26 + 32);
          v28 = *(_BYTE **)(v36 + v26 + 24);
          goto LABEL_67;
        }
      }
    }
    else
    {
      v22 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v51 = 1;
        if ( *(_BYTE *)(v36 + v26 + 10) )
          v33 = (char *)(v36 + v26 + 24);
        v27 = *(_BYTE *)(v36 + v26 + 8);
        v28 = *(_BYTE **)(v36 + v26 + 16);
        v29 = *(_BYTE *)(v36 + v26 + 9);
      }
    }
    goto LABEL_61;
  }
  v22 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_61:
    if ( v51 )
      goto LABEL_68;
    goto LABEL_62;
  }
  if ( *(_BYTE *)(v36 + v26 + 10) )
    v33 = (char *)(v36 + v26 + 24);
  v28 = *(_BYTE **)(v36 + v26 + 16);
LABEL_67:
  v29 = *(_BYTE *)(v36 + v26 + 9);
  v27 = *(_BYTE *)(v36 + v26 + 8);
LABEL_68:
  v31 = 0;
LABEL_69:
  if ( v33 )
  {
    v38 = *v33;
    v32 = 0;
LABEL_72:
    LOBYTE(v22) = v38 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v28 || !v29 )
        goto LABEL_92;
      v39 = 0;
      v22 = (unsigned __int64)&v28[v29];
      v40 = v28 + 8;
      if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v39 = 1;
          v31 = v28[2];
          v30 = v28[1] & 0xF;
          v32 = v28[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v30 = v28[2] & 0xF;
          v41 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v41 = (unsigned __int8)v28[7] + 8;
          v22 = (unsigned __int64)(v28 + 13);
          v42 = (unsigned __int64)&v28[v41];
          if ( (unsigned __int64)(v28 + 13) > v42 )
            v49 = 0;
          else
            v49 = v28[12];
          if ( (unsigned __int64)(v28 + 14) > v42 )
            v50 = 0;
          else
            v50 = *(_BYTE *)v22;
          v39 = 1;
        }
        v32 = v50;
        v31 = v49;
      }
      if ( v39 )
      {
        LOBYTE(v4) = v31;
        v43 = v32;
      }
      else
      {
LABEL_92:
        v30 = 0;
        v43 = 0;
      }
      LOBYTE(v48) = v30;
      LOBYTE(v47) = v27;
      LOBYTE(v46) = *(_BYTE *)(v26 + 3);
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v22, v26, &v54, a2, v45, v46, v47, v48, v4, v43, a2);
    }
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
