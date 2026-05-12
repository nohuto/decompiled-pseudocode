/*
 * XREFs of sub_14018213C @ 0x14018213C
 * Callers:
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 * Callees:
 *     sub_140002850 @ 0x140002850 (sub_140002850.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 *     sub_140040448 @ 0x140040448 (sub_140040448.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400772D0 @ 0x1400772D0 (sub_1400772D0.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 *     sub_14009E2E0 @ 0x14009E2E0 (sub_14009E2E0.c)
 *     sub_1400A1550 @ 0x1400A1550 (sub_1400A1550.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14018213C(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int32 v5; // eax
  void (__fastcall *v6)(_QWORD, __int64 *); // r8
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  const wchar_t *v12; // r10
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // r14
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  char v25; // r11
  char v26; // r13
  char v27; // r12
  char *v28; // rbx
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  char v33; // cl
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-79h]
  __int64 v41; // [rsp+28h] [rbp-71h]
  __int64 v42; // [rsp+30h] [rbp-69h]
  __int64 v43; // [rsp+38h] [rbp-61h]
  __int64 v44; // [rsp+40h] [rbp-59h]
  __int64 v45; // [rsp+48h] [rbp-51h]
  char v46; // [rsp+80h] [rbp-19h]
  __int32 v47; // [rsp+84h] [rbp-15h]
  int v48; // [rsp+84h] [rbp-15h]
  __int64 v49; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-9h]
  __int128 v51; // [rsp+98h] [rbp-1h]
  GUID v52; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = 0;
  v49 = 0LL;
  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 56), 5);
  v6 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3520);
  v47 = v5;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    LODWORD(v49) = 8;
    v8 = *(_BYTE *)(v7 + 56);
    *(_WORD *)((char *)&v49 + 5) = *(_WORD *)(a1 + 104);
    HIBYTE(v49) = *(_BYTE *)(a1 + 106);
    BYTE4(v49) = v8;
    v6(0LL, &v49);
    v5 = v47;
    *(_QWORD *)(a1 + 3520) = 0LL;
  }
  if ( (unsigned int)(v5 - 6) > 1 )
    sub_1400A1550(a1);
  sub_14009E168(a1);
  if ( sub_1400215B0(a1, 10) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v51 = 0LL;
    LOWORD(v51) = 1;
    WORD1(v51) = *(_WORD *)(v9 + 56);
    WORD4(v51) = *(_WORD *)(a1 + 104);
    BYTE10(v51) = *(_BYTE *)(a1 + 106);
    DWORD1(v51) = 4;
    if ( *(_DWORD *)v9 == 1094997074 )
    {
      v10 = v9 + 376;
    }
    else if ( *(_DWORD *)v9 == 1314275652 )
    {
      v10 = v9 + 168;
    }
    else
    {
      v10 = 0LL;
    }
    sub_140021760(v10);
  }
  if ( (byte_1401694F5 & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (const wchar_t *)&unk_140149394;
    if ( *(_QWORD *)(v11 + 5080) )
      v12 = *(const wchar_t **)(v11 + 5080);
    sub_140002850(
      a1 + 177,
      a1 + 168,
      a1 + 2104,
      *(const wchar_t **)(v11 + 4720),
      *(_DWORD *)(v11 + 56),
      v11 + 5064,
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v12,
      (*(_BYTE *)(a1 + 506) & 0x40) != 0,
      *(_BYTE *)(a1 + 506) >> 7);
  }
  sub_14003E780(a1, 52);
  v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v14 = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 40));
  while ( (v14 & 1) == 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(a1 + 40)), v14 - 2, v14);
    if ( v15 == v14 )
      goto LABEL_22;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_22:
  sub_140040448(a1);
  sub_1400772D0(a1);
  sub_14009E2E0(a1);
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v16 )
    goto LABEL_86;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_86;
    v20 = &stru_140148B18;
    goto LABEL_85;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_86;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v2 = *v19;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v2;
        sub_140056AB0(v17, v18, &v52, a2, v40, v41);
      }
      goto LABEL_86;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_86;
    v20 = &stru_140149FE8;
LABEL_85:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v17, v20, &v52, a2, v40);
    goto LABEL_86;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_86;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_86;
LABEL_64:
    LOBYTE(v17) = v33 - 8;
    if ( (v17 & 0x5D) != 0 )
      goto LABEL_86;
    if ( *(_BYTE *)(v21 + 3) == 1 || !v23 || !v24 )
      goto LABEL_81;
    v34 = 0;
    v17 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 > v17 )
        goto LABEL_79;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      if ( (unsigned __int64)v35 > v17 )
        goto LABEL_79;
      v25 = v23[2] & 0xF;
      v36 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v36 = (unsigned __int8)v23[7] + 8;
      v17 = (unsigned __int64)(v23 + 13);
      v37 = (unsigned __int64)&v23[v36];
      if ( (unsigned __int64)(v23 + 13) <= v37 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) <= v37 )
        v27 = *(_BYTE *)v17;
    }
    v34 = 1;
LABEL_79:
    if ( v34 )
    {
      LOBYTE(v2) = v26;
      v38 = v27;
LABEL_82:
      LOBYTE(v45) = v38;
      LOBYTE(v44) = v2;
      LOBYTE(v43) = v25;
      LOBYTE(v42) = v22;
      LOBYTE(v41) = *(_BYTE *)(v21 + 3);
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v17, v21, &v52, a2, v40, v41, v42, v43, v44, v45, a2);
      goto LABEL_86;
    }
LABEL_81:
    v25 = 0;
    v38 = 0;
    goto LABEL_82;
  }
  v28 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_86;
  v17 = 0LL;
  v48 = 0;
  v50 = *(_DWORD *)(v21 + 56);
  if ( !v50 )
    goto LABEL_61;
  v29 = v50;
  v30 = (unsigned int *)(v21 + 120);
  *(_QWORD *)&v51 = v21 + 120;
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_55:
    v17 = (unsigned int)(v17 + 1);
    v30 = (unsigned int *)(v51 + 4);
    v48 = v17;
    *(_QWORD *)&v51 = v51 + 4;
    if ( (unsigned int)v17 >= v29 )
      goto LABEL_61;
  }
  if ( *(_DWORD *)(v31 + v21) != 64 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v31 + v21) - 65);
    if ( *(_DWORD *)(v31 + v21) == 65 )
    {
      v17 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v31 + v21 + 10) )
          v28 = (char *)(v31 + v21 + 24);
        v22 = *(_BYTE *)(v31 + v21 + 8);
        v23 = *(_BYTE **)(v31 + v21 + 16);
        v24 = *(_BYTE *)(v31 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v21) == 66 )
    {
      v17 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v21 + 12) )
          v28 = (char *)(v31 + v21 + 32);
        v23 = *(_BYTE **)(v31 + v21 + 24);
        goto LABEL_60;
      }
    }
    goto LABEL_53;
  }
  v17 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_53:
    if ( v46 )
      goto LABEL_61;
    LODWORD(v17) = v48;
    v29 = v50;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v31 + v21 + 10) )
    v28 = (char *)(v31 + v21 + 24);
  v23 = *(_BYTE **)(v31 + v21 + 16);
LABEL_60:
  v24 = *(_BYTE *)(v31 + v21 + 9);
  v22 = *(_BYTE *)(v31 + v21 + 8);
LABEL_61:
  if ( v28 )
  {
    v33 = *v28;
    goto LABEL_64;
  }
LABEL_86:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
