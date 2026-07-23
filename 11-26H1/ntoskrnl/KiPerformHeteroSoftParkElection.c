/*
 * XREFs of KiPerformHeteroSoftParkElection @ 0x14022A6A0
 * Callers:
 *     KiPerformSoftParkElection @ 0x14022C024 (KiPerformSoftParkElection.c)
 * Callees:
 *     KiReduceAffinityToRankListMaximums @ 0x14043D1A0 (KiReduceAffinityToRankListMaximums.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiPerformHeteroSoftParkElection(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11
  int v6; // edi
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int8 i; // r9
  _BYTE *v12; // rdx
  __int64 v13; // r8
  unsigned __int8 j; // al
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r8d
  int v28; // r13d
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r10
  __int64 v39; // r10
  __int64 v40; // r9
  unsigned __int8 v41; // cl
  __int64 v42; // rdx
  unsigned __int8 v43; // r11
  unsigned __int8 v44; // r8
  __int64 v45; // r15
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rsi
  __int64 v48; // r10
  unsigned __int8 v49; // r11
  unsigned __int8 v50; // cl
  __int64 v51; // r8
  unsigned __int8 v52; // al
  __int64 v53; // rdx
  int v54; // r8d
  __int64 v55; // rcx
  unsigned __int64 v56; // r8
  unsigned int v57; // r9d
  __int64 v58; // r10
  __int64 v59; // rax
  __int64 v60; // r10
  __int64 v61; // r10
  __int64 v62; // r10
  __int64 v63; // r10
  __int64 v64; // r10
  __int64 v65; // r10
  __int64 v66; // r10
  __int64 v67; // r10
  __int64 v68; // r10
  __int64 v69; // r10
  __int64 v70; // r10
  __int64 v71; // r10
  __int64 v72; // r10
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  int v89; // [rsp+20h] [rbp-E0h]
  int v90; // [rsp+24h] [rbp-DCh]
  __int64 v92; // [rsp+30h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-C8h]
  __int64 v95; // [rsp+48h] [rbp-B8h]
  __int64 v96; // [rsp+50h] [rbp-B0h]
  __int64 v98; // [rsp+60h] [rbp-A0h]
  _OWORD v99[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v100[64]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(unsigned __int16 *)(a1 + 136);
  v9 = a2;
  memset(v99, 0, sizeof(v99));
  v10 = a1;
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( _bittest64(&a5, i) )
    {
      v12 = v99;
      v13 = v5 & *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v6].Flink
                                              + (unsigned int)i)]
                           + 36512);
      for ( j = 0; j < 0x40u; ++j )
      {
        if ( _bittest64(&v13, j) )
          ++*v12;
        ++v12;
      }
    }
  }
  while ( 2 )
  {
    memset_0(v100, 0, sizeof(v100));
    v15 = 0;
    v93 = 0LL;
    v16 = 0LL;
    v90 = 0;
    v96 = 0LL;
    do
    {
      v17 = 0;
      v92 = v16;
      v18 = 0LL;
      v89 = 0;
      v95 = 0LL;
      v19 = v16;
      do
      {
        v20 = *(_BYTE *)(v10 + 185);
        v21 = 0;
        if ( !v20 )
          goto LABEL_15;
        v22 = v18 + v16;
        v98 = v22;
        do
        {
          v23 = *(_QWORD *)(v9 + 8 * (v21 + 8 * v19));
          if ( !v23 )
            goto LABEL_13;
          v28 = KiDynamicHeteroCpuPolicy[v22];
          v29 = v17 + 2 * v15;
          v30 = a1;
          v31 = *(_QWORD *)(a1 + 192);
          v32 = 3LL * (v21 + (unsigned int)v20 * v29);
          v33 = *(_QWORD *)(v31 + 8 * v32 + 16);
          v34 = v33 & *(_QWORD *)(v31 + 8 * v32 + 8);
          v35 = *(_QWORD *)(v31 + 8 * v32) & v34;
          v36 = a4 & v34;
          v37 = a4 & v35;
          v38 = a4 & v33;
          if ( v38 )
          {
            if ( v36 )
            {
              if ( !v37 )
                v37 = v36;
            }
            else
            {
              v36 = v38;
              v37 = v38;
            }
          }
          else
          {
            v36 = *(_QWORD *)(a1 + 128) & a4;
            v38 = v36;
            v37 = v36;
          }
          v39 = a3 & v38;
          if ( v39 )
          {
            if ( KeSoftParkSmtPolicy == 3 )
            {
              v40 = KiReduceAffinityToRankListMaximums(v39, v99);
            }
            else
            {
              v40 = 0LL;
              v41 = 0;
              v42 = 0LL;
              v43 = -1;
              do
              {
                if ( ((1LL << v41) & v39) != 0 )
                {
                  v44 = *((_BYTE *)v99 + v42);
                  if ( v44 == v43 )
                  {
                    v40 |= 1LL << v42;
                  }
                  else if ( v44 < v43 )
                  {
                    v43 = *((_BYTE *)v99 + v42);
                    v40 = 1LL << v41;
                  }
                }
                ++v41;
                ++v42;
              }
              while ( v41 < 0x40u );
            }
            v30 = a1;
          }
          else
          {
            v40 = 0LL;
          }
          v45 = v40 & v37;
          if ( v45 )
          {
            v40 = v45;
          }
          else
          {
            if ( (v36 & v40) != 0 )
            {
              v46 = (unsigned __int64)v21 << 6;
              if ( (unsigned int)(v28 - 3) > 1 )
                v47 = *(_QWORD *)(v30 + 200) + v46;
              else
                v47 = *(_QWORD *)(v30 + 208) + v46;
              v48 = 0LL;
              v49 = 0;
              v50 = 0;
              v51 = 0LL;
              do
              {
                if ( (v36 & (1LL << v50) & v40) != 0 )
                {
                  v52 = *(_BYTE *)(v51 + v47);
                  if ( v52 == v49 )
                  {
                    v48 |= 1LL << v51;
                  }
                  else if ( v52 > v49 )
                  {
                    v49 = *(_BYTE *)(v51 + v47);
                    v48 = 1LL << v50;
                  }
                }
                ++v50;
                ++v51;
              }
              while ( v50 < 0x40u );
              v40 = v48;
            }
            if ( !v40 )
              goto LABEL_91;
          }
          v53 = 1LL;
          v54 = 2;
          do
          {
            if ( (v53 & v40) != 0 )
              v100[v54 - 2] += v23;
            if ( (__ROL8__(v53, 1) & v40) != 0 )
              v100[v54 - 1] += v23;
            if ( (__ROL8__(v53, 2) & v40) != 0 )
              v100[v54] += v23;
            if ( (v40 & __ROL8__(v53, 3)) != 0 )
              v100[v54 + 1] += v23;
            if ( (v40 & __ROL8__(v53, 4)) != 0 )
              v100[v54 + 2] += v23;
            if ( (v40 & __ROL8__(v53, 5)) != 0 )
              v100[v54 + 3] += v23;
            if ( (v40 & __ROL8__(v53, 6)) != 0 )
              v100[v54 + 4] += v23;
            if ( (v40 & __ROL8__(v53, 7)) != 0 )
              v100[v54 + 5] += v23;
            if ( (v40 & __ROL8__(v53, 8)) != 0 )
              v100[v54 + 6] += v23;
            if ( (v40 & __ROL8__(v53, 9)) != 0 )
              v100[v54 + 7] += v23;
            if ( (v40 & __ROL8__(v53, 10)) != 0 )
              v100[v54 + 8] += v23;
            if ( (v40 & __ROL8__(v53, 11)) != 0 )
              v100[v54 + 9] += v23;
            if ( (v40 & __ROL8__(v53, 12)) != 0 )
              v100[v54 + 10] += v23;
            if ( (v40 & __ROL8__(v53, 13)) != 0 )
              v100[v54 + 11] += v23;
            if ( (__ROL8__(v53, 14) & v40) != 0 )
              v100[v54 + 12] += v23;
            if ( (__ROL8__(v53, 15) & v40) != 0 )
              v100[v54 + 13] += v23;
            v54 += 16;
            v53 = __ROL8__(v53, 16);
          }
          while ( (unsigned int)(v54 - 2) < 0x40 );
          v93 += v23;
LABEL_91:
          v9 = a2;
LABEL_13:
          v10 = a1;
          ++v21;
          v15 = v90;
          v19 = v92;
          v17 = v89;
          v20 = *(_BYTE *)(a1 + 185);
          v22 = v98;
        }
        while ( v21 < v20 );
        v18 = v95;
        v16 = v96;
LABEL_15:
        ++v17;
        ++v18;
        ++v19;
        v89 = v17;
        v95 = v18;
        v92 = v19;
      }
      while ( v18 < 2 );
      ++v15;
      v16 += 2LL;
      v90 = v15;
      v96 = v16;
    }
    while ( v15 < 7 );
    if ( !v93 )
      return 0LL;
    v24 = 0LL;
    v25 = 1LL;
    v26 = 2;
    do
    {
      if ( (v25 & a3) != 0 && v100[v26 - 2] == v93 )
        _bittestandset64(&v24, v26 - 2);
      if ( (__ROL8__(v25, 1) & a3) != 0 && v100[v26 - 1] == v93 )
        _bittestandset64(&v24, v26 - 1);
      if ( (__ROL8__(v25, 2) & a3) != 0 && v100[v26] == v93 )
        _bittestandset64(&v24, v26);
      if ( (__ROL8__(v25, 3) & a3) != 0 && v100[v26 + 1] == v93 )
        _bittestandset64(&v24, v26 + 1);
      if ( (__ROL8__(v25, 4) & a3) != 0 && v100[v26 + 2] == v93 )
        _bittestandset64(&v24, v26 + 2);
      if ( (__ROL8__(v25, 5) & a3) != 0 && v100[v26 + 3] == v93 )
        _bittestandset64(&v24, v26 + 3);
      if ( (__ROL8__(v25, 6) & a3) != 0 && v100[v26 + 4] == v93 )
        _bittestandset64(&v24, v26 + 4);
      if ( (__ROL8__(v25, 7) & a3) != 0 && v100[v26 + 5] == v93 )
        _bittestandset64(&v24, v26 + 5);
      if ( (__ROL8__(v25, 8) & a3) != 0 && v100[v26 + 6] == v93 )
        _bittestandset64(&v24, v26 + 6);
      if ( (__ROL8__(v25, 9) & a3) != 0 && v100[v26 + 7] == v93 )
        _bittestandset64(&v24, v26 + 7);
      if ( (__ROL8__(v25, 10) & a3) != 0 && v100[v26 + 8] == v93 )
        _bittestandset64(&v24, v26 + 8);
      if ( (__ROL8__(v25, 11) & a3) != 0 && v100[v26 + 9] == v93 )
        _bittestandset64(&v24, v26 + 9);
      if ( (__ROL8__(v25, 12) & a3) != 0 && v100[v26 + 10] == v93 )
        _bittestandset64(&v24, v26 + 10);
      if ( (__ROL8__(v25, 13) & a3) != 0 && v100[v26 + 11] == v93 )
        _bittestandset64(&v24, v26 + 11);
      if ( (__ROL8__(v25, 14) & a3) != 0 && v100[v26 + 12] == v93 )
        _bittestandset64(&v24, v26 + 12);
      if ( (__ROL8__(v25, 15) & a3) != 0 && v100[v26 + 13] == v93 )
        _bittestandset64(&v24, v26 + 13);
      v26 += 16;
      v25 = __ROL8__(v25, 16);
    }
    while ( v26 - 2 < 0x40 );
    if ( v24 )
      return v24;
    v55 = 1LL;
    v56 = -1LL;
    v57 = 2;
    do
    {
      if ( (v55 & a3) != 0 )
      {
        v73 = v100[v57 - 2];
        if ( v56 > v73 )
        {
          v56 = v100[v57 - 2];
          v24 = v55;
        }
        else if ( v56 == v73 )
        {
          _bittestandset64(&v24, v57 - 2);
        }
      }
      v58 = __ROL8__(v55, 1);
      if ( (v58 & a3) != 0 )
      {
        v74 = v100[v57 - 1];
        if ( v56 > v74 )
        {
          v56 = v100[v57 - 1];
          v24 = v58;
        }
        else if ( v56 == v74 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 - 1);
        }
      }
      v59 = __ROL8__(v55, 2);
      if ( (v59 & a3) != 0 )
      {
        v75 = v100[v57];
        if ( v56 > v75 )
        {
          v56 = v100[v57];
          v24 = v59;
        }
        else if ( v56 == v75 )
        {
          _bittestandset64(&v24, v57);
        }
      }
      v60 = __ROL8__(v55, 3);
      if ( (v60 & a3) != 0 )
      {
        v76 = v100[v57 + 1];
        if ( v56 > v76 )
        {
          v56 = v100[v57 + 1];
          v24 = v60;
        }
        else if ( v56 == v76 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 1);
        }
      }
      v61 = __ROL8__(v55, 4);
      if ( (v61 & a3) != 0 )
      {
        v77 = v100[v57 + 2];
        if ( v56 > v77 )
        {
          v56 = v100[v57 + 2];
          v24 = v61;
        }
        else if ( v56 == v77 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 2);
        }
      }
      v62 = __ROL8__(v55, 5);
      if ( (v62 & a3) != 0 )
      {
        v78 = v100[v57 + 3];
        if ( v56 > v78 )
        {
          v56 = v100[v57 + 3];
          v24 = v62;
        }
        else if ( v56 == v78 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 3);
        }
      }
      v63 = __ROL8__(v55, 6);
      if ( (v63 & a3) != 0 )
      {
        v79 = v100[v57 + 4];
        if ( v56 > v79 )
        {
          v56 = v100[v57 + 4];
          v24 = v63;
        }
        else if ( v56 == v79 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 4);
        }
      }
      v64 = __ROL8__(v55, 7);
      if ( (v64 & a3) != 0 )
      {
        v80 = v100[v57 + 5];
        if ( v56 > v80 )
        {
          v56 = v100[v57 + 5];
          v24 = v64;
        }
        else if ( v56 == v80 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 5);
        }
      }
      v65 = __ROL8__(v55, 8);
      if ( (v65 & a3) != 0 )
      {
        v81 = v100[v57 + 6];
        if ( v56 > v81 )
        {
          v56 = v100[v57 + 6];
          v24 = v65;
        }
        else if ( v56 == v81 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 6);
        }
      }
      v66 = __ROL8__(v55, 9);
      if ( (v66 & a3) != 0 )
      {
        v82 = v100[v57 + 7];
        if ( v56 > v82 )
        {
          v56 = v100[v57 + 7];
          v24 = v66;
        }
        else if ( v56 == v82 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 7);
        }
      }
      v67 = __ROL8__(v55, 10);
      if ( (v67 & a3) != 0 )
      {
        v83 = v100[v57 + 8];
        if ( v56 > v83 )
        {
          v56 = v100[v57 + 8];
          v24 = v67;
        }
        else if ( v56 == v83 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 8);
        }
      }
      v68 = __ROL8__(v55, 11);
      if ( (v68 & a3) != 0 )
      {
        v84 = v100[v57 + 9];
        if ( v56 > v84 )
        {
          v56 = v100[v57 + 9];
          v24 = v68;
        }
        else if ( v56 == v84 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 9);
        }
      }
      v69 = __ROL8__(v55, 12);
      if ( (v69 & a3) != 0 )
      {
        v85 = v100[v57 + 10];
        if ( v56 > v85 )
        {
          v56 = v100[v57 + 10];
          v24 = v69;
        }
        else if ( v56 == v85 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 10);
        }
      }
      v70 = __ROL8__(v55, 13);
      if ( (v70 & a3) != 0 )
      {
        v86 = v100[v57 + 11];
        if ( v56 > v86 )
        {
          v56 = v100[v57 + 11];
          v24 = v70;
        }
        else if ( v56 == v86 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 11);
        }
      }
      v71 = __ROL8__(v55, 14);
      if ( (v71 & a3) != 0 )
      {
        v87 = v100[v57 + 12];
        if ( v56 > v87 )
        {
          v56 = v100[v57 + 12];
          v24 = v71;
        }
        else if ( v56 == v87 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 12);
        }
      }
      v72 = __ROL8__(v55, 15);
      if ( (v72 & a3) != 0 )
      {
        v88 = v100[v57 + 13];
        if ( v56 > v88 )
        {
          v56 = v100[v57 + 13];
          v24 = v72;
        }
        else if ( v56 == v88 )
        {
          v24 |= 1LL << ((unsigned __int8)v57 + 13);
        }
      }
      v57 += 16;
      v55 = __ROL8__(v55, 16);
    }
    while ( v57 - 2 < 0x40 );
    if ( v24 != a3 )
    {
      a3 &= ~v24;
      continue;
    }
    return a3;
  }
}
