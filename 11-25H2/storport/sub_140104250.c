/*
 * XREFs of sub_140104250 @ 0x140104250
 * Callers:
 *     sub_1401011F4 @ 0x1401011F4 (sub_1401011F4.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140104250(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  _DWORD *v4; // rsi
  size_t v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  int v34; // [rsp+20h] [rbp-A8h]
  char v35; // [rsp+60h] [rbp-68h]
  char v36; // [rsp+61h] [rbp-67h]
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int v38; // [rsp+68h] [rbp-60h]
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( a3 )
  {
    *a3 = 1;
    if ( *(_BYTE *)(a2 + 64) )
    {
      v9 = -1073741790;
    }
    else
    {
      if ( (unsigned int)v8 >= 8 )
      {
        memset_0(v4, 0, v8);
        *v4 = 40;
        v4[1] = 40;
        if ( (unsigned int)v8 >= 0x28 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
          if ( v11 && (*(_DWORD *)(v11 + 24) & 0x20000) != 0 )
          {
            v9 = -1073741637;
            goto LABEL_3;
          }
          *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
          *((_QWORD *)v4 + 2) = sub_1400FAFF0;
          *((_QWORD *)v4 + 3) = sub_14010F090;
          v10 = 40LL;
          *a3 = 0;
        }
        else
        {
          v10 = 8LL;
        }
        v9 = 0;
        goto LABEL_15;
      }
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_3:
  v10 = 0LL;
LABEL_15:
  v12 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v10;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v12 )
    goto LABEL_81;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_81;
    v34 = *(_DWORD *)(a2 + 48);
    v16 = &stru_140148B18;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        sub_140056AB0(v13, v14, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_81;
    v16 = &stru_140149FE8;
    v34 = *(_DWORD *)(a2 + 48);
LABEL_80:
    sub_140052F3C(v13, v16, &v39, a2, v34);
    goto LABEL_81;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_81;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v35 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_81;
  v13 = 0LL;
  v37 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_54;
  v25 = (unsigned int *)(v17 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_48:
    v13 = (unsigned int)(v13 + 1);
    ++v25;
    v37 = v13;
    if ( (unsigned int)v13 >= v38 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v26 + v17) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v26 + v17) - 65);
    if ( *(_DWORD *)(v26 + v17) == 65 )
    {
      v13 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v17 + 10) )
          v24 = (char *)(v26 + v17 + 24);
        v18 = *(_BYTE *)(v26 + v17 + 8);
        v19 = *(_BYTE **)(v26 + v17 + 16);
        v20 = *(_BYTE *)(v26 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v17) == 66 )
    {
      v13 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v17 + 12) )
          v24 = (char *)(v26 + v17 + 32);
        v19 = *(_BYTE **)(v26 + v17 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v13 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_46:
    if ( v36 )
      goto LABEL_54;
    LODWORD(v13) = v37;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v26 + v17 + 10) )
    v24 = (char *)(v26 + v17 + 24);
  v19 = *(_BYTE **)(v26 + v17 + 16);
LABEL_53:
  v20 = *(_BYTE *)(v26 + v17 + 9);
  v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_54:
  if ( v24 )
  {
    v28 = *v24;
    v22 = 0;
LABEL_57:
    LOBYTE(v13) = v28 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v17 + 3);
      if ( v29 == 1 || !v19 || !v20 )
        goto LABEL_76;
      LOBYTE(v17) = 0;
      v13 = (unsigned __int64)&v19[v20];
      v30 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          LOBYTE(v17) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v31 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v31 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v17 = (unsigned __int64)&v19[v31];
          if ( (unsigned __int64)(v19 + 13) > v17 )
            v35 = 0;
          else
            v35 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v17 )
            v23 = *(_BYTE *)v13;
          LOBYTE(v17) = 1;
        }
        v22 = v35;
      }
      if ( (_BYTE)v17 )
      {
        LOBYTE(v3) = v22;
        v32 = v23;
      }
      else
      {
LABEL_76:
        v21 = 0;
        v32 = 0;
      }
      sub_140052E64(v13, v17, &v39, a2, *(_DWORD *)(a2 + 48), v29, v18, v21, v3, v32, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
