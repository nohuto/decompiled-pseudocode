/*
 * XREFs of sub_140080D4C @ 0x140080D4C
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140080D4C(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rdx
  __int64 v6; // rbx
  char v7; // di
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r12d
  int v12; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  const wchar_t *v18; // r14
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // si
  char v26; // r11
  _BYTE *v27; // r8
  unsigned __int8 v28; // r10
  char v29; // bl
  int v30; // eax
  char v31; // r14
  char *v32; // rdi
  unsigned int v33; // r9d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  int v37; // edi
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-130h]
  __int64 v45; // [rsp+28h] [rbp-128h]
  __int64 v46; // [rsp+30h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  char v52; // [rsp+D2h] [rbp-7Eh]
  int v53; // [rsp+D4h] [rbp-7Ch]
  int v54; // [rsp+D8h] [rbp-78h]
  unsigned int v55; // [rsp+DCh] [rbp-74h]
  __int128 v56; // [rsp+E0h] [rbp-70h] BYREF
  GUID v57; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v58[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v56 = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( !v4 )
    goto LABEL_18;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x18 )
    goto LABEL_18;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 > 0x20 )
    goto LABEL_18;
  v10 = v9 + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( *(_DWORD *)(v4 + 4) == v10 && v8 >= v10 )
  {
    if ( *(_DWORD *)(v4 + 12) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v7 = 1;
        v11 = sub_14008D1F0(a1, v58);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
          {
            LOBYTE(v12) = *(_BYTE *)(v6 + 8) & 1;
            v11 = sub_14008BC18(a1, *(_DWORD *)(v6 + 12), v12, *(_DWORD *)(v6 + 16), v6 + 20, (__int64)v58);
          }
          else
          {
            v11 = -1073741637;
          }
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
      v53 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v56);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5080);
        v16 = v14 + 5064;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_140149394;
        if ( v15 )
          v18 = v15;
        sub_14007B5A0(
          *(unsigned int *)(v6 + 16),
          *(unsigned int *)(v6 + 8),
          a1 + 242,
          v17,
          v13,
          SBYTE1(v53),
          SBYTE2(v53),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v56 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v18,
          "TcgDeassignLockingObject",
          (const char *)v58,
          v11,
          *(_DWORD *)(v6 + 8),
          *(_DWORD *)(v6 + 16),
          *(_DWORD *)(v6 + 12),
          0,
          0);
      }
    }
  }
  v19 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v19 )
    goto LABEL_94;
  v57 = 0LL;
  IoGetActivityIdIrp(a2, &v57);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v23 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v2 = *v22;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        LODWORD(v44) = v2;
        sub_140056AB0(v20, v21, &v57, a2, v44, v45);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v23 = &stru_140149FE8;
LABEL_93:
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v20, v23, &v57, a2, v44);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0;
  v51 = 0;
  v27 = 0LL;
  v50 = 0;
  v28 = 0;
  v29 = 0;
  v30 = *(unsigned __int8 *)(v24 + 2);
  v31 = 0;
  if ( (_BYTE)v30 != 40 )
  {
    v25 = *(_BYTE *)(v24 + 72);
    v27 = *(_BYTE **)(v24 + 32);
    v28 = *(_BYTE *)(v24 + 11);
    v26 = *(_BYTE *)(v24 + 4);
    goto LABEL_68;
  }
  v30 = *(_DWORD *)(v24 + 20);
  v32 = 0LL;
  v52 = 0;
  if ( v30 )
    goto LABEL_94;
  v33 = *(_DWORD *)(v24 + 56);
  v20 = 0LL;
  v54 = 0;
  v55 = v33;
  if ( !v33 )
    goto LABEL_65;
  v34 = (unsigned int *)(v24 + 120);
  *(_QWORD *)&v56 = v24 + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_58:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v56 + 4);
    v54 = v20;
    *(_QWORD *)&v56 = v56 + 4;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v35 + v24) != 64 )
  {
    v20 = (unsigned int)(*(_DWORD *)(v35 + v24) - 65);
    if ( *(_DWORD *)(v35 + v24) == 65 )
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v35 + v24 + 10) )
          v32 = (char *)(v35 + v24 + 24);
        v26 = *(_BYTE *)(v35 + v24 + 8);
        v27 = *(_BYTE **)(v35 + v24 + 16);
        v28 = *(_BYTE *)(v35 + v24 + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + v24) == 66 )
    {
      v20 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + v24 + 12) )
          v32 = (char *)(v35 + v24 + 32);
        v27 = *(_BYTE **)(v35 + v24 + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_56:
    if ( v52 )
      goto LABEL_64;
    LODWORD(v20) = v54;
    v33 = v55;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v27 = *(_BYTE **)(v35 + v24 + 16);
LABEL_63:
  v28 = *(_BYTE *)(v35 + v24 + 9);
  v26 = *(_BYTE *)(v35 + v24 + 8);
LABEL_64:
  v30 = 0;
  v31 = 0;
LABEL_65:
  if ( !v32 )
  {
LABEL_68:
    v37 = v11;
    if ( !v30 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v25 = *v32;
  v37 = v11;
LABEL_69:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v24 + 3) == 1 || !v27 || !v28 )
      goto LABEL_89;
    v38 = 0;
    v20 = (unsigned __int64)&v27[v28];
    v39 = v27 + 8;
    if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v38 = 1;
        v29 = v27[1] & 0xF;
        v31 = v27[3];
        v51 = v27[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v29 = v27[2] & 0xF;
        v40 = v28;
        if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
          v40 = (unsigned __int8)v27[7] + 8;
        v20 = (unsigned __int64)(v27 + 13);
        v41 = (unsigned __int64)&v27[v40];
        if ( (unsigned __int64)(v27 + 13) > v41 )
          v51 = 0;
        else
          v51 = v27[12];
        if ( (unsigned __int64)(v27 + 14) > v41 )
          v50 = 0;
        else
          v50 = *(_BYTE *)v20;
        v38 = 1;
      }
      v31 = v50;
    }
    if ( v38 )
    {
      LOBYTE(v2) = v51;
      v11 = v37;
      v42 = v31;
    }
    else
    {
LABEL_89:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v2;
    LOBYTE(v47) = v29;
    LOBYTE(v46) = v26;
    LOBYTE(v45) = *(_BYTE *)(v24 + 3);
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v20, v24, &v57, a2, v44, v45, v46, v47, v48, v49, a2);
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
