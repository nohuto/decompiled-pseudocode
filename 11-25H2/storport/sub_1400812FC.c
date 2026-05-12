/*
 * XREFs of sub_1400812FC @ 0x1400812FC
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008C574 @ 0x14008C574 (sub_14008C574.c)
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400812FC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // r13
  void *v6; // rcx
  char v8; // r12
  int v9; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r11
  __int64 v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // r8
  int v19; // r9d
  const wchar_t *v20; // rbx
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  unsigned __int64 v26; // rdx
  char v27; // r12
  char v28; // r11
  _BYTE *v29; // r8
  unsigned __int8 v30; // r10
  char v31; // bl
  int v32; // eax
  char v33; // r13
  char *v34; // r15
  unsigned int v35; // r9d
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  int v39; // r15d
  char v40; // r9
  _BYTE *v41; // rax
  unsigned int v42; // eax
  char v43; // al
  void *Dst; // [rsp+20h] [rbp-130h]
  __int64 v46; // [rsp+28h] [rbp-128h]
  __int64 v47; // [rsp+30h] [rbp-120h]
  __int64 v48; // [rsp+38h] [rbp-118h]
  __int64 v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+48h] [rbp-108h]
  char v51; // [rsp+D0h] [rbp-80h]
  char v52; // [rsp+D1h] [rbp-7Fh]
  char v53; // [rsp+D1h] [rbp-7Fh]
  char v54; // [rsp+D2h] [rbp-7Eh]
  int v55; // [rsp+D4h] [rbp-7Ch] BYREF
  __int64 v56; // [rsp+D8h] [rbp-78h]
  int v57[2]; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+E8h] [rbp-68h]
  __int64 v59; // [rsp+F0h] [rbp-60h]
  __int64 v60; // [rsp+F8h] [rbp-58h]
  __int128 v61; // [rsp+100h] [rbp-50h] BYREF
  GUID v62; // [rsp+110h] [rbp-40h] BYREF
  _OWORD v63[2]; // [rsp+120h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v52 = 0;
  v58 = 0LL;
  v6 = 0LL;
  *(_QWORD *)v57 = 0LL;
  v60 = 0LL;
  v56 = 0LL;
  v8 = 0;
  v61 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( v2 && *(_DWORD *)(v4 + 16) >= 0x20u && *(_WORD *)v2 == 1 && *(_DWORD *)(v2 + 4) == 32 )
  {
    if ( *(_DWORD *)(v4 + 8) < 0x10u )
    {
      v9 = -1073741789;
      goto LABEL_20;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      v6 = *(void **)v57;
      v9 = -2147483631;
      goto LABEL_20;
    }
    v10 = *(unsigned int *)(v2 + 12);
    v11 = *(_DWORD **)(a2 + 24);
    v52 = 1;
    v58 = *(unsigned int *)(v2 + 8);
    v60 = v10;
    if ( (v58 & 1) != 0 )
    {
      v59 = *(_QWORD *)(v2 + 16);
      v56 = *(_QWORD *)(v2 + 24);
    }
    else
    {
      v59 = *(unsigned int *)(v2 + 16);
      v56 = 0LL;
    }
    v9 = sub_14008D1F0(a1, v63);
    if ( v9 < 0 )
      goto LABEL_18;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
    {
      v9 = sub_14008D024(a1, v57, v63);
      if ( v9 < 0 )
      {
LABEL_18:
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
        v6 = *(void **)v57;
        v8 = v59;
        goto LABEL_20;
      }
      v13 = *(_QWORD *)(a1 + 3592);
      v55 = *(_DWORD *)(v4 + 8);
      sub_14008C574(v13, v57[0], v2, (int)&v55, v11);
      v12 = (unsigned int)v55;
    }
    else
    {
      memset_0(v11, 0, *(unsigned int *)(v4 + 8));
      v12 = 16LL;
      *(_WORD *)v11 = 1;
      v11[1] = 16;
    }
    *(_QWORD *)(a2 + 56) = v12;
    goto LABEL_18;
  }
  v9 = -1073741811;
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x43546152u);
  if ( v9 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v52 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      v55 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(v14 + 16), (__int64)&v61);
      v16 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v17 = *(const wchar_t **)(v16 + 5080);
        v18 = v16 + 5064;
        v19 = *(_DWORD *)(v16 + 56);
        v20 = (const wchar_t *)&unk_140149394;
        if ( v17 )
          v20 = v17;
        sub_14007B5A0(
          a1 + 177,
          a1 + 168,
          v18,
          v19,
          v15,
          SBYTE1(v55),
          SBYTE2(v55),
          a1 + 2104,
          v18,
          *((const wchar_t **)&v61 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v20,
          "TcgEnumerateLockingObjects",
          (const char *)v63,
          v9,
          v58,
          v60,
          v8,
          v56,
          0);
      }
    }
  }
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v21 )
    goto LABEL_97;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_97;
    v25 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
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
          v3 = *v24;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(Dst) = v3;
        sub_140056AB0(v22, v23, &v62, a2, Dst, v46);
      }
      goto LABEL_97;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_97;
    v25 = &stru_140149FE8;
LABEL_96:
    LODWORD(Dst) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v22, v25, &v62, a2, Dst);
    goto LABEL_97;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_97;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0;
  v53 = 0;
  v29 = 0LL;
  v51 = 0;
  v30 = 0;
  v31 = 0;
  v32 = *(unsigned __int8 *)(v26 + 2);
  v33 = 0;
  if ( (_BYTE)v32 != 40 )
  {
    v27 = *(_BYTE *)(v26 + 72);
    v29 = *(_BYTE **)(v26 + 32);
    v30 = *(_BYTE *)(v26 + 11);
    v28 = *(_BYTE *)(v26 + 4);
    goto LABEL_71;
  }
  v32 = *(_DWORD *)(v26 + 20);
  v34 = 0LL;
  v55 = v32;
  v54 = 0;
  if ( v32 )
    goto LABEL_97;
  v35 = *(_DWORD *)(v26 + 56);
  v22 = 0LL;
  LODWORD(v56) = 0;
  v57[0] = v35;
  if ( !v35 )
    goto LABEL_68;
  v36 = (unsigned int *)(v26 + 120);
  v58 = v26 + 120;
  while ( 1 )
  {
    v37 = *v36;
    if ( (unsigned int)v37 >= 0x80 )
    {
      v38 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v37 < (unsigned int)v38 )
        break;
    }
LABEL_61:
    v22 = (unsigned int)(v22 + 1);
    v36 = (unsigned int *)(v58 + 4);
    LODWORD(v56) = v22;
    v58 += 4LL;
    if ( (unsigned int)v22 >= v35 )
      goto LABEL_67;
  }
  if ( *(_DWORD *)(v37 + v26) != 64 )
  {
    v22 = (unsigned int)(*(_DWORD *)(v37 + v26) - 65);
    if ( *(_DWORD *)(v37 + v26) == 65 )
    {
      v22 = v37 + 56;
      if ( v37 + 56 <= v38 )
      {
        v54 = 1;
        if ( *(_BYTE *)(v37 + v26 + 10) )
          v34 = (char *)(v37 + v26 + 24);
        v28 = *(_BYTE *)(v37 + v26 + 8);
        v29 = *(_BYTE **)(v37 + v26 + 16);
        v30 = *(_BYTE *)(v37 + v26 + 9);
      }
    }
    else if ( *(_DWORD *)(v37 + v26) == 66 )
    {
      v22 = v37 + 40;
      if ( v37 + 40 <= v38 )
      {
        if ( *(_DWORD *)(v37 + v26 + 12) )
          v34 = (char *)(v37 + v26 + 32);
        v29 = *(_BYTE **)(v37 + v26 + 24);
        goto LABEL_66;
      }
    }
    goto LABEL_59;
  }
  v22 = v37 + 40;
  if ( v37 + 40 > v38 )
  {
LABEL_59:
    if ( v54 )
      goto LABEL_67;
    LODWORD(v22) = v56;
    v35 = v57[0];
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v37 + v26 + 10) )
    v34 = (char *)(v37 + v26 + 24);
  v29 = *(_BYTE **)(v37 + v26 + 16);
LABEL_66:
  v30 = *(_BYTE *)(v37 + v26 + 9);
  v28 = *(_BYTE *)(v37 + v26 + 8);
LABEL_67:
  v32 = v55;
  v33 = 0;
LABEL_68:
  if ( !v34 )
  {
LABEL_71:
    v39 = v9;
    if ( !v32 )
      goto LABEL_72;
    goto LABEL_97;
  }
  v27 = *v34;
  v39 = v9;
LABEL_72:
  if ( ((v27 - 8) & 0x5D) == 0 )
  {
    v40 = *(_BYTE *)(v26 + 3);
    if ( v40 == 1 || !v29 || !v30 )
      goto LABEL_92;
    LOBYTE(v26) = 0;
    v22 = (unsigned __int64)&v29[v30];
    v41 = v29 + 8;
    if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v41 <= v22 )
      {
        LOBYTE(v26) = 1;
        v31 = v29[1] & 0xF;
        v33 = v29[3];
        v53 = v29[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v41 <= v22 )
      {
        v31 = v29[2] & 0xF;
        v42 = v30;
        if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
          v42 = (unsigned __int8)v29[7] + 8;
        v22 = (unsigned __int64)(v29 + 13);
        v26 = (unsigned __int64)&v29[v42];
        if ( (unsigned __int64)(v29 + 13) > v26 )
          v53 = 0;
        else
          v53 = v29[12];
        if ( (unsigned __int64)(v29 + 14) > v26 )
          v51 = 0;
        else
          v51 = *(_BYTE *)v22;
        LOBYTE(v26) = 1;
      }
      v33 = v51;
    }
    if ( (_BYTE)v26 )
    {
      LOBYTE(v3) = v53;
      v9 = v39;
      v43 = v33;
    }
    else
    {
LABEL_92:
      v31 = 0;
      v43 = 0;
    }
    LOBYTE(v50) = v43;
    LOBYTE(v49) = v3;
    LOBYTE(v48) = v31;
    LOBYTE(v47) = v28;
    LOBYTE(v46) = v40;
    LODWORD(Dst) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v22, v26, &v62, a2, Dst, v46, v47, v48, v49, v50, a2);
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v9;
}
