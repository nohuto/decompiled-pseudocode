/*
 * XREFs of sub_14005AC44 @ 0x14005AC44
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_14001467C @ 0x14001467C (sub_14001467C.c)
 *     sub_140014A00 @ 0x140014A00 (sub_140014A00.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140089670 @ 0x140089670 (sub_140089670.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005AC44(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // rsi
  int v6; // r15d
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r12
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r13
  char *v19; // r11
  ULONG v20; // eax
  unsigned int v21; // r8d
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  __int64 v32; // [rsp+20h] [rbp-49h]
  __int64 v33; // [rsp+28h] [rbp-41h]
  __int64 v34; // [rsp+30h] [rbp-39h]
  __int64 v35; // [rsp+38h] [rbp-31h]
  char v36; // [rsp+60h] [rbp-9h]
  char v37; // [rsp+61h] [rbp-8h]
  ULONG v38; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  __int64 v40; // [rsp+70h] [rbp+7h]
  GUID v41; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v5 = 0LL;
  P = 0LL;
  v38 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
  {
    v6 = -1073741823;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
  {
    if ( !*(_DWORD *)(a1 + 5364) )
    {
      sub_140014A00(*(_QWORD *)(a1 + 8), a2, &P, &v38);
      v5 = P;
      if ( !P )
      {
LABEL_7:
        v6 = -1073741801;
        goto LABEL_15;
      }
      v6 = sub_14001467C(a1, (IRP *)a2, (__int64)P);
      if ( v6 < 0 )
      {
LABEL_13:
        if ( v5 )
          ExFreePoolWithTag(v5, 0x72536152u);
        goto LABEL_15;
      }
      ExFreePoolWithTag(v5, 0x72536152u);
      P = 0LL;
      v38 = 0;
    }
    sub_140089670(*(_QWORD *)(a1 + 8), a2, &P, &v38);
    v5 = P;
    if ( !P )
      goto LABEL_7;
    v6 = sub_140016234(
           (CMSPAddress *)a1,
           (PIRP)a2,
           (unsigned int *)P,
           v38,
           (__int64 (__fastcall *)(_QWORD))sub_1400399C0,
           0,
           128,
           *(_DWORD *)(a1 + 4124));
    goto LABEL_13;
  }
  v6 = -1073741820;
LABEL_15:
  v7 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v7 )
    goto LABEL_81;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_81;
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(v32) = v2;
        sub_140056AB0(v8, v9, &v41, a2, v32, v33);
      }
      goto LABEL_81;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_81;
    v11 = (const EVENT_DESCRIPTOR *)&unk_140149FE8;
LABEL_80:
    LODWORD(v32) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v8, v11, &v41, a2, v32);
    goto LABEL_81;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_81;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v36 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v19 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_81;
  v20 = *(_DWORD *)(v12 + 56);
  v8 = 0LL;
  LODWORD(P) = 0;
  v38 = v20;
  if ( !v20 )
    goto LABEL_54;
  v21 = v38;
  v22 = (unsigned int *)(v12 + 120);
  v40 = v12 + 120;
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_48:
    v8 = (unsigned int)(v8 + 1);
    v22 = (unsigned int *)(v40 + 4);
    LODWORD(P) = v8;
    v40 += 4LL;
    if ( (unsigned int)v8 >= v21 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v23 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v23 + v12) - 65);
    if ( *(_DWORD *)(v23 + v12) == 65 )
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v19 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v12) == 66 )
    {
      v8 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v12 + 12) )
          v19 = (char *)(v23 + v12 + 32);
        v14 = *(_BYTE **)(v23 + v12 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_46:
    if ( v37 )
      goto LABEL_54;
    LODWORD(v8) = (_DWORD)P;
    v21 = v38;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v19 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_53:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_54:
  if ( v19 )
  {
    v25 = *v19;
    v17 = 0;
LABEL_57:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
        goto LABEL_76;
      v26 = 0;
      v8 = (unsigned __int64)&v14[v15];
      v27 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v26 = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v28 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v28 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v29 = (unsigned __int64)&v14[v28];
          if ( (unsigned __int64)(v14 + 13) > v29 )
            v36 = 0;
          else
            v36 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v29 )
            v18 = *(_BYTE *)v8;
          v26 = 1;
        }
        v17 = v36;
      }
      if ( v26 )
      {
        LOBYTE(v2) = v17;
        v30 = v18;
      }
      else
      {
LABEL_76:
        v16 = 0;
        v30 = 0;
      }
      LOBYTE(v35) = v16;
      LOBYTE(v34) = v13;
      LOBYTE(v33) = *(_BYTE *)(v12 + 3);
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v8, v12, &v41, a2, v32, v33, v34, v35, v2, v30, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
