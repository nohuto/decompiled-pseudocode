/*
 * XREFs of sub_140178FA0 @ 0x140178FA0
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_1400BC2F8 @ 0x1400BC2F8 (sub_1400BC2F8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140178FA0(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r13d
  _DWORD *v6; // rsi
  _DWORD *v7; // rdx
  unsigned int v8; // r15d
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  _DWORD *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r15
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char v27; // r11
  char v28; // si
  char v29; // r12
  char *v30; // rsi
  unsigned int *v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-59h]
  __int64 v41; // [rsp+28h] [rbp-51h]
  char v42; // [rsp+60h] [rbp-19h]
  char v43; // [rsp+61h] [rbp-18h]
  int v44; // [rsp+64h] [rbp-15h]
  int v45; // [rsp+68h] [rbp-11h]
  unsigned int v46; // [rsp+6Ch] [rbp-Dh]
  GUID v47; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  v44 = sub_140018DDC(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
  v5 = v44;
  if ( v44 >= 0 )
  {
    v6 = *(_DWORD **)(a2 + 56);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 936) = v6[2];
      *(_DWORD *)(a1 + 940) = v6[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x200) != 0 && !(unsigned __int8)sub_1400BC2F8() )
      {
        v7 = v6 + 8;
        v8 = 0;
        v9 = v6 + 8;
        if ( v6[7] )
        {
          while ( 1 )
          {
            v10 = 0;
            v11 = v7[1];
            *(_WORD *)v9 = *(_WORD *)v7;
            *((_WORD *)v9 + 1) = *((_WORD *)v7 + 1);
            if ( v11 )
              break;
LABEL_13:
            v9[1] = v10;
            if ( v11 )
              v15 = &v7[8 * v11 - 8];
            else
              v15 = v7;
            v7 = v15 + 10;
            if ( v10 )
              v16 = &v9[8 * v10 - 8];
            else
              v16 = v9;
            ++v8;
            v9 = v16 + 10;
            if ( v8 >= v6[7] )
              goto LABEL_20;
          }
          v12 = v7 + 2;
          v13 = v11;
          while ( 1 )
          {
            if ( *((_BYTE *)v12 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v12 & 8) == 0 )
              break;
LABEL_12:
            v12 += 8;
            if ( !--v13 )
              goto LABEL_13;
          }
          *((_BYTE *)v12 + 1) = 0;
LABEL_11:
          v14 = 8LL * v10++;
          *(_OWORD *)&v9[v14 + 2] = *(_OWORD *)v12;
          *(_OWORD *)&v9[v14 + 6] = *((_OWORD *)v12 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x100) != 0 )
      {
        if ( sub_140020090(a1 + 376, 13) )
        {
          v44 = sub_1400296E0(a1 + 376);
          v5 = v44;
          if ( v44 < 0 )
          {
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 2) != 0
              && BYTE1(off_140168120->Timer) >= 3u )
            {
              sub_140067FD4((__int64)off_140168120->AttachedDevice, 0x1Cu, (__int64)&unk_14014A2D8, a1, v44);
            }
            v5 = 0;
            v44 = 0;
          }
        }
      }
    }
  }
  if ( byte_140168DAA )
  {
    v47 = 0LL;
    IoGetActivityIdIrp(a2, &v47);
    if ( (byte_1401694F2 & 0x20) != 0 )
    {
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      sub_140052F3C(v17, &stru_140149FE8, &v47, a2, v40);
    }
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x1Du, (__int64)&unk_14014A2D8, a1, a2, v5);
  }
  v18 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v18 )
    goto LABEL_102;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_102;
    v22 = &stru_140148B18;
    goto LABEL_101;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_102;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v4 = *v21;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v4;
        sub_140056AB0(v19, v20, &v47, a2, v40, v41);
      }
      goto LABEL_102;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_102;
    v22 = &stru_140149FE8;
LABEL_101:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v19, v22, &v47, a2, v40);
    goto LABEL_102;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_102;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0LL;
  v42 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v23 + 72);
    v25 = *(_BYTE **)(v23 + 32);
    v26 = *(_BYTE *)(v23 + 11);
    v24 = *(_BYTE *)(v23 + 4);
    if ( !*(_BYTE *)(v23 + 2) )
      goto LABEL_78;
    goto LABEL_102;
  }
  v30 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(v23 + 20) )
    goto LABEL_102;
  v19 = 0LL;
  v45 = 0;
  v46 = *(_DWORD *)(v23 + 56);
  if ( !v46 )
    goto LABEL_75;
  v31 = (unsigned int *)(v23 + 120);
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_68:
    v19 = (unsigned int)(v19 + 1);
    ++v31;
    v45 = v19;
    if ( (unsigned int)v19 >= v46 )
      goto LABEL_74;
  }
  if ( *(_DWORD *)(v32 + v23) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v32 + v23) - 65);
    if ( *(_DWORD *)(v32 + v23) == 65 )
    {
      v19 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v43 = 1;
        if ( *(_BYTE *)(v32 + v23 + 10) )
          v30 = (char *)(v32 + v23 + 24);
        v24 = *(_BYTE *)(v32 + v23 + 8);
        v25 = *(_BYTE **)(v32 + v23 + 16);
        v26 = *(_BYTE *)(v32 + v23 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v23) == 66 )
    {
      v19 = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v23 + 12) )
          v30 = (char *)(v32 + v23 + 32);
        v25 = *(_BYTE **)(v32 + v23 + 24);
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v19 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_66:
    if ( v43 )
      goto LABEL_74;
    LODWORD(v19) = v45;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v32 + v23 + 10) )
    v30 = (char *)(v32 + v23 + 24);
  v25 = *(_BYTE **)(v32 + v23 + 16);
LABEL_73:
  v26 = *(_BYTE *)(v32 + v23 + 9);
  v24 = *(_BYTE *)(v32 + v23 + 8);
LABEL_74:
  v5 = v44;
LABEL_75:
  if ( v30 )
  {
    v34 = *v30;
    v28 = 0;
LABEL_78:
    LOBYTE(v19) = v34 - 8;
    if ( (v19 & 0x5D) == 0 )
    {
      v35 = *(_BYTE *)(v23 + 3);
      if ( v35 == 1 || !v25 || !v26 )
        goto LABEL_97;
      LOBYTE(v23) = 0;
      v19 = (unsigned __int64)&v25[v26];
      v36 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v36 <= v19 )
        {
          LOBYTE(v23) = 1;
          v28 = v25[2];
          v27 = v25[1] & 0xF;
          v29 = v25[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v36 <= v19 )
        {
          v27 = v25[2] & 0xF;
          v37 = v26;
          if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
            v37 = (unsigned __int8)v25[7] + 8;
          v19 = (unsigned __int64)(v25 + 13);
          v23 = (unsigned __int64)&v25[v37];
          if ( (unsigned __int64)(v25 + 13) > v23 )
            v42 = 0;
          else
            v42 = v25[12];
          if ( (unsigned __int64)(v25 + 14) <= v23 )
            v29 = *(_BYTE *)v19;
          LOBYTE(v23) = 1;
        }
        v28 = v42;
      }
      if ( (_BYTE)v23 )
      {
        LOBYTE(v4) = v28;
        v38 = v29;
      }
      else
      {
LABEL_97:
        v27 = 0;
        v38 = 0;
      }
      LOBYTE(v41) = v35;
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v19, v23, &v47, a2, v40, v41, v24, v27, v4, v38, a2);
    }
  }
LABEL_102:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
