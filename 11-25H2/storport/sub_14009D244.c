/*
 * XREFs of sub_14009D244 @ 0x14009D244
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_14003B24C @ 0x14003B24C (sub_14003B24C.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008B5C8 @ 0x14008B5C8 (sub_14008B5C8.c)
 *     sub_1400902E4 @ 0x1400902E4 (sub_1400902E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14009D244(__int64 a1, __int64 a2)
{
  int v4; // ebx
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // r12
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // r14
  char v15; // r11
  char v16; // r13
  char *v17; // r11
  unsigned int v18; // r15d
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  int v21; // ecx
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  const EVENT_DESCRIPTOR *v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // r12
  _BYTE *v34; // r9
  unsigned __int8 v35; // r10
  char v36; // si
  char v37; // r11
  char v38; // r13
  char *v39; // r11
  unsigned int v40; // r15d
  unsigned __int64 v41; // r14
  __int64 v42; // r8
  int v43; // ecx
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rax
  unsigned int v47; // eax
  char v48; // al
  int v49; // [rsp+20h] [rbp-60h]
  char v50; // [rsp+60h] [rbp-20h]
  char v51; // [rsp+60h] [rbp-20h]
  char v52; // [rsp+61h] [rbp-1Fh]
  char v53; // [rsp+61h] [rbp-1Fh]
  unsigned int v54; // [rsp+64h] [rbp-1Ch]
  unsigned int v55; // [rsp+64h] [rbp-1Ch]
  GUID v56; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0;
  if ( !(unsigned int)sub_1400902E4() || sub_14008B5C8() && *(struct _KTHREAD **)(a2 + 152) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    sub_14003B24C(*(_QWORD *)(a1 + 24), (char *)a1);
    v5 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v5 )
      goto LABEL_133;
    v56 = 0LL;
    IoGetActivityIdIrp(a2, &v56);
    v29 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v29 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_133;
        v31 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_133;
        v32 = *(_QWORD *)(v29 + 8);
        v33 = 0;
        v34 = 0LL;
        v51 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        if ( *(_BYTE *)(v32 + 2) != 40 )
        {
          v44 = *(_BYTE *)(v32 + 72);
          v34 = *(_BYTE **)(v32 + 32);
          v35 = *(_BYTE *)(v32 + 11);
          v33 = *(_BYTE *)(v32 + 4);
          if ( !*(_BYTE *)(v32 + 2) )
            goto LABEL_109;
          goto LABEL_133;
        }
        v39 = 0LL;
        v53 = 0;
        if ( *(_DWORD *)(v32 + 20) )
          goto LABEL_133;
        v40 = 0;
        v55 = *(_DWORD *)(v32 + 56);
        if ( !v55 )
          goto LABEL_106;
        while ( 1 )
        {
          v28 = *(unsigned int *)(v32 + 4LL * v40 + 120);
          if ( (unsigned int)v28 >= 0x80 )
          {
            v41 = *(unsigned int *)(v32 + 16);
            if ( (unsigned int)v28 < (unsigned int)v41 )
            {
              v42 = (unsigned int)v28;
              v43 = *(_DWORD *)(v32 + v28) - 64;
              if ( v43 )
              {
                v28 = (unsigned int)(v43 - 1);
                if ( (_DWORD)v28 )
                {
                  if ( (_DWORD)v28 == 1 )
                  {
                    v28 = v42 + 40;
                    if ( v42 + 40 <= v41 )
                    {
                      if ( *(_DWORD *)(v32 + v42 + 12) )
                        v39 = (char *)(v42 + v32 + 32);
                      v34 = *(_BYTE **)(v32 + v42 + 24);
                      goto LABEL_105;
                    }
                  }
                }
                else
                {
                  v28 = v42 + 56;
                  if ( v42 + 56 <= v41 )
                  {
                    v53 = 1;
                    if ( *(_BYTE *)(v32 + v42 + 10) )
                      v39 = (char *)(v42 + v32 + 24);
                    v33 = *(_BYTE *)(v32 + v42 + 8);
                    v34 = *(_BYTE **)(v32 + v42 + 16);
                    v35 = *(_BYTE *)(v32 + v42 + 9);
                  }
                }
              }
              else
              {
                v28 = v42 + 40;
                if ( v42 + 40 <= v41 )
                {
                  if ( *(_BYTE *)(v32 + v42 + 10) )
                    v39 = (char *)(v42 + v32 + 24);
                  v34 = *(_BYTE **)(v32 + v42 + 16);
LABEL_105:
                  v35 = *(_BYTE *)(v32 + v42 + 9);
                  v33 = *(_BYTE *)(v32 + v42 + 8);
LABEL_106:
                  if ( v39 )
                  {
                    v44 = *v39;
                    v37 = 0;
LABEL_109:
                    LOBYTE(v28) = v44 - 8;
                    if ( (v28 & 0x5D) == 0 )
                    {
                      v45 = *(_BYTE *)(v32 + 3);
                      if ( v45 == 1 || !v34 || !v35 )
                        goto LABEL_128;
                      LOBYTE(v32) = 0;
                      v28 = (unsigned __int64)&v34[v35];
                      v46 = v34 + 8;
                      if ( (unsigned __int8)((*v34 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v46 <= v28 )
                        {
                          LOBYTE(v32) = 1;
                          v37 = v34[2];
                          v36 = v34[1] & 0xF;
                          v38 = v34[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v46 <= v28 )
                        {
                          v36 = v34[2] & 0xF;
                          v47 = v35;
                          if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
                            v47 = (unsigned __int8)v34[7] + 8;
                          v28 = (unsigned __int64)(v34 + 13);
                          v32 = (unsigned __int64)&v34[v47];
                          if ( (unsigned __int64)(v34 + 13) > v32 )
                            v51 = 0;
                          else
                            v51 = v34[12];
                          if ( (unsigned __int64)(v34 + 14) <= v32 )
                            v38 = *(_BYTE *)v28;
                          LOBYTE(v32) = 1;
                        }
                        v37 = v51;
                      }
                      if ( (_BYTE)v32 )
                      {
                        LOBYTE(v4) = v37;
                        v48 = v38;
                      }
                      else
                      {
LABEL_128:
                        v36 = 0;
                        v48 = 0;
                      }
                      sub_140052E64(v28, v32, &v56, a2, *(_DWORD *)(a2 + 48), v45, v33, v36, v4, v48, a2);
                    }
                  }
                  goto LABEL_133;
                }
              }
              if ( v53 )
                goto LABEL_106;
            }
          }
          if ( ++v40 >= v55 )
            goto LABEL_106;
        }
      case 0x1B:
        if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v30 = *(int **)(a2 + 56);
            if ( v30 )
              v4 = *v30;
            sub_140056AB0(v28, v29, &v56, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_133;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_133:
          IofCompleteRequest((PIRP)a2, 0);
          return 0LL;
        }
        v31 = &stru_140149FE8;
        break;
      default:
        goto LABEL_133;
    }
    sub_140052F3C(v28, v31, &v56, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_133;
  }
  v5 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741790;
  if ( v5 )
    goto LABEL_68;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_68;
    v6 = *(unsigned int *)(a2 + 48);
    v9 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    v49 = *(_DWORD *)(a2 + 48);
    goto LABEL_67;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v4 = *v8;
        sub_140056AB0(v6, v7, &v56, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_68;
    v9 = &stru_140149FE8;
    v49 = *(_DWORD *)(a2 + 48);
LABEL_67:
    sub_140052F3C(v6, v9, &v56, a2, v49);
    goto LABEL_68;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_68;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0;
  v12 = 0LL;
  v50 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_44;
    goto LABEL_68;
  }
  v17 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_68;
  v18 = 0;
  v54 = *(_DWORD *)(v10 + 56);
  if ( !v54 )
    goto LABEL_41;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v10 + 4LL * v18 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v19 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v6 < (unsigned int)v19 )
        break;
    }
LABEL_35:
    if ( ++v18 >= v54 )
      goto LABEL_41;
  }
  v20 = (unsigned int)v6;
  v21 = *(_DWORD *)(v6 + v10) - 64;
  if ( v21 )
  {
    v6 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v20 + 40;
        if ( v20 + 40 <= v19 )
        {
          if ( *(_DWORD *)(v20 + v10 + 12) )
            v17 = (char *)(v20 + v10 + 32);
          v12 = *(_BYTE **)(v20 + v10 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v6 = v20 + 56;
      if ( v20 + 56 <= v19 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v20 + v10 + 10) )
          v17 = (char *)(v20 + v10 + 24);
        v11 = *(_BYTE *)(v20 + v10 + 8);
        v12 = *(_BYTE **)(v20 + v10 + 16);
        v13 = *(_BYTE *)(v20 + v10 + 9);
      }
    }
    goto LABEL_34;
  }
  v6 = v20 + 40;
  if ( v20 + 40 > v19 )
  {
LABEL_34:
    if ( v52 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v20 + v10 + 10) )
    v17 = (char *)(v20 + v10 + 24);
  v12 = *(_BYTE **)(v20 + v10 + 16);
LABEL_40:
  v13 = *(_BYTE *)(v20 + v10 + 9);
  v11 = *(_BYTE *)(v20 + v10 + 8);
LABEL_41:
  if ( v17 )
  {
    v22 = *v17;
    v15 = 0;
LABEL_44:
    LOBYTE(v6) = v22 - 8;
    if ( (v6 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v10 + 3);
      if ( v23 == 1 || !v12 || !v13 )
        goto LABEL_63;
      LOBYTE(v10) = 0;
      v6 = (unsigned __int64)&v12[v13];
      v24 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v6 )
        {
          LOBYTE(v10) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v6 )
        {
          v14 = v12[2] & 0xF;
          v25 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v25 = (unsigned __int8)v12[7] + 8;
          v6 = (unsigned __int64)(v12 + 13);
          v10 = (unsigned __int64)&v12[v25];
          if ( (unsigned __int64)(v12 + 13) > v10 )
            v50 = 0;
          else
            v50 = v12[12];
          if ( (unsigned __int64)(v12 + 14) <= v10 )
            v16 = *(_BYTE *)v6;
          LOBYTE(v10) = 1;
        }
        v15 = v50;
      }
      if ( (_BYTE)v10 )
      {
        LOBYTE(v4) = v15;
        v26 = v16;
      }
      else
      {
LABEL_63:
        v14 = 0;
        v26 = 0;
      }
      sub_140052E64(v6, v10, &v56, a2, *(_DWORD *)(a2 + 48), v23, v11, v14, v4, v26, a2);
    }
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225506LL;
}
