/*
 * XREFs of sub_14008191C @ 0x14008191C
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008191C(__int64 a1, __int64 a2)
{
  int v2; // r15d
  unsigned int *v4; // rdx
  unsigned int *v6; // rbx
  char v7; // di
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r12d
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rdi
  int v16; // r9d
  const wchar_t *v17; // r14
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  char v24; // si
  char v25; // r11
  _BYTE *v26; // r8
  unsigned __int8 v27; // r10
  char v28; // bl
  int v29; // eax
  char v30; // r14
  char *v31; // rdi
  unsigned int v32; // r9d
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  int v36; // edi
  char v37; // r9
  _BYTE *v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r9
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-130h]
  __int64 v44; // [rsp+28h] [rbp-128h]
  __int64 v45; // [rsp+30h] [rbp-120h]
  __int64 v46; // [rsp+38h] [rbp-118h]
  __int64 v47; // [rsp+40h] [rbp-110h]
  __int64 v48; // [rsp+48h] [rbp-108h]
  char v49; // [rsp+D0h] [rbp-80h]
  char v50; // [rsp+D1h] [rbp-7Fh]
  char v51; // [rsp+D2h] [rbp-7Eh]
  int v52; // [rsp+D4h] [rbp-7Ch]
  int v53; // [rsp+D8h] [rbp-78h]
  unsigned int v54; // [rsp+DCh] [rbp-74h]
  __int128 v55; // [rsp+E0h] [rbp-70h] BYREF
  GUID v56; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v57[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(unsigned int **)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v55 = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( !v4 )
    goto LABEL_18;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x18 )
    goto LABEL_18;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_18;
  v9 = v4[4];
  if ( v9 > 0x20 )
    goto LABEL_18;
  v10 = v9 + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( v4[1] == v10 && v8 >= v10 )
  {
    if ( v4[3] )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v7 = 1;
        v11 = sub_14008D1F0(a1, v57);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
            v11 = sub_14008C144(a1, v6[3], v6[4], (int)v6 + 20, (__int64)v57);
          else
            v11 = -1073741637;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
      }
    }
    else
    {
      v11 = -1073741637;
    }
  }
  else
  {
LABEL_18:
    v11 = -1073741811;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 0 )
  {
    if ( v7 )
    {
      v52 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v55);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5080);
        v15 = v13 + 5064;
        v16 = *(_DWORD *)(v13 + 56);
        v17 = (const wchar_t *)&unk_140149394;
        if ( v14 )
          v17 = v14;
        sub_14007B5A0(
          v6[4],
          v6[2],
          a1 + 242,
          v16,
          v12,
          SBYTE1(v52),
          SBYTE2(v52),
          a1 + 2104,
          v15,
          *((const wchar_t **)&v55 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgEraseLockingObject",
          (const char *)v57,
          v11,
          v6[2],
          v6[4],
          v6[3],
          0,
          0);
      }
    }
  }
  v18 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v18 )
    goto LABEL_94;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v22 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v2 = *v21;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v2;
        sub_140056AB0(v19, v20, &v56, a2, v43, v44);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v22 = &stru_140149FE8;
LABEL_93:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v19, v22, &v56, a2, v43);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0;
  v50 = 0;
  v26 = 0LL;
  v49 = 0;
  v27 = 0;
  v28 = 0;
  v29 = *(unsigned __int8 *)(v23 + 2);
  v30 = 0;
  if ( (_BYTE)v29 != 40 )
  {
    v24 = *(_BYTE *)(v23 + 72);
    v26 = *(_BYTE **)(v23 + 32);
    v27 = *(_BYTE *)(v23 + 11);
    v25 = *(_BYTE *)(v23 + 4);
    goto LABEL_68;
  }
  v29 = *(_DWORD *)(v23 + 20);
  v31 = 0LL;
  v51 = 0;
  if ( v29 )
    goto LABEL_94;
  v32 = *(_DWORD *)(v23 + 56);
  v19 = 0LL;
  v53 = 0;
  v54 = v32;
  if ( !v32 )
    goto LABEL_65;
  v33 = (unsigned int *)(v23 + 120);
  *(_QWORD *)&v55 = v23 + 120;
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_58:
    v19 = (unsigned int)(v19 + 1);
    v33 = (unsigned int *)(v55 + 4);
    v53 = v19;
    *(_QWORD *)&v55 = v55 + 4;
    if ( (unsigned int)v19 >= v32 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v34 + v23) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v34 + v23) - 65);
    if ( *(_DWORD *)(v34 + v23) == 65 )
    {
      v19 = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v51 = 1;
        if ( *(_BYTE *)(v34 + v23 + 10) )
          v31 = (char *)(v34 + v23 + 24);
        v25 = *(_BYTE *)(v34 + v23 + 8);
        v26 = *(_BYTE **)(v34 + v23 + 16);
        v27 = *(_BYTE *)(v34 + v23 + 9);
      }
    }
    else if ( *(_DWORD *)(v34 + v23) == 66 )
    {
      v19 = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v34 + v23 + 12) )
          v31 = (char *)(v34 + v23 + 32);
        v26 = *(_BYTE **)(v34 + v23 + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v19 = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_56:
    if ( v51 )
      goto LABEL_64;
    LODWORD(v19) = v53;
    v32 = v54;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v34 + v23 + 10) )
    v31 = (char *)(v34 + v23 + 24);
  v26 = *(_BYTE **)(v34 + v23 + 16);
LABEL_63:
  v27 = *(_BYTE *)(v34 + v23 + 9);
  v25 = *(_BYTE *)(v34 + v23 + 8);
LABEL_64:
  v29 = 0;
  v30 = 0;
LABEL_65:
  if ( !v31 )
  {
LABEL_68:
    v36 = v11;
    if ( !v29 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v24 = *v31;
  v36 = v11;
LABEL_69:
  if ( ((v24 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v23 + 3) == 1 || !v26 || !v27 )
      goto LABEL_89;
    v37 = 0;
    v19 = (unsigned __int64)&v26[v27];
    v38 = v26 + 8;
    if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v38 <= v19 )
      {
        v37 = 1;
        v28 = v26[1] & 0xF;
        v30 = v26[3];
        v50 = v26[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v38 <= v19 )
      {
        v28 = v26[2] & 0xF;
        v39 = v27;
        if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
          v39 = (unsigned __int8)v26[7] + 8;
        v19 = (unsigned __int64)(v26 + 13);
        v40 = (unsigned __int64)&v26[v39];
        if ( (unsigned __int64)(v26 + 13) > v40 )
          v50 = 0;
        else
          v50 = v26[12];
        if ( (unsigned __int64)(v26 + 14) > v40 )
          v49 = 0;
        else
          v49 = *(_BYTE *)v19;
        v37 = 1;
      }
      v30 = v49;
    }
    if ( v37 )
    {
      LOBYTE(v2) = v50;
      v11 = v36;
      v41 = v30;
    }
    else
    {
LABEL_89:
      v28 = 0;
      v41 = 0;
    }
    LOBYTE(v48) = v41;
    LOBYTE(v47) = v2;
    LOBYTE(v46) = v28;
    LOBYTE(v45) = v25;
    LOBYTE(v44) = *(_BYTE *)(v23 + 3);
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v19, v23, &v56, a2, v43, v44, v45, v46, v47, v48, a2);
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
