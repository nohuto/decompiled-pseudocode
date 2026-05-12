/*
 * XREFs of sub_140193A88 @ 0x140193A88
 * Callers:
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140121B14 @ 0x140121B14 (sub_140121B14.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140190660 @ 0x140190660 (sub_140190660.c)
 *     sub_14019074C @ 0x14019074C (sub_14019074C.c)
 *     sub_140190830 @ 0x140190830 (sub_140190830.c)
 *     sub_140190904 @ 0x140190904 (sub_140190904.c)
 *     sub_140190B5C @ 0x140190B5C (sub_140190B5C.c)
 *     sub_140191238 @ 0x140191238 (sub_140191238.c)
 */

__int64 __fastcall sub_140193A88(__int64 a1, __int64 a2, _BYTE *a3)
{
  int *v3; // r10
  int v4; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  unsigned int v18; // esi
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 result; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rdx
  char v36; // r13
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // r14
  char v40; // r15
  char v41; // r11
  char *v42; // r11
  unsigned int v43; // r12d
  unsigned __int64 v44; // r15
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  unsigned __int64 v51; // r8
  char v52; // al
  int v53; // [rsp+20h] [rbp-49h]
  char v54; // [rsp+60h] [rbp-9h]
  char v55; // [rsp+61h] [rbp-8h]
  unsigned int v56; // [rsp+64h] [rbp-5h] BYREF
  char v57; // [rsp+68h] [rbp-1h]
  GUID v58; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(int **)(a2 + 24);
  v4 = 0;
  if ( !v3 )
    goto LABEL_28;
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v8 + 16) < 8u )
    goto LABEL_28;
  v9 = *v3;
  v10 = *v3;
  v56 = *(_DWORD *)(v8 + 8);
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      v13 = v12 - 44;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( !v14 || (v15 = v14 - 6) == 0 || (v16 = v15 - 8) == 0 )
        {
          if ( *(_QWORD *)(a1 + 592) )
            goto LABEL_11;
          v19 = (*(_BYTE *)(a1 + 416) & 0x40) == 0;
          goto LABEL_14;
        }
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_15;
        if ( v17 != 1 )
          goto LABEL_11;
      }
      v19 = *(_QWORD *)(a1 + 592) == 0LL;
LABEL_14:
      if ( !v19 )
        goto LABEL_11;
    }
  }
LABEL_15:
  v20 = v3[1];
  if ( !v20 )
  {
    v21 = v9 - 1;
    if ( v21 )
    {
      v22 = v21 - 4;
      if ( v22 )
      {
        v23 = v22 - 44;
        if ( !v23 )
        {
LABEL_43:
          v32 = sub_140121B14(*(_QWORD *)(a1 + 8), (_QWORD *)a2, a3);
          goto LABEL_44;
        }
        v24 = v23 - 2;
        if ( !v24 )
        {
          v32 = sub_140191238(a1, (_QWORD *)a2, a3);
LABEL_44:
          v18 = v32;
          goto LABEL_48;
        }
        v25 = v24 - 6;
        if ( v25 )
        {
          v26 = v25 - 8;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 != 1 )
              {
                *(_QWORD *)(a2 + 56) = 0LL;
LABEL_28:
                v18 = -1073741811;
                goto LABEL_29;
              }
              goto LABEL_43;
            }
            v31 = sub_140190B5C(a1, v3, &v56);
          }
          else
          {
            v31 = sub_14019074C(a1, v3, (int *)&v56);
          }
        }
        else
        {
          v31 = sub_140190904((__int64 *)a1, v3, &v56);
        }
      }
      else
      {
        v31 = sub_140190830(a1, v3, (int *)&v56);
      }
    }
    else
    {
      v31 = sub_140190660(a1, v3, (int *)&v56);
    }
    v18 = v31;
    *(_QWORD *)(a2 + 56) = v56;
LABEL_48:
    result = 259LL;
    if ( v18 == 259 )
    {
      *a3 = 0;
      return result;
    }
    goto LABEL_29;
  }
  if ( v20 == 1 )
  {
    v18 = 0;
    goto LABEL_29;
  }
LABEL_11:
  *(_QWORD *)(a2 + 56) = 0LL;
  v18 = -1073741808;
LABEL_29:
  v19 = byte_140168DAA == 0;
  *a3 = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v18;
  if ( v19 )
    goto LABEL_106;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v29 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v29 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_106;
    v53 = *(_DWORD *)(a2 + 48);
    v34 = &stru_140148B18;
    goto LABEL_105;
  }
  if ( *(_BYTE *)v29 != 15 )
  {
    if ( *(_BYTE *)v29 != 27 )
      goto LABEL_106;
    if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v4 = *v30;
        sub_140056AB0(v28, v29, &v58, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_106;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_106;
    v34 = &stru_140149FE8;
    v53 = *(_DWORD *)(a2 + 48);
LABEL_105:
    sub_140052F3C(v28, v34, &v58, a2, v53);
    goto LABEL_106;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_106;
  v35 = *(_QWORD *)(v29 + 8);
  v36 = 0;
  v37 = 0LL;
  v54 = 0;
  v38 = 0;
  v55 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *(_BYTE *)(v35 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v35 + 72);
    v37 = *(_BYTE **)(v35 + 32);
    v38 = *(_BYTE *)(v35 + 11);
    v36 = *(_BYTE *)(v35 + 4);
    if ( !*(_BYTE *)(v35 + 2) )
      goto LABEL_81;
    goto LABEL_106;
  }
  v42 = 0LL;
  v57 = 0;
  if ( *(_DWORD *)(v35 + 20) )
    goto LABEL_106;
  v43 = 0;
  v56 = *(_DWORD *)(v35 + 56);
  if ( !v56 )
    goto LABEL_78;
  while ( 1 )
  {
    v28 = *(unsigned int *)(v35 + 4LL * v43 + 120);
    if ( (unsigned int)v28 >= 0x80 )
    {
      v44 = *(unsigned int *)(v35 + 16);
      if ( (unsigned int)v28 < (unsigned int)v44 )
        break;
    }
LABEL_71:
    if ( ++v43 >= v56 )
      goto LABEL_77;
  }
  v45 = (unsigned int)v28;
  v46 = *(_DWORD *)(v28 + v35) - 64;
  if ( v46 )
  {
    v28 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 == 1 )
      {
        v28 = v45 + 40;
        if ( v45 + 40 <= v44 )
        {
          if ( *(_DWORD *)(v45 + v35 + 12) )
            v42 = (char *)(v45 + v35 + 32);
          v37 = *(_BYTE **)(v45 + v35 + 24);
          goto LABEL_76;
        }
      }
    }
    else
    {
      v28 = v45 + 56;
      if ( v45 + 56 <= v44 )
      {
        v57 = 1;
        if ( *(_BYTE *)(v45 + v35 + 10) )
          v42 = (char *)(v45 + v35 + 24);
        v36 = *(_BYTE *)(v45 + v35 + 8);
        v37 = *(_BYTE **)(v45 + v35 + 16);
        v38 = *(_BYTE *)(v45 + v35 + 9);
      }
    }
    goto LABEL_70;
  }
  v28 = v45 + 40;
  if ( v45 + 40 > v44 )
  {
LABEL_70:
    if ( v57 )
      goto LABEL_77;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(v45 + v35 + 10) )
    v42 = (char *)(v45 + v35 + 24);
  v37 = *(_BYTE **)(v45 + v35 + 16);
LABEL_76:
  v38 = *(_BYTE *)(v45 + v35 + 9);
  v36 = *(_BYTE *)(v45 + v35 + 8);
LABEL_77:
  v40 = 0;
LABEL_78:
  if ( v42 )
  {
    v47 = *v42;
    v41 = 0;
LABEL_81:
    LOBYTE(v28) = v47 - 8;
    if ( (v28 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v35 + 3) == 1 || !v37 || !v38 )
        goto LABEL_101;
      v48 = 0;
      v28 = (unsigned __int64)&v37[v38];
      v49 = v37 + 8;
      if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v49 <= v28 )
        {
          v48 = 1;
          v40 = v37[2];
          v39 = v37[1] & 0xF;
          v41 = v37[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v49 <= v28 )
        {
          v39 = v37[2] & 0xF;
          v50 = v38;
          if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
            v50 = (unsigned __int8)v37[7] + 8;
          v28 = (unsigned __int64)(v37 + 13);
          v51 = (unsigned __int64)&v37[v50];
          if ( (unsigned __int64)(v37 + 13) > v51 )
            v54 = 0;
          else
            v54 = v37[12];
          if ( (unsigned __int64)(v37 + 14) > v51 )
            v55 = 0;
          else
            v55 = *(_BYTE *)v28;
          v48 = 1;
        }
        v41 = v55;
        v40 = v54;
      }
      if ( v48 )
      {
        LOBYTE(v4) = v40;
        v52 = v41;
      }
      else
      {
LABEL_101:
        v39 = 0;
        v52 = 0;
      }
      sub_140052E64(v28, v35, &v58, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v35 + 3), v36, v39, v4, v52, a2);
    }
  }
LABEL_106:
  IofCompleteRequest((PIRP)a2, 0);
  return v18;
}
