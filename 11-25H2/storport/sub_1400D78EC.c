/*
 * XREFs of sub_1400D78EC @ 0x1400D78EC
 * Callers:
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400D78EC(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rcx
  __int64 v6; // r8
  int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // r9
  __int64 v10; // rax
  const void *v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r11
  char v21; // si
  char v22; // r12
  int v23; // eax
  char *v24; // rsi
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  const EVENT_DESCRIPTOR *v28; // rdx
  int *v29; // rax
  unsigned int *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  char v33; // cl
  char v34; // r8
  _BYTE *v35; // rax
  unsigned int v36; // eax
  char v37; // al
  int v39; // [rsp+20h] [rbp-49h]
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  char v42; // [rsp+61h] [rbp-8h]
  int v43; // [rsp+64h] [rbp-5h]
  int v44; // [rsp+68h] [rbp-1h]
  int v45; // [rsp+68h] [rbp-1h]
  unsigned int v46; // [rsp+6Ch] [rbp+3h]
  unsigned int v47; // [rsp+6Ch] [rbp+3h]
  GUID v48; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  if ( !v4 || (v6 = *(_QWORD *)(a2 + 184), *(_DWORD *)(v6 + 16) < 8u) || *v4 != 1 )
  {
    v12 = byte_140168DAA == 0;
    v8 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v12 )
      goto LABEL_117;
    v48 = 0LL;
    IoGetActivityIdIrp(a2, &v48);
    v14 = *(unsigned __int8 **)(a2 + 184);
    if ( *v14 != 14 )
    {
      v15 = *v14 - 15;
      if ( *v14 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_117;
        v16 = *((_QWORD *)v14 + 1);
        v17 = 0;
        v18 = 0LL;
        v40 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v23 == 40 )
        {
          v24 = 0LL;
          v42 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_117;
          v13 = 0LL;
          v45 = 0;
          v47 = *(_DWORD *)(v16 + 56);
          if ( !v47 )
            goto LABEL_89;
          v30 = (unsigned int *)(v16 + 120);
          while ( 1 )
          {
            v31 = *v30;
            if ( (unsigned int)v31 >= 0x80 )
            {
              v32 = *(unsigned int *)(v16 + 16);
              if ( (unsigned int)v31 < (unsigned int)v32 )
              {
                if ( *(_DWORD *)(v31 + v16) == 64 )
                {
                  v13 = v31 + 40;
                  if ( v31 + 40 <= v32 )
                  {
                    if ( *(_BYTE *)(v31 + v16 + 10) )
                      v24 = (char *)(v31 + v16 + 24);
                    v18 = *(_BYTE **)(v31 + v16 + 16);
                    goto LABEL_87;
                  }
                }
                else
                {
                  v13 = (unsigned int)(*(_DWORD *)(v31 + v16) - 65);
                  if ( *(_DWORD *)(v31 + v16) == 65 )
                  {
                    v13 = v31 + 56;
                    if ( v31 + 56 <= v32 )
                    {
                      v42 = 1;
                      if ( *(_BYTE *)(v31 + v16 + 10) )
                        v24 = (char *)(v31 + v16 + 24);
                      v17 = *(_BYTE *)(v31 + v16 + 8);
                      v18 = *(_BYTE **)(v31 + v16 + 16);
                      v19 = *(_BYTE *)(v31 + v16 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v31 + v16) == 66 )
                  {
                    v13 = v31 + 40;
                    if ( v31 + 40 <= v32 )
                    {
                      if ( *(_DWORD *)(v31 + v16 + 12) )
                        v24 = (char *)(v31 + v16 + 32);
                      v18 = *(_BYTE **)(v31 + v16 + 24);
LABEL_87:
                      v19 = *(_BYTE *)(v31 + v16 + 9);
                      v17 = *(_BYTE *)(v31 + v16 + 8);
LABEL_88:
                      v8 = -1073741808;
                      goto LABEL_89;
                    }
                  }
                }
                if ( v42 )
                  goto LABEL_88;
                LODWORD(v13) = v45;
              }
            }
            v13 = (unsigned int)(v13 + 1);
            ++v30;
            v45 = v13;
            if ( (unsigned int)v13 >= v47 )
              goto LABEL_88;
          }
        }
LABEL_91:
        v33 = *(_BYTE *)(v16 + 72);
        v18 = *(_BYTE **)(v16 + 32);
        v19 = *(_BYTE *)(v16 + 11);
        v17 = *(_BYTE *)(v16 + 4);
        if ( !v23 )
          goto LABEL_92;
        goto LABEL_117;
      }
      goto LABEL_54;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_117;
    v39 = *(_DWORD *)(a2 + 48);
LABEL_115:
    v28 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_116;
  }
  v7 = v4[1];
  if ( !v7 )
  {
    v43 = 0;
    v8 = 0;
    v9 = 0LL;
    if ( *(_DWORD *)(v6 + 8) >= 0x1000u )
    {
      v10 = *(_QWORD *)(a1 + 1136);
      if ( v10 )
      {
        v11 = *(const void **)(v10 + 592);
        if ( v11 )
        {
          memmove(v4, v11, 0x1000uLL);
          v9 = 4096LL;
LABEL_15:
          *(_QWORD *)(a2 + 56) = v9;
          goto LABEL_16;
        }
      }
      v8 = -1073741637;
    }
    else
    {
      v8 = -1073741789;
    }
    v43 = v8;
    goto LABEL_15;
  }
  if ( v7 == 1 )
  {
    v8 = 0;
    v43 = 0;
  }
  else
  {
    v8 = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    v43 = -1073741808;
  }
LABEL_16:
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_117;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v14 = *(unsigned __int8 **)(a2 + 184);
  if ( *v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_117;
    v39 = *(_DWORD *)(a2 + 48);
    goto LABEL_115;
  }
  v15 = *v14 - 15;
  if ( *v14 != 15 )
  {
LABEL_54:
    if ( v15 != 12 )
      goto LABEL_117;
    if ( v14[1] == 7 && !*((_DWORD *)v14 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v3 = *v29;
        sub_140056AB0(v13, (__int64)v14, &v48, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_117;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_117;
    v28 = &stru_140149FE8;
    v39 = *(_DWORD *)(a2 + 48);
LABEL_116:
    sub_140052F3C(v13, v28, &v48, a2, v39);
    goto LABEL_117;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_117;
  v16 = *((_QWORD *)v14 + 1);
  v17 = 0;
  v18 = 0LL;
  v40 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = *(unsigned __int8 *)(v16 + 2);
  if ( (_BYTE)v23 != 40 )
    goto LABEL_91;
  v24 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_117;
  v13 = 0LL;
  v44 = 0;
  v46 = *(_DWORD *)(v16 + 56);
  if ( !v46 )
    goto LABEL_89;
  v25 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_42:
    v13 = (unsigned int)(v13 + 1);
    ++v25;
    v44 = v13;
    if ( (unsigned int)v13 >= v46 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v26 + v16) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v26 + v16) - 65);
    if ( *(_DWORD *)(v26 + v16) == 65 )
    {
      v13 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v24 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v16) == 66 )
    {
      v13 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v16 + 12) )
          v24 = (char *)(v26 + v16 + 32);
        v18 = *(_BYTE **)(v26 + v16 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_40;
  }
  v13 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_40:
    if ( v41 )
      goto LABEL_48;
    LODWORD(v13) = v44;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v24 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_47:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_48:
  v8 = v43;
LABEL_89:
  if ( v24 )
  {
    v33 = *v24;
    v21 = 0;
LABEL_92:
    LOBYTE(v13) = v33 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(v16 + 3);
      if ( v34 == 1 || !v18 || !v19 )
        goto LABEL_111;
      LOBYTE(v16) = 0;
      v13 = (unsigned __int64)&v18[v19];
      v35 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v35 <= v13 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v35 <= v13 )
        {
          v20 = v18[2] & 0xF;
          v36 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v36 = (unsigned __int8)v18[7] + 8;
          v13 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v36];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v40 = 0;
          else
            v40 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v13;
          LOBYTE(v16) = 1;
        }
        v21 = v40;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v3) = v21;
        v37 = v22;
      }
      else
      {
LABEL_111:
        v20 = 0;
        v37 = 0;
      }
      sub_140052E64(v13, v16, &v48, a2, *(_DWORD *)(a2 + 48), v34, v17, v20, v3, v37, a2);
    }
  }
LABEL_117:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
