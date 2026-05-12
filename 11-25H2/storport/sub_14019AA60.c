/*
 * XREFs of sub_14019AA60 @ 0x14019AA60
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14019AA60(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v7; // esi
  __int64 *v8; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rax
  unsigned int v14; // r8d
  PHYSICAL_ADDRESS *v15; // rax
  __int64 v16; // r14
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdi
  unsigned int v19; // ebp
  unsigned int v20; // esi
  unsigned int v21; // ecx
  __int64 v22; // rdx
  bool v23; // zf
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  const EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // rdx
  char v29; // bp
  _BYTE *v30; // r9
  unsigned __int8 v31; // r10
  char v32; // r11
  char v33; // r8
  char v34; // r13
  char *v35; // r14
  unsigned int v36; // r12d
  unsigned __int64 v37; // r15
  __int64 v38; // r8
  int v39; // ecx
  char v40; // cl
  char v41; // r14
  _BYTE *v42; // rax
  char *v43; // r13
  unsigned int v44; // eax
  char v45; // al
  char v47; // [rsp+60h] [rbp-78h]
  char v48; // [rsp+61h] [rbp-77h]
  unsigned int v49; // [rsp+64h] [rbp-74h]
  unsigned int v50; // [rsp+64h] [rbp-74h]
  unsigned int v51; // [rsp+68h] [rbp-70h]
  unsigned int v52; // [rsp+68h] [rbp-70h]
  unsigned __int64 v53; // [rsp+70h] [rbp-68h]
  __int64 *v54; // [rsp+78h] [rbp-60h]
  GUID v55; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = a2;
  *(_QWORD *)&v55.Data1 = a2;
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v8 = (__int64 *)(v4 + 184);
  if ( !v5 )
    goto LABEL_25;
  v54 = (__int64 *)(v4 + 184);
  if ( *(_DWORD *)(*v8 + 16) < 0x10u )
    goto LABEL_25;
  v9 = *(_QWORD *)v5;
  v10 = *(unsigned int *)(v5 + 8);
  if ( *(__int64 *)v5 < 0
    || (v11 = *(unsigned int *)(a1 + 64), v12 = *(_QWORD *)(a1 + 424) * v11, v9 > v12)
    || v10 + v9 < v9
    || ((v9 | (unsigned int)v10) & (unsigned int)(v11 - 1)) != 0
    || v10 + v9 > v12 )
  {
    v8 = (__int64 *)(v4 + 184);
LABEL_25:
    v7 = -1073741811;
    goto LABEL_26;
  }
  if ( (_DWORD)v10 )
  {
    v13 = *(_BYTE **)(v2 + 600);
    if ( v13 && *v13 )
    {
      v14 = (1 << *v13) * (1 << ((*(_BYTE *)(v2 + 590) & 0xF) + 12));
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v2 + 592) + 520LL) >= 0 )
        goto LABEL_9;
      v14 = (_DWORD)v11 << 16;
    }
    v8 = (__int64 *)(v4 + 184);
    v51 = v14 / (unsigned int)v11;
    v53 = v9 / v11;
    v49 = (unsigned int)v10 / (unsigned int)v11;
    if ( !((unsigned int)v10 / (unsigned int)v11) )
      goto LABEL_26;
    v15 = sub_1401225EC((union _SLIST_HEADER *)v2);
    v16 = (__int64)v15;
    if ( v15 )
    {
      v17 = 0;
      v18 = v53;
      v19 = v49;
      *(_DWORD *)(v15->QuadPart + 4256) &= ~1u;
      *(_DWORD *)(v15->QuadPart + 4256) |= 0x20u;
      *(_DWORD *)(v15->QuadPart + 4256) &= ~2u;
      *(_QWORD *)(v15->QuadPart + 4184) = 0LL;
      *(_QWORD *)(v15->QuadPart + 4192) = sub_1400E90F0;
      *(_QWORD *)(v15->QuadPart + 4200) = v15;
      *(_QWORD *)(v15->QuadPart + 4160) = 0LL;
      *(_QWORD *)(v15->QuadPart + 4168) = 0LL;
      *(_DWORD *)(v15->QuadPart + 4248) = 0;
      do
      {
        v20 = v51;
        if ( v19 - v17 < v51 )
          v20 = v19 - v17;
        v50 = v20;
        memset_0((void *)(*(_QWORD *)v16 + 4096LL), 0, 0x40uLL);
        v21 = *(_DWORD *)(a1 + 64);
        v22 = *(_QWORD *)v16 + 4096LL;
        *(_DWORD *)(v22 + 4) = *(_DWORD *)(a1 + 56);
        *(_BYTE *)v22 = 12;
        *(_DWORD *)v22 &= 0xFFFFFCFF;
        *(_QWORD *)(v22 + 40) = v18 * v21;
        *(_WORD *)(v22 + 48) = v20 - 1;
        *(_DWORD *)(v22 + 48) &= 0x3FFFFFFu;
        *(_QWORD *)(v22 + 52) = 0LL;
        *(_DWORD *)(v22 + 60) = 0;
        v7 = sub_1400BD378((PVOID)v2, v16);
        if ( v7 < 0 )
          break;
        v17 += v50;
        v18 += v50;
      }
      while ( v17 < v19 );
      sub_140122C20((union _SLIST_HEADER *)v2, v16);
      v8 = v54;
      v4 = *(_QWORD *)&v55.Data1;
      goto LABEL_26;
    }
    v7 = -1073741670;
  }
LABEL_9:
  v8 = (__int64 *)(v4 + 184);
LABEL_26:
  v23 = byte_140168DAA == 0;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = v7;
  if ( v23 )
    goto LABEL_92;
  v55 = 0LL;
  IoGetActivityIdIrp(v4, &v55);
  v25 = *v8;
  if ( *(_BYTE *)*v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_92;
    v27 = &stru_140148B18;
    goto LABEL_91;
  }
  if ( *(_BYTE *)*v8 != 15 )
  {
    if ( *(_BYTE *)*v8 != 27 )
      goto LABEL_92;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v26 = *(int **)(v4 + 56);
        if ( v26 )
          v3 = *v26;
        sub_140056AB0(v24, v25, &v55, v4, v3, *(_DWORD *)(v4 + 48));
      }
      goto LABEL_92;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_92;
    v27 = &stru_140149FE8;
LABEL_91:
    sub_140052F3C(v24, v27, &v55, v4, *(_DWORD *)(v4 + 48));
    goto LABEL_92;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_92;
  v28 = *(_QWORD *)(v25 + 8);
  v29 = 0;
  v30 = 0LL;
  v47 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  if ( *(_BYTE *)(v28 + 2) != 40 )
  {
    v40 = *(_BYTE *)(v28 + 72);
    v30 = *(_BYTE **)(v28 + 32);
    v31 = *(_BYTE *)(v28 + 11);
    v29 = *(_BYTE *)(v28 + 4);
    if ( !*(_BYTE *)(v28 + 2) )
      goto LABEL_67;
    goto LABEL_92;
  }
  v35 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(v28 + 20) )
    goto LABEL_92;
  v36 = 0;
  v52 = *(_DWORD *)(v28 + 56);
  if ( !v52 )
    goto LABEL_64;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v28 + 4LL * v36 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v37 = *(unsigned int *)(v28 + 16);
      if ( (unsigned int)v24 < (unsigned int)v37 )
        break;
    }
LABEL_57:
    if ( ++v36 >= v52 )
      goto LABEL_63;
  }
  v38 = (unsigned int)v24;
  v39 = *(_DWORD *)(v24 + v28) - 64;
  if ( v39 )
  {
    v24 = (unsigned int)(v39 - 1);
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 == 1 )
      {
        v24 = v38 + 40;
        if ( v38 + 40 <= v37 )
        {
          if ( *(_DWORD *)(v38 + v28 + 12) )
            v35 = (char *)(v38 + v28 + 32);
          v30 = *(_BYTE **)(v38 + v28 + 24);
          goto LABEL_62;
        }
      }
    }
    else
    {
      v24 = v38 + 56;
      if ( v38 + 56 <= v37 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v38 + v28 + 10) )
          v35 = (char *)(v38 + v28 + 24);
        v29 = *(_BYTE *)(v38 + v28 + 8);
        v30 = *(_BYTE **)(v38 + v28 + 16);
        v31 = *(_BYTE *)(v38 + v28 + 9);
      }
    }
    goto LABEL_56;
  }
  v24 = v38 + 40;
  if ( v38 + 40 > v37 )
  {
LABEL_56:
    if ( v48 )
      goto LABEL_63;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(v38 + v28 + 10) )
    v35 = (char *)(v38 + v28 + 24);
  v30 = *(_BYTE **)(v38 + v28 + 16);
LABEL_62:
  v31 = *(_BYTE *)(v38 + v28 + 9);
  v29 = *(_BYTE *)(v38 + v28 + 8);
LABEL_63:
  v33 = 0;
LABEL_64:
  if ( v35 )
  {
    v40 = *v35;
LABEL_67:
    LOBYTE(v24) = v40 - 8;
    if ( (v24 & 0x5D) == 0 )
    {
      v41 = *(_BYTE *)(v28 + 3);
      if ( v41 == 1 || !v30 || !v31 )
        goto LABEL_87;
      LOBYTE(v28) = 0;
      v24 = (unsigned __int64)&v30[v31];
      v42 = v30 + 8;
      if ( (unsigned __int8)((*v30 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v42 <= v24 )
        {
          LOBYTE(v28) = 1;
          v33 = v30[2];
          v32 = v30[1] & 0xF;
          v34 = v30[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v42 <= v24 )
        {
          v43 = v30 + 13;
          v32 = v30[2] & 0xF;
          v44 = v31;
          if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
            v44 = (unsigned __int8)v30[7] + 8;
          v24 = (unsigned __int64)&v30[v44];
          if ( (unsigned __int64)v43 > v24 )
            v47 = 0;
          else
            v47 = v30[12];
          if ( (unsigned __int64)(v30 + 14) > v24 )
            v34 = 0;
          else
            v34 = *v43;
          LOBYTE(v28) = 1;
        }
        v33 = v47;
      }
      if ( (_BYTE)v28 )
      {
        LOBYTE(v3) = v33;
        v45 = v34;
      }
      else
      {
LABEL_87:
        v32 = 0;
        v45 = 0;
      }
      sub_140052E64(v24, v28, &v55, v4, *(_DWORD *)(v4 + 48), v41, v29, v32, v3, v45, v4);
    }
  }
LABEL_92:
  IofCompleteRequest((PIRP)v4, 0);
  return (unsigned int)v7;
}
