/*
 * XREFs of sub_14018D660 @ 0x14018D660
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400718DC @ 0x1400718DC (sub_1400718DC.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 *     sub_1400BC2F8 @ 0x1400BC2F8 (sub_1400BC2F8.c)
 *     sub_1400EADB8 @ 0x1400EADB8 (sub_1400EADB8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14018D660(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int v5; // ebx
  int v6; // r13d
  unsigned int *v7; // rsi
  __int64 v8; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // r15d
  unsigned int *v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  unsigned int *v14; // r8
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned int *v17; // r8
  unsigned int *v18; // r8
  int v19; // ecx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  unsigned __int64 v26; // rdx
  char v27; // r15
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // si
  char v31; // r11
  char v32; // r12
  char *v33; // r11
  unsigned int *v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-69h]
  char v44; // [rsp+60h] [rbp-29h]
  char v45; // [rsp+61h] [rbp-28h]
  int v46; // [rsp+64h] [rbp-25h]
  int v47; // [rsp+68h] [rbp-21h]
  unsigned int v48; // [rsp+6Ch] [rbp-1Dh]
  GUID v49; // [rsp+80h] [rbp-9h] BYREF
  GUID v50; // [rsp+90h] [rbp+7h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v50 = 0LL;
  v5 = 0;
  v46 = sub_140018DDC(v3, (IRP *)a2);
  v6 = v46;
  if ( v46 >= 0 )
  {
    v7 = *(unsigned int **)(a2 + 56);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 400);
      *(_DWORD *)(a1 + 568) = v7[2];
      *(_DWORD *)(a1 + 572) = v7[3];
      if ( (*(_DWORD *)(v8 + 184) & 0x200) != 0 && !(unsigned __int8)sub_1400BC2F8() )
      {
        v9 = v7 + 8;
        v10 = 0;
        v11 = v7 + 8;
        if ( v7[7] )
        {
          while ( 1 )
          {
            v12 = 0;
            v13 = v9[1];
            *(_WORD *)v11 = *(_WORD *)v9;
            *((_WORD *)v11 + 1) = *((_WORD *)v9 + 1);
            if ( v13 )
              break;
LABEL_13:
            v11[1] = v12;
            if ( v13 )
              v17 = &v9[8 * v13 - 8];
            else
              v17 = v9;
            v9 = v17 + 10;
            if ( v12 )
              v18 = &v11[8 * v12 - 8];
            else
              v18 = v11;
            ++v10;
            v11 = v18 + 10;
            if ( v10 >= v7[7] )
              goto LABEL_20;
          }
          v14 = v9 + 2;
          v15 = v13;
          while ( 1 )
          {
            if ( *((_BYTE *)v14 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v14 & 8) == 0 )
              break;
LABEL_12:
            v14 += 8;
            if ( !--v15 )
              goto LABEL_13;
          }
          *((_BYTE *)v14 + 1) = 0;
LABEL_11:
          v16 = 8LL * v12++;
          *(_OWORD *)&v11[v16 + 2] = *(_OWORD *)v14;
          *(_OWORD *)&v11[v16 + 6] = *((_OWORD *)v14 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL);
      if ( (v19 & 0x40000000) != 0 )
      {
        v6 = sub_1400EADB8(*(_QWORD *)(a1 + 8), v7);
        v46 = v6;
      }
      else if ( (v19 & 0x100) != 0 && sub_14007197C(a1 + 168, 13) )
      {
        v6 = sub_1400718DC(a1 + 168);
        if ( v6 < 0 )
          v6 = 0;
        v46 = v6;
      }
    }
  }
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v50);
    if ( (byte_1401694F2 & 0x20) != 0 )
      sub_140052F3C(v20, &stru_140149FE8, &v50, a2, *(_DWORD *)(a2 + 48));
  }
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v21 )
    goto LABEL_97;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_97;
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
          v5 = *v24;
        LODWORD(v43) = v5;
        sub_140056AB0(v22, v23, &v49, a2, v43, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_97;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_97;
    v25 = &stru_140149FE8;
LABEL_96:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v22, v25, &v49, a2, v43);
    goto LABEL_97;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_97;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v44 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v26 + 72);
    v28 = *(_BYTE **)(v26 + 32);
    v29 = *(_BYTE *)(v26 + 11);
    v27 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_73;
    goto LABEL_97;
  }
  v33 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_97;
  v22 = 0LL;
  v47 = 0;
  v48 = *(_DWORD *)(v26 + 56);
  if ( !v48 )
    goto LABEL_70;
  v34 = (unsigned int *)(v26 + 120);
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_63:
    v22 = (unsigned int)(v22 + 1);
    ++v34;
    v47 = v22;
    if ( (unsigned int)v22 >= v48 )
      goto LABEL_69;
  }
  if ( *(_DWORD *)(v35 + v26) != 64 )
  {
    v22 = (unsigned int)(*(_DWORD *)(v35 + v26) - 65);
    if ( *(_DWORD *)(v35 + v26) == 65 )
    {
      v22 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v35 + v26 + 10) )
          v33 = (char *)(v35 + v26 + 24);
        v27 = *(_BYTE *)(v35 + v26 + 8);
        v28 = *(_BYTE **)(v35 + v26 + 16);
        v29 = *(_BYTE *)(v35 + v26 + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + v26) == 66 )
    {
      v22 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + v26 + 12) )
          v33 = (char *)(v35 + v26 + 32);
        v28 = *(_BYTE **)(v35 + v26 + 24);
        goto LABEL_68;
      }
    }
    goto LABEL_61;
  }
  v22 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_61:
    if ( v45 )
      goto LABEL_69;
    LODWORD(v22) = v47;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(v35 + v26 + 10) )
    v33 = (char *)(v35 + v26 + 24);
  v28 = *(_BYTE **)(v35 + v26 + 16);
LABEL_68:
  v29 = *(_BYTE *)(v35 + v26 + 9);
  v27 = *(_BYTE *)(v35 + v26 + 8);
LABEL_69:
  v6 = v46;
LABEL_70:
  if ( v33 )
  {
    v37 = *v33;
    v31 = 0;
LABEL_73:
    LOBYTE(v22) = v37 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      v38 = *(_BYTE *)(v26 + 3);
      if ( v38 == 1 || !v28 || !v29 )
        goto LABEL_92;
      LOBYTE(v26) = 0;
      v22 = (unsigned __int64)&v28[v29];
      v39 = v28 + 8;
      if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v22 )
        {
          LOBYTE(v26) = 1;
          v31 = v28[2];
          v30 = v28[1] & 0xF;
          v32 = v28[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v22 )
        {
          v30 = v28[2] & 0xF;
          v40 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v40 = (unsigned __int8)v28[7] + 8;
          v22 = (unsigned __int64)(v28 + 13);
          v26 = (unsigned __int64)&v28[v40];
          if ( (unsigned __int64)(v28 + 13) > v26 )
            v44 = 0;
          else
            v44 = v28[12];
          if ( (unsigned __int64)(v28 + 14) <= v26 )
            v32 = *(_BYTE *)v22;
          LOBYTE(v26) = 1;
        }
        v31 = v44;
      }
      if ( (_BYTE)v26 )
      {
        LOBYTE(v5) = v31;
        v41 = v32;
      }
      else
      {
LABEL_92:
        v30 = 0;
        v41 = 0;
      }
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v22, v26, &v49, a2, v43, v38, v27, v30, v5, v41, a2);
    }
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
