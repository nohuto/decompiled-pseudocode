/*
 * XREFs of sub_14000BA00 @ 0x14000BA00
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140004670 @ 0x140004670 (sub_140004670.c)
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000BA00(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rbp
  __int64 *v6; // rax
  char v7; // si
  __int64 v8; // r15
  unsigned int v9; // eax
  int v10; // r12d
  bool v11; // zf
  unsigned __int8 *v12; // r10
  unsigned int v13; // eax
  unsigned int *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned int i; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int *v23; // rcx
  __int64 v24; // r9
  unsigned __int16 v25; // r13
  int v26; // ecx
  unsigned int v27; // r14d
  bool v28; // cl
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int16 v32; // ax
  unsigned __int8 v33; // cl
  __int64 v34; // rcx
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // edx
  bool v40; // [rsp+20h] [rbp-68h]
  unsigned int v41; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v42; // [rsp+28h] [rbp-60h]
  __int128 v43; // [rsp+30h] [rbp-58h] BYREF
  int v44; // [rsp+40h] [rbp-48h] BYREF

  v4 = (__int64 *)(a2 + 104);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *v4;
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) == 0 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    return 0LL;
  }
  *(_BYTE *)(v5 + 4225) &= 0xFCu;
  v6 = (__int64 *)(a2 + 56);
  v7 = *(_BYTE *)(a2 + 2);
  if ( v7 == 40 )
    v6 = v4;
  v8 = *v6;
  v9 = *v6 & 0xFFF;
  if ( v9 )
    v8 = v8 - v9 + 4096;
  v10 = 0;
  v41 = 0;
  v11 = (*(_BYTE *)(v8 + 4225) & 1) == 0;
  v42 = 0;
  v40 = 0;
  if ( !v11 )
    goto LABEL_58;
  v44 = 0;
  v12 = 0LL;
  v43 = 0LL;
  if ( v7 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v13 = *(_DWORD *)(a2 + 56);
      if ( v13 )
      {
        v14 = (unsigned int *)(a2 + 120);
        v15 = v13;
        while ( 1 )
        {
          v16 = *v14;
          if ( (unsigned int)v16 < 0x80 || (unsigned int)v16 > *(_DWORD *)(a2 + 16) )
            goto LABEL_20;
          v17 = a2 + v16;
          if ( *(_DWORD *)(a2 + v16) == 64 )
          {
            if ( *(_BYTE *)(v17 + 10) )
              goto LABEL_85;
          }
          else
          {
            if ( *(_DWORD *)(a2 + v16) != 65 )
            {
              if ( *(_DWORD *)(a2 + v16) == 66 && *(_DWORD *)(v17 + 12) )
                v12 = (unsigned __int8 *)(v17 + 32);
              goto LABEL_20;
            }
            if ( *(_BYTE *)(v17 + 10) )
LABEL_85:
              v12 = (unsigned __int8 *)(v17 + 24);
          }
LABEL_20:
          ++v14;
          if ( !--v15 )
            goto LABEL_21;
        }
      }
    }
  }
  else if ( !v7 && *(_BYTE *)(a2 + 10) )
  {
    v12 = (unsigned __int8 *)(a2 + 72);
LABEL_21:
    if ( v12 )
    {
      v18 = *v12;
      if ( v18 == 138 || (v36 = v18 - 40) == 0 || (v37 = v36 - 2) == 0 || v37 == 94 )
      {
        if ( v7 == 40 )
        {
          v19 = *(_DWORD *)(a2 + 56);
          if ( v19 )
          {
            for ( i = 0; i < v19; ++i )
            {
              v21 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v21 >= 0x80 && (unsigned int)v21 < *(_DWORD *)(a2 + 16) )
              {
                v22 = a2 + v21;
                if ( *(_DWORD *)(a2 + v21) == 128 )
                  goto LABEL_32;
              }
            }
          }
        }
        v23 = (unsigned int *)(a2 + 16);
        v22 = 0LL;
        if ( v7 == 40 )
LABEL_32:
          v23 = (unsigned int *)(a2 + 60);
        if ( v23 )
          v42 = *v23;
        if ( v22 )
          v40 = (*(_BYTE *)(v22 + 8) & 2) != 0;
      }
    }
  }
  *(_QWORD *)&v43 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v43);
  v25 = WORD4(v43);
  if ( (_WORD)v44 == 0xFFFF && BYTE2(v44) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v44, v24);
  StorPortExtendedFunction(56LL, a1, &v44, &v41);
  v26 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
  v27 = v41;
  v28 = (v26 & 0x4000) != 0;
  if ( (*(_BYTE *)(v8 + 4225) & 1) != 0 )
  {
LABEL_58:
    v32 = *(_WORD *)(a1 + 384);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 20) )
    {
      v31 = *(_QWORD *)(a1 + 936);
    }
    else
    {
      v29 = *(unsigned __int16 *)(a1 + 234);
      if ( v41 >= v29 )
        v27 = v41 % v29;
      v30 = *(_QWORD *)(a1 + 264);
      if ( v28 )
      {
        if ( !*(_QWORD *)(v30 + 72LL * v27 + 64) )
          sub_14002079C(a1, v27, v25);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v27 + 64);
      }
      else
      {
        if ( !*(_QWORD *)(v30 + 72LL * v27 + 56) )
          sub_140004670(a1, v27, v25, 0);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v27 + 56);
      }
      if ( *(_BYTE *)(a1 + 3752) && v42 )
      {
        v38 = *(_DWORD *)(a1 + 3764);
        if ( (v38 & 0x80u) == 0 && (v42 > *(_DWORD *)(a1 + 3760) || v40) )
        {
          LOWORD(v39) = *(_WORD *)(a1 + 334) + v27 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334));
        }
        else
        {
          if ( (v38 & 0x40) != 0 )
          {
            v32 = *(_WORD *)(208LL * (v27 % *(unsigned __int16 *)(a1 + 332)) + *(_QWORD *)(a1 + 936) + 48);
            goto LABEL_51;
          }
          v39 = v27 % *(unsigned __int16 *)(a1 + 334);
        }
        v32 = *(_WORD *)(208LL * (unsigned __int16)v39 + *(_QWORD *)(a1 + 936) + 48);
        goto LABEL_51;
      }
    }
    v32 = *(_WORD *)(v31 + 48);
  }
LABEL_51:
  *(_WORD *)(v8 + 4212) = v32;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v33 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v33 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v33 < *(_DWORD *)(a1 + 224) )
  {
    v34 = *(_QWORD *)(a1 + 8LL * v33 + 1672);
    if ( v34 )
      v10 = *(_DWORD *)(v34 + 16);
  }
  *(_DWORD *)(v5 + 4100) = v10;
  *(_BYTE *)(v5 + 4096) = 0;
  return 0LL;
}
