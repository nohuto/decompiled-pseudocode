/*
 * XREFs of sub_140063854 @ 0x140063854
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140188328 @ 0x140188328 (sub_140188328.c)
 *     sub_14018852C @ 0x14018852C (sub_14018852C.c)
 *     sub_140188720 @ 0x140188720 (sub_140188720.c)
 *     sub_140188988 @ 0x140188988 (sub_140188988.c)
 *     sub_140188B8C @ 0x140188B8C (sub_140188B8C.c)
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 *     sub_1401891B4 @ 0x1401891B4 (sub_1401891B4.c)
 *     sub_1401896FC @ 0x1401896FC (sub_1401896FC.c)
 */

__int64 __fastcall sub_140063854(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int *v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  unsigned __int8 *v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // rdx
  char v25; // r12
  _BYTE *v26; // r9
  unsigned __int8 v27; // r10
  char v28; // r11
  char v29; // r14
  char v30; // r13
  int v31; // eax
  char *v32; // r14
  unsigned int v33; // eax
  unsigned int v34; // r8d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  const EVENT_DESCRIPTOR *v38; // rdx
  int *v39; // rax
  int v40; // eax
  unsigned int v41; // r8d
  unsigned int *v42; // rax
  unsigned __int64 v43; // r15
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rax
  unsigned int v47; // eax
  char v48; // al
  char v50; // [rsp+60h] [rbp-19h]
  char v51; // [rsp+61h] [rbp-18h]
  char v52; // [rsp+61h] [rbp-18h]
  __int64 v53; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-9h]
  unsigned __int64 v55; // [rsp+78h] [rbp-1h]
  GUID v56; // [rsp+80h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v6 = *(unsigned int **)(a2 + 24);
  v7 = -1073741811;
  v53 = *(unsigned int *)(v4 + 8);
  if ( v6 )
  {
    if ( *(_DWORD *)(v4 + 16) >= 8u )
    {
      v8 = *v6;
      if ( *v6 <= 0x17 )
      {
        v9 = 8779792;
        if ( _bittest(&v9, v8) )
        {
          v10 = v6[1];
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              v7 = 0;
              goto LABEL_28;
            }
          }
          else
          {
            v11 = v8 - 4;
            if ( v11 )
            {
              v12 = v11 - 7;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    v15 = v14 - 1;
                    if ( v15 )
                    {
                      v16 = v15 - 1;
                      if ( v16 )
                      {
                        v17 = v16 - 1;
                        if ( v17 )
                        {
                          v18 = v17 - 2;
                          if ( v18 )
                          {
                            if ( v18 == 5 )
                            {
                              v7 = sub_140188988(a1, a2, &v53);
                              *(_QWORD *)(a2 + 56) = v53;
                              goto LABEL_28;
                            }
                            goto LABEL_27;
                          }
                          v19 = sub_140188B8C(a1, a2, &v53);
                        }
                        else
                        {
                          v19 = sub_1401891B4(a1, a2, &v53);
                        }
                      }
                      else
                      {
                        v19 = sub_140188328(a1, a2, &v53);
                      }
                    }
                    else
                    {
                      v19 = sub_140188720(a1, a2, &v53);
                    }
                  }
                  else
                  {
                    v19 = sub_140188EAC(a1, a2, &v53);
                  }
                }
                else
                {
                  v19 = sub_14018852C(a1, a2, &v53);
                }
              }
              else
              {
                v19 = sub_1401896FC(a1, a2, &v53);
              }
              v7 = v19;
              *(_QWORD *)(a2 + 56) = v53;
              goto LABEL_28;
            }
          }
          v7 = -1073741808;
LABEL_27:
          *(_QWORD *)(a2 + 56) = 0LL;
LABEL_28:
          v20 = byte_140168DAA == 0;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = v7;
          if ( v20 )
            goto LABEL_118;
          v56 = 0LL;
          IoGetActivityIdIrp(a2, &v56);
          v22 = *(unsigned __int8 **)(a2 + 184);
          if ( *v22 != 14 )
          {
            v23 = *v22 - 15;
            if ( *v22 == 15 )
            {
              if ( byte_1401694F1 >= 0 )
                goto LABEL_118;
              v24 = *((_QWORD *)v22 + 1);
              v25 = 0;
              v26 = 0LL;
              v50 = 0;
              v27 = 0;
              v28 = 0;
              v29 = 0;
              v30 = 0;
              v31 = *(unsigned __int8 *)(v24 + 2);
              if ( (_BYTE)v31 == 40 )
              {
                v32 = 0LL;
                v51 = 0;
                if ( !*(_DWORD *)(v24 + 20) )
                {
                  v33 = *(_DWORD *)(v24 + 56);
                  v21 = 0LL;
                  LODWORD(v53) = 0;
                  v54 = v33;
                  if ( v33 )
                  {
                    v34 = v54;
                    v35 = (unsigned int *)(v24 + 120);
                    v55 = v24 + 120;
                    while ( 1 )
                    {
                      v36 = *v35;
                      if ( (unsigned int)v36 >= 0x80 )
                      {
                        v37 = *(unsigned int *)(v24 + 16);
                        if ( (unsigned int)v36 < (unsigned int)v37 )
                        {
                          if ( *(_DWORD *)(v36 + v24) == 64 )
                          {
                            v21 = v36 + 40;
                            if ( v36 + 40 <= v37 )
                              goto LABEL_87;
                          }
                          else
                          {
                            v21 = (unsigned int)(*(_DWORD *)(v36 + v24) - 65);
                            if ( *(_DWORD *)(v36 + v24) == 65 )
                            {
                              v21 = v36 + 56;
                              if ( v36 + 56 <= v37 )
                              {
                                v51 = 1;
                                if ( *(_BYTE *)(v36 + v24 + 10) )
                                  v32 = (char *)(v36 + v24 + 24);
                                v25 = *(_BYTE *)(v36 + v24 + 8);
                                v26 = *(_BYTE **)(v36 + v24 + 16);
                                v27 = *(_BYTE *)(v36 + v24 + 9);
                              }
                            }
                            else if ( *(_DWORD *)(v36 + v24) == 66 )
                            {
                              v21 = v36 + 40;
                              if ( v36 + 40 <= v37 )
                                goto LABEL_42;
                            }
                          }
                          if ( v51 )
                            goto LABEL_91;
                          LODWORD(v21) = v53;
                          v34 = v54;
                        }
                      }
                      v21 = (unsigned int)(v21 + 1);
                      v35 = (unsigned int *)(v55 + 4);
                      LODWORD(v53) = v21;
                      v55 += 4LL;
                      if ( (unsigned int)v21 >= v34 )
                        goto LABEL_91;
                    }
                  }
                  goto LABEL_91;
                }
                goto LABEL_118;
              }
              goto LABEL_93;
            }
            goto LABEL_59;
          }
LABEL_115:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_118;
          v38 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
          goto LABEL_117;
        }
      }
    }
  }
  v20 = byte_140168DAA == 0;
  v7 = -1073741808;
  *(_DWORD *)(a2 + 48) = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v20 )
    goto LABEL_118;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v22 = *(unsigned __int8 **)(a2 + 184);
  if ( *v22 == 14 )
    goto LABEL_115;
  v23 = *v22 - 15;
  if ( *v22 != 15 )
  {
LABEL_59:
    if ( v23 != 12 )
      goto LABEL_118;
    if ( v22[1] == 7 && !*((_DWORD *)v22 + 2) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v39 = *(int **)(a2 + 56);
        if ( v39 )
          v5 = *v39;
        sub_140056AB0(v21, (__int64)v22, &v56, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_118;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_118;
    v38 = &stru_140149FE8;
LABEL_117:
    sub_140052F3C(v21, v38, &v56, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_118;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_118;
  v24 = *((_QWORD *)v22 + 1);
  v25 = 0;
  v26 = 0LL;
  v50 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = *(unsigned __int8 *)(v24 + 2);
  if ( (_BYTE)v31 != 40 )
  {
LABEL_93:
    v44 = *(_BYTE *)(v24 + 72);
    v26 = *(_BYTE **)(v24 + 32);
    v27 = *(_BYTE *)(v24 + 11);
    v25 = *(_BYTE *)(v24 + 4);
    if ( !v31 )
      goto LABEL_94;
    goto LABEL_118;
  }
  v32 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_118;
  v40 = *(_DWORD *)(v24 + 56);
  v21 = 0LL;
  v54 = 0;
  LODWORD(v53) = v40;
  if ( !v40 )
    goto LABEL_91;
  v41 = v53;
  v42 = (unsigned int *)(v24 + 120);
  v55 = v24 + 120;
  while ( 1 )
  {
    v36 = *v42;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v43 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v36 < (unsigned int)v43 )
        break;
    }
LABEL_85:
    v21 = (unsigned int)(v21 + 1);
    v42 = (unsigned int *)(v55 + 4);
    v54 = v21;
    v55 += 4LL;
    if ( (unsigned int)v21 >= v41 )
      goto LABEL_91;
  }
  if ( *(_DWORD *)(v36 + v24) != 64 )
  {
    v21 = (unsigned int)(*(_DWORD *)(v36 + v24) - 65);
    if ( *(_DWORD *)(v36 + v24) == 65 )
    {
      v21 = v36 + 56;
      if ( v36 + 56 <= v43 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v36 + v24 + 10) )
          v32 = (char *)(v36 + v24 + 24);
        v25 = *(_BYTE *)(v36 + v24 + 8);
        v26 = *(_BYTE **)(v36 + v24 + 16);
        v27 = *(_BYTE *)(v36 + v24 + 9);
      }
    }
    else if ( *(_DWORD *)(v36 + v24) == 66 )
    {
      v21 = v36 + 40;
      if ( v36 + 40 <= v43 )
      {
LABEL_42:
        if ( *(_DWORD *)(v36 + v24 + 12) )
          v32 = (char *)(v36 + v24 + 32);
        v26 = *(_BYTE **)(v36 + v24 + 24);
        goto LABEL_90;
      }
    }
    goto LABEL_83;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v43 )
  {
LABEL_83:
    if ( v52 )
      goto LABEL_91;
    LODWORD(v21) = v54;
    v41 = v53;
    goto LABEL_85;
  }
LABEL_87:
  if ( *(_BYTE *)(v36 + v24 + 10) )
    v32 = (char *)(v36 + v24 + 24);
  v26 = *(_BYTE **)(v36 + v24 + 16);
LABEL_90:
  v27 = *(_BYTE *)(v36 + v24 + 9);
  v25 = *(_BYTE *)(v36 + v24 + 8);
LABEL_91:
  if ( v32 )
  {
    v44 = *v32;
    v29 = 0;
LABEL_94:
    LOBYTE(v21) = v44 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      v45 = *(_BYTE *)(v24 + 3);
      if ( v45 == 1 || !v26 || !v27 )
        goto LABEL_113;
      LOBYTE(v24) = 0;
      v21 = (unsigned __int64)&v26[v27];
      v46 = v26 + 8;
      if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v46 <= v21 )
        {
          LOBYTE(v24) = 1;
          v29 = v26[2];
          v28 = v26[1] & 0xF;
          v30 = v26[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v46 <= v21 )
        {
          v28 = v26[2] & 0xF;
          v47 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v47 = (unsigned __int8)v26[7] + 8;
          v21 = (unsigned __int64)(v26 + 13);
          v24 = (unsigned __int64)&v26[v47];
          if ( (unsigned __int64)(v26 + 13) > v24 )
            v50 = 0;
          else
            v50 = v26[12];
          if ( (unsigned __int64)(v26 + 14) <= v24 )
            v30 = *(_BYTE *)v21;
          LOBYTE(v24) = 1;
        }
        v29 = v50;
      }
      if ( (_BYTE)v24 )
      {
        LOBYTE(v5) = v29;
        v48 = v30;
      }
      else
      {
LABEL_113:
        v28 = 0;
        v48 = 0;
      }
      sub_140052E64(v21, v24, &v56, a2, *(_DWORD *)(a2 + 48), v45, v25, v28, v5, v48, a2);
    }
  }
LABEL_118:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
