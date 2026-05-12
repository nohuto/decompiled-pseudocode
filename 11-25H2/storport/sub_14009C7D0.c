/*
 * XREFs of sub_14009C7D0 @ 0x14009C7D0
 * Callers:
 *     sub_1401819C8 @ 0x1401819C8 (sub_1401819C8.c)
 * Callees:
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140089BB4 @ 0x140089BB4 (sub_140089BB4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

NTSTATUS __fastcall sub_14009C7D0(__int64 a1, __int64 a2)
{
  int *v2; // r15
  int v3; // edi
  __int64 v4; // rax
  unsigned int *v7; // r13
  int v8; // ecx
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  int v11; // esi
  char v12; // r12
  unsigned int v13; // eax
  _DWORD *v14; // rbx
  __int64 v15; // rax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // bl
  char v28; // r12
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  char v32; // r13
  char *v33; // rbx
  int v34; // eax
  unsigned int v35; // r8d
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  char v39; // cl
  char v40; // r8
  _BYTE *v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // r8
  char v44; // al
  __int64 v45; // [rsp+20h] [rbp-49h]
  __int64 v46; // [rsp+28h] [rbp-41h]
  __int64 v47; // [rsp+30h] [rbp-39h]
  char v48; // [rsp+60h] [rbp-9h] BYREF
  char v49[3]; // [rsp+61h] [rbp-8h] BYREF
  int v50; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  __int64 v52; // [rsp+70h] [rbp+7h]
  GUID v53; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(int **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v52 = a1;
  v7 = 0LL;
  P = 0LL;
  v8 = v2[1];
  v9 = *(_DWORD *)(v4 + 16);
  v10 = *(unsigned int *)(v4 + 8);
  v50 = 0;
  v49[0] = 0;
  v48 = 0;
  if ( !v8 )
  {
    if ( *v2 == 50 )
    {
      v12 = 0;
      v13 = 72;
    }
    else
    {
      if ( *v2 != 68 )
        goto LABEL_7;
      v12 = 1;
      v13 = 80;
    }
    if ( v9 >= v13 )
    {
      v14 = v2 + 2;
      if ( v12 )
      {
        if ( *v14 != 1 || v2[3] != 72 )
          goto LABEL_7;
        v14 = v2 + 4;
      }
      if ( *v14 && v14[1] && ((v15 = (unsigned int)v14[4], !(_DWORD)v15) || (unsigned int)v15 >= 0x40 && v14[5]) )
      {
        if ( (unsigned int)v10 >= 0x48 )
        {
          if ( v10 < (unsigned __int64)(unsigned int)v14[5] + v15 + 8 )
            goto LABEL_7;
          v11 = sub_140089BB4(*(_QWORD *)(a1 + 8), a2, (__int64 *)&P, (unsigned int *)&v50, v49, &v48);
          if ( v11 < 0 )
          {
            v7 = (unsigned int *)P;
          }
          else
          {
            if ( v48 )
            {
              ExFreePoolWithTag(P, 0x72536152u);
              ++*(_BYTE *)(a2 + 67);
              *(_QWORD *)(a2 + 184) += 72LL;
              return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(v52 + 24) + 8LL), (PIRP)a2);
            }
            v7 = (unsigned int *)P;
            v11 = sub_1400153FC(v52, a2, (__int64)P, v50, 0LL, v49[0], 64);
            if ( v11 >= 0 )
            {
              if ( v12 )
              {
                memmove(v2 + 2, v14, 0x40uLL);
                v17 = 1;
              }
              else
              {
                v17 = 72;
              }
              *v2 = v17;
              v18 = v2[7];
              v2[1] = 72;
              v2[8] = v7[15];
              if ( v18 )
              {
                if ( v18 >= v7[14] )
                  v18 = v7[14];
                v19 = v18;
                memmove((char *)v2 + (unsigned int)v2[6] + 8, (char *)v7 + v7[13] + 36, v18);
                v20 = v2[6] + 8;
                v2[7] = v19;
                *(_QWORD *)(a2 + 56) = v19 + v20;
              }
              else
              {
                *(_QWORD *)(a2 + 56) = 72LL;
              }
            }
          }
        }
        else
        {
          if ( (unsigned int)v10 < 8 )
          {
            v11 = -1073741789;
            goto LABEL_42;
          }
          v11 = 0;
          *v2 = v12 != 0 ? 1 : 72;
          v2[1] = 72;
          *(_QWORD *)(a2 + 56) = 8LL;
        }
      }
      else
      {
        v11 = -1073741585;
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0x72536152u);
      if ( v11 >= 0 )
        goto LABEL_43;
      goto LABEL_42;
    }
LABEL_7:
    v11 = -1073741585;
    goto LABEL_42;
  }
  if ( v8 != 1 )
  {
    v11 = -1073741637;
LABEL_42:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_43;
  }
  v11 = 0;
LABEL_43:
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v21 )
    goto LABEL_109;
  v53 = 0LL;
  IoGetActivityIdIrp(a2, &v53);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_109;
    v25 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_108;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_109;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v3 = *v24;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v3;
        sub_140056AB0(v22, v23, &v53, a2, v45, v46);
      }
      goto LABEL_109;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_109;
    v25 = &stru_140149FE8;
LABEL_108:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v22, v25, &v53, a2, v45);
    goto LABEL_109;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_109;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0;
  v48 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v26 + 72);
    v29 = *(_BYTE **)(v26 + 32);
    v30 = *(_BYTE *)(v26 + 11);
    v28 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_85;
    goto LABEL_109;
  }
  v33 = 0LL;
  v49[0] = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_109;
  v34 = *(_DWORD *)(v26 + 56);
  v22 = 0LL;
  LODWORD(P) = 0;
  v50 = v34;
  if ( !v34 )
    goto LABEL_82;
  v35 = v50;
  v36 = (unsigned int *)(v26 + 120);
  v52 = v26 + 120;
  while ( 1 )
  {
    v37 = *v36;
    if ( (unsigned int)v37 >= 0x80 )
    {
      v38 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v37 < (unsigned int)v38 )
        break;
    }
LABEL_76:
    v22 = (unsigned int)(v22 + 1);
    v36 = (unsigned int *)(v52 + 4);
    LODWORD(P) = v22;
    v52 += 4LL;
    if ( (unsigned int)v22 >= v35 )
      goto LABEL_82;
  }
  if ( *(_DWORD *)(v37 + v26) != 64 )
  {
    v22 = (unsigned int)(*(_DWORD *)(v37 + v26) - 65);
    if ( *(_DWORD *)(v37 + v26) == 65 )
    {
      v22 = v37 + 56;
      if ( v37 + 56 <= v38 )
      {
        v49[0] = 1;
        if ( *(_BYTE *)(v37 + v26 + 10) )
          v33 = (char *)(v37 + v26 + 24);
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
          v33 = (char *)(v37 + v26 + 32);
        v29 = *(_BYTE **)(v37 + v26 + 24);
        goto LABEL_81;
      }
    }
    goto LABEL_74;
  }
  v22 = v37 + 40;
  if ( v37 + 40 > v38 )
  {
LABEL_74:
    if ( v49[0] )
      goto LABEL_82;
    LODWORD(v22) = (_DWORD)P;
    v35 = v50;
    goto LABEL_76;
  }
  if ( *(_BYTE *)(v37 + v26 + 10) )
    v33 = (char *)(v37 + v26 + 24);
  v29 = *(_BYTE **)(v37 + v26 + 16);
LABEL_81:
  v30 = *(_BYTE *)(v37 + v26 + 9);
  v28 = *(_BYTE *)(v37 + v26 + 8);
LABEL_82:
  if ( v33 )
  {
    v39 = *v33;
    v27 = 0;
LABEL_85:
    LOBYTE(v22) = v39 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v29 || !v30 )
        goto LABEL_104;
      v40 = 0;
      v22 = (unsigned __int64)&v29[v30];
      v41 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v41 <= v22 )
        {
          v40 = 1;
          v27 = v29[2];
          v31 = v29[1] & 0xF;
          v32 = v29[3];
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
          v43 = (unsigned __int64)&v29[v42];
          if ( (unsigned __int64)(v29 + 13) > v43 )
            v48 = 0;
          else
            v48 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v43 )
            v32 = *(_BYTE *)v22;
          v40 = 1;
        }
        v27 = v48;
      }
      if ( v40 )
      {
        LOBYTE(v3) = v27;
        v44 = v32;
      }
      else
      {
LABEL_104:
        v31 = 0;
        v44 = 0;
      }
      LOBYTE(v47) = v28;
      LOBYTE(v46) = *(_BYTE *)(v26 + 3);
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v22, v26, &v53, a2, v45, v46, v47, v31, v3, v44, a2);
    }
  }
LABEL_109:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
