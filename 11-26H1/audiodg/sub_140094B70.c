/*
 * XREFs of sub_140094B70 @ 0x140094B70
 * Callers:
 *     sub_1400942C8 @ 0x1400942C8 (sub_1400942C8.c)
 * Callees:
 *     sub_140001008 @ 0x140001008 (sub_140001008.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140094B70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned __int64 a11)
{
  __int64 v12; // r10
  __int64 v14; // r15
  __int64 v15; // r9
  int v16; // r11d
  signed __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // r13d
  unsigned __int64 v21; // rsi
  BOOL v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r14
  double v33; // xmm0_8
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v35; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+50h]

  v37 = a3;
  v12 = a6;
  v14 = a7;
  v15 = a3;
  v16 = a9;
  v17 = a2;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 92) = a8;
  *(_DWORD *)(a1 + 100) = a10;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 72) = v14;
  *(_DWORD *)(a1 + 96) = v16;
  v18 = a11;
  *(_QWORD *)(a1 + 104) = a11;
  v19 = *(_DWORD *)(v12 + 8);
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  if ( a3 != a2 )
  {
    if ( (unsigned int)dword_1400E7428 > 4 )
    {
      a5 = a2;
      a8 = v20;
      a10 = v19;
      v36 = a1;
      a6 = *(_QWORD *)(((unsigned __int64)v20 << 6) + v14 + 40);
      v35 = *(_QWORD *)(((unsigned __int64)v19 << 6) + v14 + 40);
      LODWORD(a7) = *(_DWORD *)(a1 + 92);
      sub_140001008(
        v18,
        (__int64)&unk_1400D3BCF,
        a3,
        a3,
        (__int64)&v36,
        (__int64)&a7,
        (__int64)&a10,
        (__int64)&a8,
        (__int64)&v35,
        (__int64)&a6,
        (__int64)&a5);
      v18 = a11;
      v15 = v37;
      v16 = a9;
    }
    v21 = (unsigned __int64)v19 << 6;
    v22 = !v20 || *(_QWORD *)(((unsigned __int64)(v20 - 1) << 6) + v14 + 40) - *(_QWORD *)(v21 + v14 + 40) >= v18;
    if ( a4 || !v22 )
      v23 = 0LL;
    else
      v23 = 10000000LL;
    v24 = *(_QWORD *)(v21 + v14 + 40);
    v25 = v24 + v23;
    if ( v17 < v24 + v23 )
    {
      v26 = -2005139331;
      v27 = 128;
LABEL_14:
      sub_14000C2A8(
        (int)retaddr,
        v27,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
        v26);
      return v26;
    }
    if ( !a4 && v24 < v25 )
    {
      do
      {
        v29 = (unsigned __int64)((v19 + 1) % *(_DWORD *)(a1 + 100)) << 6;
        v19 = (v19 + 1) % *(_DWORD *)(a1 + 100);
      }
      while ( *(_QWORD *)(v29 + v14 + 40) < v25 );
    }
    if ( v19 == v20 )
    {
LABEL_21:
      v26 = -2147023728;
      v27 = 162;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v30 = (unsigned __int64)v19 << 6;
      if ( *(_QWORD *)(v30 + v14 + 40) > v17 )
        break;
      v19 = (v19 + 1) % *(_DWORD *)(a1 + 100);
      if ( v19 == v20 )
        goto LABEL_21;
    }
    if ( v19 )
      v31 = v19 - 1;
    else
      v31 = (unsigned int)(*(_DWORD *)(a1 + 100) - 1);
    *(_DWORD *)(a1 + 80) = v31;
    if ( *(_QWORD *)(((unsigned __int64)(unsigned int)v31 << 6) + v14 + 40)
       + (unsigned int)(int)((double)*(int *)(((unsigned __int64)(unsigned int)v31 << 6) + v14 + 56)
                           * 10000000.0
                           / (double)v16
                           + 0.5) <= v17 )
    {
      *(_DWORD *)(a1 + 80) = v19;
      v17 = *(_QWORD *)(v30 + v14 + 40);
      v31 = v19;
    }
    v32 = v17 - *(_QWORD *)((v31 << 6) + v14 + 40);
    if ( v32 < 0 )
      v33 = (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1))
          + (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1));
    else
      v33 = (double)(int)v32;
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 92) * (int)(v33 * (double)v16 / 10000000.0 + 0.5);
    while ( 1 )
    {
      if ( (_DWORD)v31 == v20 )
      {
        v26 = -2147023728;
        v27 = 180;
        goto LABEL_14;
      }
      if ( *(_QWORD *)(((unsigned __int64)(unsigned int)v31 << 6) + v14 + 40) == v15 )
        break;
      LODWORD(v31) = (unsigned int)(v31 + 1) % *(_DWORD *)(a1 + 100);
    }
    if ( !(_DWORD)v31 )
      LODWORD(v31) = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a1 + 84) = v31 - 1;
  }
  return 0LL;
}
