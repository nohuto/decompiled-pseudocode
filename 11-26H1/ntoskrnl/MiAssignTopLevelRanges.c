/*
 * XREFs of MiAssignTopLevelRanges @ 0x140CFF498
 * Callers:
 *     MiInitializeSystemVa @ 0x140D10EF8 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiHyperSpaceSize @ 0x140478EE8 (MiHyperSpaceSize.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAddSubRegionEntropy @ 0x140CFF1C0 (MiAddSubRegionEntropy.c)
 *     MiAssignSystemVa @ 0x140CFF388 (MiAssignSystemVa.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  int i; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  int j; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 result; // rax
  unsigned __int64 v34; // rcx
  bool v35; // zf
  int *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  _DWORD v40[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D0h]
  _BYTE Base[4]; // [rsp+38h] [rbp-C8h] BYREF
  char v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+E0h] [rbp-20h]
  char v45; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  int v47[4]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+20h]

  memset_0(v40, 0, 0x1B0uLL);
  v41 = a2;
  LODWORD(v4) = 1;
  for ( i = 2; i != 6; ++i )
  {
    v6 = (unsigned int)v4;
    v4 = (unsigned int)(v4 + 1);
    v7 = 3 * v6;
    v40[2 * v7] = i;
    *(_QWORD *)&Base[8 * v7 - 8] = 0x100000000000LL;
  }
  v8 = MiFlags;
  v9 = 3 * v4;
  v40[2 * v9] = 6;
  *(_QWORD *)&Base[8 * v9 - 8] = 0LL;
  if ( (v8 & 0x2000000000LL) != 0 )
    *(_QWORD *)&Base[24 * v4 - 8] = 0x100000000000LL;
  v10 = &v43;
  v11 = (unsigned int)(v4 + 1);
  v12 = 7LL;
  v13 = 3 * v11;
  v40[2 * v13] = 7;
  v14 = 3LL * (unsigned int)(v11 + 1);
  *(_QWORD *)&Base[8 * v13 - 8] = 0x100000000000LL;
  v40[2 * v14] = 1;
  *(_QWORD *)&Base[8 * v14 - 8] = 0LL;
  do
  {
    *(_DWORD *)v10 = ExGenRandom(1, v11);
    v10 += 24;
    --v12;
  }
  while ( v12 );
  qsort(Base, 7uLL, 0x18uLL, MiRegionAssignmentSort);
  v44 = 8;
  v46 = 0x28000000000LL;
  v47[0] = 9;
  v15 = MiHyperSpaceSize();
  v16 = 10LL;
  v49 = 12;
  v50 = 0LL;
  LODWORD(v17) = 10;
  v48 = ((v15 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x10000000000LL;
  for ( j = 10; j != 12; ++j )
  {
    v17 = (unsigned int)(v17 + 1);
    v19 = 3 * v17;
    v40[2 * v19] = j;
    *(_QWORD *)&Base[8 * v19 - 8] = 0x10000000000LL;
  }
  v20 = (unsigned int)(v17 + 1);
  v21 = &v45;
  v22 = 3 * v20;
  v23 = (unsigned int)(v20 + 1);
  v40[2 * v22] = 13;
  *(_QWORD *)&Base[8 * v22 - 8] = 0x8000000000LL;
  v24 = 3 * v23;
  v25 = (unsigned int)(v23 + 1);
  v40[2 * v24] = 14;
  *(_QWORD *)&Base[8 * v24 - 8] = 0x8000000000LL;
  v26 = 3 * v25;
  v27 = (unsigned int)(v25 + 1);
  v40[2 * v26] = 15;
  *(_QWORD *)&Base[8 * v26 - 8] = 0x8000000000LL;
  v28 = 3 * v27;
  *(_QWORD *)&v40[2 * v28 + 2] = 0x140000000LL & 0xFFFFFF8000000000uLL;
  v29 = 3LL * (unsigned int)(v27 + 1);
  v40[2 * v28] = 17;
  *(_QWORD *)&Base[8 * v28 - 8] = 0x8000000000LL;
  v40[2 * v29] = 16;
  *(_QWORD *)&Base[8 * v29 - 8] = 0x8000000000LL;
  do
  {
    *(_DWORD *)v21 = ExGenRandom(1, v27);
    v21 += 24;
    --v16;
  }
  while ( v16 );
  qsort(v47, 9uLL, 0x18uLL, MiRegionAssignmentSort);
  v30 = 0LL;
  v31 = 18LL;
  while ( (unsigned int)v30 < 0x12 )
  {
    v32 = *(_QWORD *)&Base[24 * v30 - 8];
    if ( v32 )
    {
      result = *(_QWORD *)&v40[6 * v30 + 2];
      if ( !result )
      {
        v34 = (v32 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
        v35 = v40[6 * v30] == 1;
        *(_QWORD *)&Base[24 * v30 - 8] = v34;
        result = MiAssignSystemVa(v34 >> 39, a1, v35);
        if ( !result )
          return result;
      }
      *(_QWORD *)&v40[6 * v30 + 2] = result;
    }
    v30 = (unsigned int)(v30 + 1);
  }
  v36 = v40;
  do
  {
    v37 = *((_QWORD *)v36 + 1);
    v38 = *v36;
    v36 += 6;
    v38 *= 2LL;
    qword_140E37CF0[v38] = v37;
    qword_140E37CF8[v38] = *((_QWORD *)v36 - 1);
    --v31;
  }
  while ( v31 );
  v39 = qword_140E37D80;
  qword_140E37D88 -= 0x10000000000LL;
  qword_140E37DB0 = qword_140E37D80;
  qword_140E37DB8 = 0x10000000000LL;
  qword_140E37D80 += 0x10000000000LL;
  qword_140E2DFD8 = qword_140E37DB0 + 0x8000000000LL;
  MiAddSubRegionEntropy(qword_140E37DB0 + 0x8000000000LL, v39);
  return 1LL;
}
