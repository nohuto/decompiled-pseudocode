/*
 * XREFs of sub_14005D120 @ 0x14005D120
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140089880 @ 0x140089880 (sub_140089880.c)
 *     sub_14008A858 @ 0x14008A858 (sub_14008A858.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14005D120(CMSPAddress *a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _DWORD *v5; // r13
  PVOID v7; // rsi
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r15
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  ULONG v26; // eax
  unsigned int v27; // r8d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v37; // [rsp+20h] [rbp-49h]
  __int64 v38; // [rsp+28h] [rbp-41h]
  __int64 v39; // [rsp+30h] [rbp-39h]
  __int64 v40; // [rsp+38h] [rbp-31h]
  char v41; // [rsp+60h] [rbp-9h]
  char v42; // [rsp+61h] [rbp-8h]
  ULONG v43; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp+7h]
  GUID v46; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  P = 0LL;
  v43 = 0;
  if ( *((_QWORD *)a1 + 76) && *((_QWORD *)a1 + 77) )
  {
    if ( *(_DWORD *)(v2 + 16) < 8u || *(_DWORD *)(v2 + 8) < 8u )
    {
      v9 = -1073741820;
    }
    else
    {
      v8 = sub_140089880(a1, a2, &P, &v43);
      v7 = P;
      v9 = v8;
      if ( !v8 )
      {
        if ( P )
        {
          v9 = sub_140016234(a1, (PIRP)a2, (unsigned int *)P, v43, 0LL, 0, 64, 0);
          if ( v9 >= 0 )
          {
            memset_0(v5, 0, *(unsigned int *)(v2 + 8));
            v10 = sub_14008A858(a1, a2, v7);
            v11 = *(_DWORD *)(v2 + 8);
            v9 = v10;
            if ( v11 >= v5[1] )
              v11 = v5[1];
            v12 = v11;
            goto LABEL_15;
          }
        }
        else
        {
          v9 = -1073741801;
        }
      }
    }
  }
  else
  {
    v9 = -1073741823;
  }
  v12 = 0LL;
LABEL_15:
  *(_QWORD *)(a2 + 56) = v12;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v13 )
    goto LABEL_83;
  v46 = 0LL;
  IoGetActivityIdIrp(a2, &v46);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        LODWORD(v37) = v3;
        sub_140056AB0(v14, v15, &v46, a2, v37, v38);
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140149FE8;
LABEL_82:
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v14, v17, &v46, a2, v37);
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v41 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_59;
    goto LABEL_83;
  }
  v25 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_83;
  v26 = *(_DWORD *)(v18 + 56);
  v14 = 0LL;
  LODWORD(P) = 0;
  v43 = v26;
  if ( !v26 )
    goto LABEL_56;
  v27 = v43;
  v28 = (unsigned int *)(v18 + 120);
  v45 = v18 + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_50:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v45 + 4);
    LODWORD(P) = v14;
    v45 += 4LL;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v29 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + v18) - 65);
    if ( *(_DWORD *)(v29 + v18) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v42 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v25 = (char *)(v29 + v18 + 24);
        v19 = *(_BYTE *)(v29 + v18 + 8);
        v20 = *(_BYTE **)(v29 + v18 + 16);
        v21 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v18) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v18 + 12) )
          v25 = (char *)(v29 + v18 + 32);
        v20 = *(_BYTE **)(v29 + v18 + 24);
        goto LABEL_55;
      }
    }
    goto LABEL_48;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_48:
    if ( v42 )
      goto LABEL_56;
    LODWORD(v14) = (_DWORD)P;
    v27 = v43;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v25 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_55:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_56:
  if ( v25 )
  {
    v31 = *v25;
    v23 = 0;
LABEL_59:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v18 + 3);
      if ( v32 == 1 || !v20 || !v21 )
        goto LABEL_78;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v33 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v34 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v34 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v34];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v41 = 0;
          else
            v41 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v41;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v35 = v24;
      }
      else
      {
LABEL_78:
        v22 = 0;
        v35 = 0;
      }
      LOBYTE(v40) = v22;
      LOBYTE(v39) = v19;
      LOBYTE(v38) = v32;
      LODWORD(v37) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v14, v18, &v46, a2, v37, v38, v39, v40, v3, v35, a2);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v9;
}
