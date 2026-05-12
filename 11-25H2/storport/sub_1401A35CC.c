/*
 * XREFs of sub_1401A35CC @ 0x1401A35CC
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401A35CC(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v7; // r13d
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r12
  char *v23; // r11
  unsigned int v24; // r14d
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  int v34; // [rsp+20h] [rbp-88h]
  char v35; // [rsp+60h] [rbp-48h]
  char v36; // [rsp+61h] [rbp-47h]
  unsigned int v37; // [rsp+64h] [rbp-44h]
  GUID v38; // [rsp+68h] [rbp-40h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = v2[1];
  v9 = *(_DWORD *)(v4 + 8);
  if ( v8 )
  {
    v10 = 0LL;
    if ( v8 != 1 )
      v7 = -1073741637;
  }
  else if ( v9 >= 8 )
  {
    if ( v9 >= 0xC )
    {
      memset_0(v2, 0, *(unsigned int *)(v4 + 8));
      *v2 = 12;
      v2[1] = 12;
      v2[2] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 1008LL);
      v10 = 12LL;
    }
    else
    {
      *v2 = 12;
      v10 = 8LL;
      v2[1] = 12;
    }
  }
  else
  {
    v7 = -1073741789;
    v10 = 0LL;
  }
  *(_QWORD *)(a2 + 56) = v10;
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v11 )
    goto LABEL_73;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_73;
    v34 = *(_DWORD *)(a2 + 48);
    v15 = &stru_140148B18;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        sub_140056AB0(v12, v13, &v38, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_73;
    v15 = &stru_140149FE8;
    v34 = *(_DWORD *)(a2 + 48);
LABEL_72:
    sub_140052F3C(v12, v15, &v38, a2, v34);
    goto LABEL_73;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_73;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v35 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_49;
    goto LABEL_73;
  }
  v23 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_73;
  v24 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_46;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v25 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v25 )
        break;
    }
LABEL_40:
    if ( ++v24 >= v37 )
      goto LABEL_46;
  }
  v26 = (unsigned int)v12;
  v27 = *(_DWORD *)(v12 + v16) - 64;
  if ( v27 )
  {
    v12 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v16 + 12) )
            v23 = (char *)(v26 + v16 + 32);
          v18 = *(_BYTE **)(v26 + v16 + 24);
          goto LABEL_45;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    goto LABEL_39;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_39:
    if ( v36 )
      goto LABEL_46;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_45:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_46:
  if ( v23 )
  {
    v28 = *v23;
    v21 = 0;
LABEL_49:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_68;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v35 = 0;
          else
            v35 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v35;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v3) = v21;
        v32 = v22;
      }
      else
      {
LABEL_68:
        v20 = 0;
        v32 = 0;
      }
      sub_140052E64(v12, v16, &v38, a2, *(_DWORD *)(a2 + 48), v29, v17, v20, v3, v32, a2);
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
