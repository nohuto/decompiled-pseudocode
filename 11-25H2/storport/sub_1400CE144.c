/*
 * XREFs of sub_1400CE144 @ 0x1400CE144
 * Callers:
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_1400CE6F0 @ 0x1400CE6F0 (sub_1400CE6F0.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C941C @ 0x1400C941C (sub_1400C941C.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400CE144(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v9; // r14
  unsigned int v10; // edx
  char v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // esi
  unsigned int v14; // r12d
  unsigned int v15; // r12d
  unsigned __int8 v16; // dl
  _DWORD *v17; // r8
  int v18; // edx
  unsigned int v19; // edx
  __int64 result; // rax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // bp
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // r11
  char v31; // r14
  char v32; // r13
  char *v33; // r14
  unsigned int v34; // r12d
  unsigned __int64 v35; // r15
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  char *v41; // r13
  unsigned int v42; // eax
  char v43; // al
  char v44; // [rsp+60h] [rbp-68h]
  char v45; // [rsp+60h] [rbp-68h]
  char v46; // [rsp+61h] [rbp-67h]
  unsigned int v48; // [rsp+68h] [rbp-60h]
  GUID v49; // [rsp+70h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a3 + 184);
  v6 = 0;
  *(_QWORD *)&v49.Data1 = a4;
  v9 = a4;
  v10 = *(_DWORD *)(v5 + 16);
  v11 = 0;
  v44 = 0;
  if ( a5 )
    *a5 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( !a2 )
    goto LABEL_32;
  v12 = *(_QWORD *)(a3 + 24);
  if ( v10 < 0x10 )
  {
    v13 = -1073741820;
    goto LABEL_33;
  }
  if ( *(_DWORD *)v12 != 16
    || *(_DWORD *)(v12 + 4) != 16
    || (v14 = *(_DWORD *)(v12 + 8), (v14 & 1) == 0)
    || *(_BYTE *)(v12 + 12) > (unsigned int)((*(_BYTE *)(a2[74] + 260LL) >> 1) & 7) )
  {
LABEL_32:
    v13 = -1073741811;
LABEL_33:
    if ( v9 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v9 + 4256LL), 3u);
      sub_140122C20(a2, v9);
    }
    goto LABEL_35;
  }
  v15 = v14 >> 31;
  if ( (a2[121] & 0x400LL) == 0 && (sub_1400C941C((__int64)a2) || (*(_DWORD *)(v12 + 8) & 0x10000000) != 0) )
    v11 = 1;
  if ( (*(_DWORD *)(v12 + 8) & 0x40000000) != 0 )
  {
    v11 = 0;
    v44 = 1;
    a2[121] |= 0x10000uLL;
  }
  if ( a4 || (v9 = sub_1401225EC(a2)) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)v9 + 4256LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)v9 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v9 + 4184LL) = a3;
    *(_QWORD *)(*(_QWORD *)v9 + 4192LL) = sub_1400CE6F0;
    *(_QWORD *)(*(_QWORD *)v9 + 4200LL) = v9;
    *(_QWORD *)(*(_QWORD *)v9 + 4224LL) = a1;
    v16 = *(_BYTE *)(v12 + 12);
    v17 = (_DWORD *)(*(_QWORD *)v9 + 4136LL);
    *(_BYTE *)(*(_QWORD *)v9 + 4096LL) = 16;
    v18 = *v17 ^ ((unsigned __int8)*v17 ^ v16) & 7;
    *v17 = v18;
    if ( v44 )
    {
      v19 = v18 & 0xFFFFFFE7;
    }
    else if ( v11 )
    {
      v19 = v18 | 0x18;
    }
    else if ( (_BYTE)v15 )
    {
      v19 = v18 & 0xFFFFFFE7 | 0x10;
    }
    else
    {
      v19 = v18 & 0xFFFFFFE7 | 8;
    }
    *v17 = v19;
    result = sub_140122670(a2);
    v13 = result;
    if ( (int)result >= 0 )
    {
      if ( a5 )
        *a5 = 0;
      return 259LL;
    }
    if ( *(_QWORD *)&v49.Data1 )
      return result;
    goto LABEL_33;
  }
  v13 = -1073741670;
LABEL_35:
  v21 = byte_140168DAA == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v13;
  if ( v21 )
    goto LABEL_100;
  v49 = 0LL;
  IoGetActivityIdIrp(a3, &v49);
  v23 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_100;
    v25 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_99;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_100;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v24 = *(int **)(a3 + 56);
        if ( v24 )
          v6 = *v24;
        sub_140056AB0(v22, v23, &v49, a3, v6, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_100;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_100;
    v25 = &stru_140149FE8;
LABEL_99:
    sub_140052F3C(v22, v25, &v49, a3, *(_DWORD *)(a3 + 48));
    goto LABEL_100;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_100;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v45 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v26 + 72);
    v28 = *(_BYTE **)(v26 + 32);
    v29 = *(_BYTE *)(v26 + 11);
    v27 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_75;
    goto LABEL_100;
  }
  v33 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_100;
  v34 = 0;
  v48 = *(_DWORD *)(v26 + 56);
  if ( !v48 )
    goto LABEL_72;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v26 + 4LL * v34 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v35 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v22 < (unsigned int)v35 )
        break;
    }
LABEL_66:
    if ( ++v34 >= v48 )
      goto LABEL_72;
  }
  v36 = (unsigned int)v22;
  v37 = *(_DWORD *)(v22 + v26) - 64;
  if ( v37 )
  {
    v22 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + v26 + 12) )
            v33 = (char *)(v36 + v26 + 32);
          v28 = *(_BYTE **)(v36 + v26 + 24);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v22 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v36 + v26 + 10) )
          v33 = (char *)(v36 + v26 + 24);
        v27 = *(_BYTE *)(v36 + v26 + 8);
        v28 = *(_BYTE **)(v36 + v26 + 16);
        v29 = *(_BYTE *)(v36 + v26 + 9);
      }
    }
    goto LABEL_65;
  }
  v22 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_65:
    if ( v46 )
      goto LABEL_72;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v36 + v26 + 10) )
    v33 = (char *)(v36 + v26 + 24);
  v28 = *(_BYTE **)(v36 + v26 + 16);
LABEL_71:
  v29 = *(_BYTE *)(v36 + v26 + 9);
  v27 = *(_BYTE *)(v36 + v26 + 8);
LABEL_72:
  if ( v33 )
  {
    v38 = *v33;
    v31 = 0;
LABEL_75:
    LOBYTE(v22) = v38 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v28 || !v29 )
        goto LABEL_95;
      v39 = 0;
      v22 = (unsigned __int64)&v28[v29];
      v40 = v28 + 8;
      if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v39 = 1;
          v31 = v28[2];
          v30 = v28[1] & 0xF;
          v32 = v28[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v41 = v28 + 13;
          v30 = v28[2] & 0xF;
          v42 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v42 = (unsigned __int8)v28[7] + 8;
          v22 = (unsigned __int64)&v28[v42];
          if ( (unsigned __int64)v41 > v22 )
            v45 = 0;
          else
            v45 = v28[12];
          if ( (unsigned __int64)(v28 + 14) > v22 )
            v32 = 0;
          else
            v32 = *v41;
          v39 = 1;
        }
        v31 = v45;
      }
      if ( v39 )
      {
        LOBYTE(v6) = v31;
        v43 = v32;
      }
      else
      {
LABEL_95:
        v30 = 0;
        v43 = 0;
      }
      sub_140052E64(v22, v26, &v49, a3, *(_DWORD *)(a3 + 48), *(_BYTE *)(v26 + 3), v27, v30, v6, v43, a3);
    }
  }
LABEL_100:
  IofCompleteRequest((PIRP)a3, 0);
  return v13;
}
