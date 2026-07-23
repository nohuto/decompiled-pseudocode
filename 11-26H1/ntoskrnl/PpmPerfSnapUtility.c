/*
 * XREFs of PpmPerfSnapUtility @ 0x140417360
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140417240 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417E30 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  unsigned __int64 v8; // r13
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int16 v15; // r9
  char v16; // cl
  unsigned __int64 v17; // rcx
  char v18; // cl
  unsigned __int64 v19; // rcx
  char v20; // cl
  unsigned __int64 v21; // rcx
  char v22; // cl
  __int64 v23; // r9
  unsigned int v24; // esi
  __int64 v25; // r13
  signed int v26; // ebx
  __int64 v27; // r12
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  unsigned __int8 v31; // al
  char v32; // cl
  unsigned int v33; // r10d
  unsigned int m; // eax
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  char v38; // cl
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned int v43; // r10d
  unsigned int k; // r8d
  unsigned int v45; // r10d
  unsigned int i; // r8d
  __int64 v47; // rax
  unsigned int v48; // r10d
  unsigned int j; // r8d
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h]
  __int16 v55; // [rsp+90h] [rbp+8h]
  unsigned __int64 v56; // [rsp+98h] [rbp+10h]
  unsigned __int64 v57; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 64);
    v4 = 1LL;
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
    v7 = *(_DWORD **)(v1 + 152);
    v8 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
    v9 = *(_QWORD **)(v1 + 88);
    v10 = v8;
    if ( !v8 )
      v10 = 1LL;
    v53 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
    v52 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
    v54 = v5;
    v56 = v3 / v10;
    if ( !(unsigned int)(v3 / v10) )
    {
      if ( v5 )
        LODWORD(v56) = *(_DWORD *)(v5 + 164);
      else
        LODWORD(v56) = 100;
    }
    if ( *(_BYTE *)(a1 + 68) )
    {
      v11 = *(_QWORD *)v7 - *v9;
      v12 = v11;
      v57 = v11;
      if ( !v11 )
        v12 = 1LL;
      v13 = 100LL * (*((_QWORD *)v7 + 1) - v9[1]) / v12;
      v14 = *(_QWORD *)v7 - *v9;
      v15 = (unsigned __int8)v13;
      if ( (unsigned __int8)v13 > 0x64u )
        v15 = 100;
      v55 = v15;
      if ( !v11 )
        v14 = 1LL;
      v16 = 100LL * (*((_QWORD *)v7 + 2) - v9[2]) / v14;
      if ( (unsigned __int8)v16 > 0x64u )
        v16 = 100;
      *(_BYTE *)(v1 + 232) = v16;
      v17 = v11;
      if ( !v11 )
        v17 = 1LL;
      v18 = 100LL * (*((_QWORD *)v7 + 3) - v9[3]) / v17;
      if ( (unsigned __int8)v18 > 0x64u )
        v18 = 100;
      *(_BYTE *)(v1 + 233) = v18;
      v19 = v11;
      if ( !v11 )
        v19 = 1LL;
      v20 = 100LL * (*((_QWORD *)v7 + 4) - v9[4]) / v19;
      if ( (unsigned __int8)v20 > 0x64u )
        v20 = 100;
      *(_BYTE *)(v1 + 234) = v20;
      v21 = v11;
      if ( !v11 )
        v21 = 1LL;
      v22 = 100LL * (*((_QWORD *)v7 + 5) - v9[5]) / v21;
      if ( (unsigned __int8)v22 > 0x64u )
        v22 = 100;
      *(_BYTE *)(v1 + 235) = v22;
      if ( PopHeteroSystem )
      {
        v23 = 0LL;
        v24 = 0;
        v25 = 0LL;
        do
        {
          v26 = 0;
          v27 = 2LL * (int)v24;
          do
          {
            if ( PpmHeteroMultiClassParkingEnabled )
            {
              v28 = v26 + v27;
              v29 = KiDynamicHeteroCpuPolicy[v28];
              if ( PpmHeteroHgsParkingEnabled )
              {
                if ( (unsigned int)(v29 - 3) > 1 )
                {
                  v45 = v7[12];
                  for ( i = 0; i < v45; v23 += *(_QWORD *)&v7[2 * v47 + 14] - v9[v47 + 7] )
                    v47 = v45 * (v26 + 2 * v24) + i++;
                }
              }
              else
              {
                if ( v29 == 2 || (v30 = v29 - 1) == 0 )
                {
                  v31 = *((_BYTE *)&stru_140FC11F0.CycleTime + v28);
                }
                else if ( (unsigned int)(v30 - 2) > 1 )
                {
                  v31 = -1;
                }
                else
                {
                  v31 = *((_BYTE *)&stru_140FC11F0.StackBase + v28);
                }
                if ( v31 > *(_BYTE *)(a1 + 88) )
                {
                  v48 = v7[12];
                  for ( j = 0; j < v48; v23 += *(_QWORD *)&v7[2 * v50 + 14] - v9[v50 + 7] )
                    v50 = v48 * (v26 + 2 * v24) + j++;
                }
                else if ( v31 == *(_BYTE *)(a1 + 88) )
                {
                  v43 = v7[12];
                  for ( k = 0; k < v43; v25 += *(_QWORD *)&v7[2 * v51 + 14] - v9[v51 + 7] )
                    v51 = v43 * (v26 + 2 * v24) + k++;
                }
              }
            }
            else if ( KiDynamicHeteroCpuPolicy[v27 + v26] != 3 )
            {
              v33 = v7[12];
              for ( m = 0; m < v33; v23 += *(_QWORD *)&v7[2 * v35 + 14] - v9[v35 + 7] )
                v35 = v33 * (v26 + 2 * v24) + m++;
            }
            ++v26;
          }
          while ( (unsigned int)v26 < 2 );
          ++v24;
        }
        while ( v24 < 7 );
        v36 = v57;
        v4 = 1LL;
        v6 = v53;
        v37 = v57;
        if ( !v57 )
          v37 = 1LL;
        v38 = 100 * v23 / v37;
        if ( (unsigned __int8)v38 > 0x64u )
          v38 = 100;
        *(_BYTE *)(v1 + 236) = v38;
        if ( !v57 )
          v36 = 1LL;
        v39 = 100 * v25;
        v8 = v52;
        v40 = v39 / v36;
        v5 = v54;
        v32 = v40;
        if ( (unsigned __int8)v40 > 0x64u )
          v32 = 100;
        v15 = v55;
      }
      else
      {
        *(_BYTE *)(v1 + 236) = 100;
        v32 = 100;
      }
      *(_BYTE *)(v1 + 237) = v32;
    }
    else if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v10, v3 % v10, v5, 0LL) )
    {
      *(_BYTE *)(v1 + 237) = 100;
    }
    *(_WORD *)(a1 + 60) = v15;
    if ( v5 )
    {
      v41 = v8;
      if ( !v8 )
        v41 = v4;
      v42 = (*(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 56)) / v41;
      if ( !(_DWORD)v42 )
        LODWORD(v42) = *(_DWORD *)(v5 + 160);
      *(_DWORD *)(v5 + 160) = v42;
      *(_DWORD *)(v5 + 164) = v56;
    }
    *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 96);
    *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 112);
    *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 128);
    *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 144);
    memmove(v9, v7, 112 * v7[12] + 56);
    if ( *(_BYTE *)(a1 + 68) )
    {
      *(_QWORD *)(a1 + 104) += v8;
      *(_QWORD *)(a1 + 112) += v6;
    }
  }
}
