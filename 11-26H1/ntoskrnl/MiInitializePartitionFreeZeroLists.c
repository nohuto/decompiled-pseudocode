/*
 * XREFs of MiInitializePartitionFreeZeroLists @ 0x14086FDC8
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     MiMakeColor @ 0x14041CB50 (MiMakeColor.c)
 *     MiColorSetHighLow @ 0x140456BC0 (MiColorSetHighLow.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiInitializeFreeZeroPfnListHead @ 0x1406F5508 (MiInitializeFreeZeroPfnListHead.c)
 */

__int64 __fastcall MiInitializePartitionFreeZeroLists(_QWORD *a1)
{
  __int64 result; // rax
  _SLIST_HEADER *v2; // r13
  unsigned int v3; // ebx
  bool v4; // cf
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _SLIST_HEADER **v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbp
  int *v14; // rax
  unsigned int v15; // r10d
  _DWORD *v16; // r15
  int v17; // edx
  __int64 i; // r14
  __int64 v19; // rcx
  int v20; // r11d
  unsigned __int8 v21; // di
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // r12d
  __int64 *v25; // r13
  unsigned int v26; // eax
  int v27; // ebp
  int v28; // r11d
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-88h]
  __int64 v32; // [rsp+38h] [rbp-80h]
  int *v33; // [rsp+40h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-70h]
  _SLIST_HEADER *v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  __int16 v38; // [rsp+C0h] [rbp+8h]
  int Color; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp+18h]
  unsigned int v41; // [rsp+D8h] [rbp+20h]

  result = a1[2093];
  v2 = (_SLIST_HEADER *)a1[2094];
  v3 = 0;
  v4 = KeNumberNodes != 0;
  v5 = a1[939];
  v6 = a1[2];
  v31 = result;
  v35 = v2;
  while ( 1 )
  {
    v34 = v6;
    if ( !v4 )
      break;
    v7 = (unsigned int)dword_140E2D90C;
    v8 = (_QWORD *)(v6 + 4096);
    v9 = 3LL;
    v10 = 8LL * (unsigned int)dword_140E2D90C;
    do
    {
      *v8 = v5;
      v5 += v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    v37 = v5;
    v11 = (_SLIST_HEADER **)(v6 + 13856);
    v12 = 2LL;
    do
    {
      *v11 = v2;
      if ( (_DWORD)v7 )
      {
        v13 = v7;
        do
        {
          InitializeSListHead(v2++);
          --v13;
        }
        while ( v13 );
        v35 = v2;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v14 = dword_140E2D900;
    v15 = 0;
    v33 = dword_140E2D900;
    v16 = (_DWORD *)v6;
    do
    {
      v17 = *v14;
      v41 = *v14;
      v38 = 0;
      v36 = v15 != 3;
      for ( i = 0LL; i <= v36; ++i )
      {
        v19 = 0LL;
        v20 = 0;
        v32 = 0LL;
        do
        {
          v21 = 0;
          if ( byte_140E2D898 )
          {
            v22 = 2 * (v19 + 2 * i);
            do
            {
              v23 = v31;
              v24 = 0;
              v25 = (__int64 *)&v16[4 * v22 + 200 + 4 * v21 + 2 * v22 + 2 * v21];
              do
              {
                *v25 = v23;
                LOBYTE(v26) = 0;
                v40 = 0;
                if ( v17 )
                {
                  v27 = (v20 & 1) << 20;
                  do
                  {
                    Color = MiMakeColor(v3, v21, v26, v15, v24);
                    MiColorSetHighLow(&Color, v38);
                    MiInitializeFreeZeroPfnListHead(v31, v28, v27 | Color & 0xFFEFFFFF);
                    v23 = v29 + 88;
                    v17 = v41;
                    v26 = v40 + 1;
                    v31 = v23;
                    v40 = v26;
                  }
                  while ( v26 < v41 );
                }
                ++v24;
                ++v25;
              }
              while ( v24 < 3 );
              ++v21;
            }
            while ( v21 < (unsigned __int8)byte_140E2D898 );
            v19 = v32;
          }
          ++v19;
          ++v20;
          v32 = v19;
        }
        while ( v20 <= 1 );
        ++v38;
      }
      v30 = __rdtsc();
      ++v15;
      *v16 = (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) >> 4;
      v16 += 256;
      v14 = ++v33;
    }
    while ( v15 <= 3 );
    ++v3;
    result = (unsigned __int16)KeNumberNodes;
    v6 = v34 + 56320;
    v2 = v35;
    v4 = v3 < (unsigned __int16)KeNumberNodes;
    v5 = v37;
  }
  return result;
}
