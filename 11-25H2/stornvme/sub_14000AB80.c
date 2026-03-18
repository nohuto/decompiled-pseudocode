/*
 * XREFs of sub_14000AB80 @ 0x14000AB80
 * Callers:
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 * Callees:
 *     sub_14000B210 @ 0x14000B210 (sub_14000B210.c)
 */

char __fastcall sub_14000AB80(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rsi
  __int16 v8; // cx
  int v9; // eax
  __int64 v10; // rax
  unsigned __int16 v11; // r12
  unsigned __int16 v12; // bx
  __int64 v13; // rcx
  __int64 v14; // rax
  _WORD *v15; // r8
  unsigned __int16 *v16; // r10
  _QWORD *v17; // r13
  unsigned __int16 *v18; // rax
  int v19; // edx
  int v20; // r9d
  unsigned __int16 i; // r11
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r8
  __int64 v24; // r13
  bool v25; // zf
  unsigned __int8 v26; // cl
  int v27; // ebx
  int v28; // ebx
  __int64 v29; // r8
  unsigned int j; // ecx
  __int64 v31; // rcx
  unsigned int m; // ecx
  int v33; // ecx
  int v34; // ebx
  _OWORD *v35; // rdx
  __int64 v36; // r8
  unsigned int n; // ecx
  __int64 v38; // rcx
  unsigned int jj; // ecx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // r9
  char result; // al
  __int16 v44; // r12
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // r9
  unsigned __int16 v47; // r11
  unsigned int k; // edx
  unsigned int ii; // edx
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r8
  signed __int32 v56[6]; // [rsp+8h] [rbp-69h] BYREF
  _QWORD *v57; // [rsp+28h] [rbp-49h]
  int *v58; // [rsp+30h] [rbp-41h]
  char *v59; // [rsp+38h] [rbp-39h]
  int v60; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v61[3]; // [rsp+4Ch] [rbp-25h]
  __int64 v62; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v63[2]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v64; // [rsp+70h] [rbp-1h]
  char v65; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int16 v66; // [rsp+E0h] [rbp+6Fh]
  unsigned int v67; // [rsp+E8h] [rbp+77h] BYREF
  unsigned __int16 v68; // [rsp+F0h] [rbp+7Fh]

  v68 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = *(_WORD *)(a3 + 48);
  v63[0] = 1LL;
  v63[1] = 0LL;
  v64 = 0LL;
  if ( !v8 )
  {
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 976));
    v8 = *(_WORD *)(a3 + 48);
  }
  v9 = *(_DWORD *)(a1 + 24);
  if ( (v9 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    result = 0;
  }
  else if ( (v9 & 0x100) != 0 && v8 )
  {
    *(_BYTE *)(a2 + 3) = 2;
    result = 0;
  }
  else
  {
    v57 = v63;
    StorPortExtendedFunction(93LL, a1, 1LL, a3 + 64);
    v10 = *(unsigned __int16 *)(a3 + 48);
    if ( (_WORD)v10 )
    {
      v11 = *(_WORD *)(a1 + 326);
      v12 = *(_WORD *)(a1 + 328);
      v13 = 208 * v10;
      v14 = *(_QWORD *)(a1 + 936);
      v15 = (_WORD *)(v13 + v14 - 156);
      v16 = (unsigned __int16 *)(v13 + v14 - 152);
      v17 = (_QWORD *)(v13 + v14 - 176);
      v18 = (unsigned __int16 *)(v13 + v14 - 154);
    }
    else
    {
      v11 = *(_WORD *)(a1 + 324);
      v15 = (_WORD *)(a1 + 388);
      v12 = v11;
      v16 = (unsigned __int16 *)(a1 + 392);
      v17 = (_QWORD *)(a1 + 368);
      v18 = (unsigned __int16 *)(a1 + 390);
    }
    v19 = (unsigned __int16)*v15;
    v20 = *v18;
    if ( v20 == v19 + 1 || !(_WORD)v20 && v19 == v11 - 1 )
    {
LABEL_69:
      StorPortNotification(4100LL, a1, v63);
      result = 0;
      *(_BYTE *)(a2 + 3) = 5;
    }
    else
    {
      *v15 = v19 + 1;
      if ( (_WORD)v19 + 1 == v11 )
        *v15 = 0;
      for ( i = *v16; i < v12; ++i )
      {
        v22 = i + 1;
        if ( !*(_QWORD *)(32LL * i + *v17 + 16) )
        {
          v23 = i;
          *v16 = v22;
          if ( v22 == v12 )
            *v16 = 0;
          goto LABEL_20;
        }
      }
      v45 = *v16;
      v46 = 0;
      v66 = *v16;
      while ( 1 )
      {
        if ( v46 >= v45 )
        {
          if ( *v15 )
            v44 = *v15 - 1;
          else
            v44 = v11 - 1;
          *v15 = v44;
          goto LABEL_69;
        }
        v47 = v46 + 1;
        if ( !*(_QWORD *)(32LL * v46 + *v17 + 16) )
          break;
        v45 = v66;
        ++v46;
      }
      v23 = v46;
      *v16 = v47;
      if ( v47 == v12 )
        *v16 = 0;
LABEL_20:
      *(_WORD *)(v7 + 4216) = v19;
      *(_WORD *)(v7 + 4214) = v23;
      v24 = 0LL;
      v25 = *(_BYTE *)(a2 + 2) == 40;
      v62 = 0LL;
      if ( v25 )
        v26 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v26 = *(_BYTE *)(a2 + 7);
      v27 = v26;
      if ( *(_WORD *)(a3 + 48) )
        v24 = 392LL * *(unsigned __int16 *)(a3 + 58) + *(_QWORD *)(a1 + 944) - 392LL;
      *(_WORD *)(v7 + 4098) = v23;
      sub_14000B210(a1, a2, v7 + 4096);
      v28 = v27 << 8;
      *(_QWORD *)(32LL * *(unsigned __int16 *)(v7 + 4214) + *(_QWORD *)(a3 + 32) + 16) = a2;
      *(_WORD *)(32LL * *(unsigned __int16 *)(v7 + 4214) + *(_QWORD *)(a3 + 32) + 24) = *(_WORD *)(v7 + 4216);
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        v33 = 24;
      }
      else if ( a2 == a1 + 1016 )
      {
LABEL_71:
        v33 = 24;
      }
      else
      {
        v29 = *(_QWORD *)(a1 + 1392);
        if ( v29 )
        {
          for ( j = 0; j < *(unsigned __int16 *)(a1 + 1552); ++j )
          {
            if ( a2 == v29 + ((unsigned __int64)j << 7) + 8 )
              goto LABEL_71;
          }
        }
        v31 = *(_QWORD *)(a1 + 1400);
        if ( v31 )
        {
          for ( k = 0; k < *(unsigned __int16 *)(a1 + 1554); ++k )
          {
            if ( a2 == v31 + ((unsigned __int64)k << 7) + 8 )
              goto LABEL_71;
          }
        }
        for ( m = 0; m < 2; ++m )
        {
          if ( a2 == a1 + ((unsigned __int64)m << 7) + 1144 )
            goto LABEL_71;
        }
        v33 = 8;
      }
      v34 = v33 | v28;
      v35 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4216));
      *v35 = *(_OWORD *)(v7 + 4096);
      v35[1] = *(_OWORD *)(v7 + 4112);
      v35[2] = *(_OWORD *)(v7 + 4128);
      v35[3] = *(_OWORD *)(v7 + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4216) + 8) = *(_WORD *)(v7 + 4214);
      if ( ((*(_BYTE *)(a1 + 21) & 1) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0)
        && *(_DWORD *)(a2 + 12) != 251658240
        && a2 != a1 + 1016 )
      {
        v36 = *(_QWORD *)(a1 + 1392);
        if ( v36 )
        {
          for ( n = 0; n < *(unsigned __int16 *)(a1 + 1552); ++n )
          {
            if ( a2 == v36 + ((unsigned __int64)n << 7) + 8 )
              goto LABEL_53;
          }
        }
        v38 = *(_QWORD *)(a1 + 1400);
        if ( v38 )
        {
          for ( ii = 0; ii < *(unsigned __int16 *)(a1 + 1554); ++ii )
          {
            if ( a2 == v38 + ((unsigned __int64)ii << 7) + 8 )
              goto LABEL_53;
          }
        }
        for ( jj = 0; jj < 2; ++jj )
        {
          if ( a2 == a1 + ((unsigned __int64)jj << 7) + 1144 )
            goto LABEL_53;
        }
        StorPortExtendedFunction(47LL, a1, 0LL, &v62);
        *(_QWORD *)(32LL * *(unsigned __int16 *)(v7 + 4214) + *(_QWORD *)(a3 + 32) + 8) = v62;
        v40 = *(_QWORD *)(a3 + 40);
        if ( v40 )
        {
          *(_QWORD *)(v40 + 16LL * *(unsigned __int16 *)(v7 + 4214)) = 0LL;
          *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * *(unsigned __int16 *)(v7 + 4214) + 8) = 0LL;
        }
        v34 |= 0x20u;
      }
LABEL_53:
      *(_DWORD *)(32LL * *(unsigned __int16 *)(v7 + 4214) + *(_QWORD *)(a3 + 32)) = v34;
      _InterlockedIncrement16((volatile signed __int16 *)(a3 + 136));
      v41 = 0;
      if ( (unsigned __int16)(*(_WORD *)(v7 + 4216) + 1) != v68 )
        v41 = (unsigned __int16)(*(_WORD *)(v7 + 4216) + 1);
      **(_DWORD **)(a3 + 16) = v41;
      _InterlockedOr(v56, 0);
      if ( (v34 & 0x20) != 0 && (*(_DWORD *)(a1 + 108) & 2) != 0 && *(_QWORD *)(a3 + 40) )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v62);
        *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * *(unsigned __int16 *)(v7 + 4214)) = v62;
      }
      StorPortNotification(4100LL, a1, v63);
      if ( v24 && *(_BYTE *)(v24 + 248) )
      {
        v67 = 0;
        StorPortExtendedFunction(92LL, a1, &v67, v42);
        v50 = *(_QWORD *)(v24 + 256);
        if ( v50 )
        {
          v54 = -10LL * *(unsigned int *)(v24 + 252);
          v65 = 0;
          v55 = *(_QWORD *)(v50 + 8LL * v67);
          v59 = &v65;
          v58 = 0LL;
          v57 = 0LL;
          StorPortExtendedFunction(89LL, a1, v55, v54);
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
          {
            v51 = *(_QWORD *)(a1 + 264);
            v52 = *(_QWORD *)(v51 + 72LL * v67 + 8);
            if ( v52 )
            {
              v61[0] = 0;
              LOWORD(v61[0]) = *(_WORD *)(v51 + 72LL * v67 + 16);
              _BitScanForward64(&v53, v52);
              *(_DWORD *)((char *)v61 + 2) = v53;
              StorPortNotification(4107LL, a1, v24 + 264);
            }
          }
          v58 = &v60;
          v57 = 0LL;
          v60 = 0;
          StorPortNotification(4098LL, a1, v24 + 264);
        }
      }
      result = 1;
    }
  }
  if ( !*(_WORD *)(a3 + 48) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 976));
  return result;
}
