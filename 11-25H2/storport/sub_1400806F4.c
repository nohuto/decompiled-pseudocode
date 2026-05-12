/*
 * XREFs of sub_1400806F4 @ 0x1400806F4
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400806F4(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  char v6; // r13
  __int64 v7; // rbx
  char v8; // r12
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // r12
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  char v17; // r11
  __int64 v18; // r9
  const wchar_t *v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  const wchar_t *v22; // rbx
  bool v23; // zf
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  const EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // rdx
  char v29; // r12
  char v30; // bl
  _BYTE *v31; // r8
  unsigned __int8 v32; // r10
  char v33; // r11
  int v34; // eax
  char v35; // r13
  char *v36; // r15
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  int v41; // r15d
  char v42; // r9
  _BYTE *v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // r9
  char v46; // al
  __int64 v48; // [rsp+20h] [rbp-130h]
  __int64 v49; // [rsp+28h] [rbp-128h]
  __int64 v50; // [rsp+30h] [rbp-120h]
  __int64 v51; // [rsp+38h] [rbp-118h]
  __int64 v52; // [rsp+40h] [rbp-110h]
  __int64 v53; // [rsp+48h] [rbp-108h]
  char v54; // [rsp+D0h] [rbp-80h]
  char v55; // [rsp+D1h] [rbp-7Fh]
  char v56; // [rsp+D2h] [rbp-7Eh]
  __int64 v57; // [rsp+D8h] [rbp-78h]
  int v58; // [rsp+D8h] [rbp-78h]
  __int64 v59; // [rsp+E0h] [rbp-70h]
  int v60; // [rsp+E0h] [rbp-70h]
  unsigned int v61; // [rsp+E8h] [rbp-68h]
  int v62; // [rsp+F0h] [rbp-60h]
  __int64 v63; // [rsp+F0h] [rbp-60h]
  int v64; // [rsp+F8h] [rbp-58h]
  __int128 v65; // [rsp+100h] [rbp-50h] BYREF
  GUID v66; // [rsp+110h] [rbp-40h] BYREF
  _OWORD v67[2]; // [rsp+120h] [rbp-30h] BYREF

  v2 = 0;
  LOBYTE(v62) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  LOBYTE(v64) = 0;
  v65 = 0LL;
  v7 = *(_QWORD *)(a2 + 24);
  LOBYTE(v59) = 0;
  v8 = 0;
  memset(v67, 0, sizeof(v67));
  if ( !v7 )
    goto LABEL_29;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 < 0x28 )
    goto LABEL_29;
  if ( *(_WORD *)v7 != 1 )
    goto LABEL_29;
  v10 = *(_DWORD *)(v7 + 32);
  if ( v10 > 0x20 )
    goto LABEL_29;
  v11 = v10 + 36;
  if ( v11 < 0x28 )
    v11 = 40;
  if ( *(_DWORD *)(v7 + 4) != v11 || v9 < v11 || (*(_DWORD *)(v7 + 8) & 6) == 2 )
  {
LABEL_29:
    v12 = -1073741811;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v4 + 8) < 0x40u )
  {
    v12 = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v12 = -2147483631;
    goto LABEL_30;
  }
  v6 = 1;
  v13 = *(_QWORD *)(a2 + 24);
  v62 = *(_DWORD *)(v7 + 8);
  v64 = *(_DWORD *)(v7 + 32);
  if ( (v62 & 1) != 0 )
  {
    v57 = *(_QWORD *)(v7 + 16);
    v59 = *(_QWORD *)(v7 + 24);
  }
  else
  {
    LODWORD(v57) = *(_DWORD *)(v7 + 16);
    LOBYTE(v59) = 0;
  }
  v12 = sub_14008D1F0(a1, v67);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
    {
      v15 = *(_DWORD *)(v7 + 8);
      if ( (v15 & 1) != 0 )
      {
        LOBYTE(v14) = (*(_DWORD *)(v7 + 8) & 4) != 0;
        v16 = sub_14008B1CC(
                a1,
                *(_QWORD *)(v7 + 16),
                *(_QWORD *)(v7 + 24),
                v14,
                *(_DWORD *)(v7 + 32),
                v7 + 36,
                v13,
                (__int64)v67);
      }
      else
      {
        if ( (v15 & 2) == 0 )
        {
          v12 = -1073741811;
          goto LABEL_27;
        }
        v16 = sub_14008AE74(a1, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 32), (int)v7 + 36, v13, (__int64)v67);
      }
      v12 = v16;
      if ( v16 >= 0 )
        *(_QWORD *)(a2 + 56) = 64LL;
      goto LABEL_27;
    }
    v12 = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( v12 >= 0 )
    goto LABEL_35;
  v8 = v57;
LABEL_30:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v6 )
  {
    v58 = *(_DWORD *)(a1 + 104);
    sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v65);
    v18 = *(_QWORD *)(a1 + 24);
    if ( (byte_1401694F7 & 2) != 0 )
    {
      v19 = *(const wchar_t **)(v18 + 5080);
      v20 = v18 + 5064;
      v21 = *(_DWORD *)(v18 + 56);
      v22 = (const wchar_t *)&unk_140149394;
      if ( v19 )
        v22 = v19;
      sub_14007B5A0(
        a1 + 177,
        a1 + 168,
        v20,
        v21,
        v17,
        SBYTE1(v58),
        SBYTE2(v58),
        a1 + 2104,
        v20,
        *((const wchar_t **)&v65 + 1),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v22,
        "TcgAssignLockingObject",
        (const char *)v67,
        v12,
        v62,
        v64,
        v8,
        v59,
        0);
    }
  }
LABEL_35:
  v23 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v23 )
    goto LABEL_104;
  v66 = 0LL;
  IoGetActivityIdIrp(a2, &v66);
  v25 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v25 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_104;
    LODWORD(v48) = *(_DWORD *)(a2 + 48);
    v27 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_103;
  }
  if ( *(_BYTE *)v25 != 15 )
  {
    if ( *(_BYTE *)v25 != 27 )
      goto LABEL_104;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v26 = *(int **)(a2 + 56);
        if ( v26 )
          v2 = *v26;
        LODWORD(v49) = *(_DWORD *)(a2 + 48);
        LODWORD(v48) = v2;
        sub_140056AB0(v24, v25, &v66, a2, v48, v49);
      }
      goto LABEL_104;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_104;
    v27 = &stru_140149FE8;
    LODWORD(v48) = *(_DWORD *)(a2 + 48);
LABEL_103:
    sub_140052F3C(v24, v27, &v66, a2, v48);
    goto LABEL_104;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_104;
  v28 = *(_QWORD *)(v25 + 8);
  v29 = 0;
  v30 = 0;
  v55 = 0;
  v31 = 0LL;
  v54 = 0;
  v32 = 0;
  v33 = 0;
  v34 = *(unsigned __int8 *)(v28 + 2);
  v35 = 0;
  if ( (_BYTE)v34 != 40 )
  {
    v29 = *(_BYTE *)(v28 + 72);
    v31 = *(_BYTE **)(v28 + 32);
    v32 = *(_BYTE *)(v28 + 11);
    v30 = *(_BYTE *)(v28 + 4);
    goto LABEL_78;
  }
  v34 = *(_DWORD *)(v28 + 20);
  v36 = 0LL;
  v56 = 0;
  if ( v34 )
    goto LABEL_104;
  v37 = *(_DWORD *)(v28 + 56);
  v24 = 0LL;
  v60 = 0;
  v61 = v37;
  if ( !v37 )
    goto LABEL_75;
  v38 = (unsigned int *)(v28 + 120);
  v63 = v28 + 120;
  while ( 1 )
  {
    v39 = *v38;
    if ( (unsigned int)v39 >= 0x80 )
    {
      v40 = *(unsigned int *)(v28 + 16);
      if ( (unsigned int)v39 < (unsigned int)v40 )
        break;
    }
LABEL_68:
    v24 = (unsigned int)(v24 + 1);
    v38 = (unsigned int *)(v63 + 4);
    v60 = v24;
    v63 += 4LL;
    if ( (unsigned int)v24 >= v37 )
      goto LABEL_74;
  }
  if ( *(_DWORD *)(v39 + v28) != 64 )
  {
    v24 = (unsigned int)(*(_DWORD *)(v39 + v28) - 65);
    if ( *(_DWORD *)(v39 + v28) == 65 )
    {
      v24 = v39 + 56;
      if ( v39 + 56 <= v40 )
      {
        v56 = 1;
        if ( *(_BYTE *)(v39 + v28 + 10) )
          v36 = (char *)(v39 + v28 + 24);
        v30 = *(_BYTE *)(v39 + v28 + 8);
        v31 = *(_BYTE **)(v39 + v28 + 16);
        v32 = *(_BYTE *)(v39 + v28 + 9);
      }
    }
    else if ( *(_DWORD *)(v39 + v28) == 66 )
    {
      v24 = v39 + 40;
      if ( v39 + 40 <= v40 )
      {
        if ( *(_DWORD *)(v39 + v28 + 12) )
          v36 = (char *)(v39 + v28 + 32);
        v31 = *(_BYTE **)(v39 + v28 + 24);
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v24 = v39 + 40;
  if ( v39 + 40 > v40 )
  {
LABEL_66:
    if ( v56 )
      goto LABEL_74;
    LODWORD(v24) = v60;
    v37 = v61;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v39 + v28 + 10) )
    v36 = (char *)(v39 + v28 + 24);
  v31 = *(_BYTE **)(v39 + v28 + 16);
LABEL_73:
  v32 = *(_BYTE *)(v39 + v28 + 9);
  v30 = *(_BYTE *)(v39 + v28 + 8);
LABEL_74:
  v34 = 0;
  v35 = 0;
LABEL_75:
  if ( !v36 )
  {
LABEL_78:
    v41 = v12;
    if ( !v34 )
      goto LABEL_79;
    goto LABEL_104;
  }
  v29 = *v36;
  v41 = v12;
LABEL_79:
  if ( ((v29 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v28 + 3) == 1 || !v31 || !v32 )
      goto LABEL_99;
    v42 = 0;
    v24 = (unsigned __int64)&v31[v32];
    v43 = v31 + 8;
    if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v43 <= v24 )
      {
        v42 = 1;
        v33 = v31[1] & 0xF;
        v35 = v31[3];
        v55 = v31[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v43 <= v24 )
      {
        v33 = v31[2] & 0xF;
        v44 = v32;
        if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
          v44 = (unsigned __int8)v31[7] + 8;
        v24 = (unsigned __int64)(v31 + 13);
        v45 = (unsigned __int64)&v31[v44];
        if ( (unsigned __int64)(v31 + 13) > v45 )
          v55 = 0;
        else
          v55 = v31[12];
        if ( (unsigned __int64)(v31 + 14) > v45 )
          v54 = 0;
        else
          v54 = *(_BYTE *)v24;
        v42 = 1;
      }
      v35 = v54;
    }
    if ( v42 )
    {
      LOBYTE(v2) = v55;
      v12 = v41;
      v46 = v35;
    }
    else
    {
LABEL_99:
      v33 = 0;
      v46 = 0;
    }
    LOBYTE(v53) = v46;
    LOBYTE(v52) = v2;
    LOBYTE(v51) = v33;
    LOBYTE(v50) = v30;
    LOBYTE(v49) = *(_BYTE *)(v28 + 3);
    LODWORD(v48) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v24, v28, &v66, a2, v48, v49, v50, v51, v52, v53, a2);
  }
LABEL_104:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
