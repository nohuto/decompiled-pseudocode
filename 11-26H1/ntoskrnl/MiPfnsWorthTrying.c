/*
 * XREFs of MiPfnsWorthTrying @ 0x140290280
 * Callers:
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x140410EB8 (MiRequestIoPageMdlCacheRelease.c)
 *     MiExpandPageSkipRange @ 0x14041AE90 (MiExpandPageSkipRange.c)
 *     MiFindNextLowerLargePageCandidate @ 0x14041AF4C (MiFindNextLowerLargePageCandidate.c)
 *     MiClusterVadFull @ 0x140467BE0 (MiClusterVadFull.c)
 *     MiExpandWrongPartitionSkipRange @ 0x140529324 (MiExpandWrongPartitionSkipRange.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int16 *v8; // r15
  _DWORD *v9; // rcx
  __int16 v10; // r12
  __int64 v11; // r11
  unsigned __int64 v12; // rdi
  __int64 v13; // r10
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r8d
  int v17; // esi
  __int64 v18; // rdi
  __int64 result; // rax
  signed __int64 v20; // rbp
  unsigned __int64 v21; // r9
  int v22; // eax
  __int64 j; // r10
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r15
  volatile signed __int32 *v26; // rax
  __int64 v27; // rax
  unsigned __int64 active; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rcx
  signed __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 i; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v38; // r8
  unsigned __int64 NextLowerLargePageCandidate; // rax
  int v40; // ecx
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]
  int v43; // [rsp+88h] [rbp+10h] BYREF
  int v44; // [rsp+90h] [rbp+18h] BYREF

  v8 = a1;
  if ( (MiZeroCont & 2) != 0 )
    memset_0(MiCont, 0, 0x358uLL);
  v9 = a5;
  v10 = *v8;
  v11 = -1LL;
  v12 = a2 + 48 * a3;
  v41 = -1LL;
  *a5 = 0;
  v13 = 0x10000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 >= v12 )
        return 0LL;
      if ( ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) != v10 )
      {
        result = MiExpandWrongPartitionSkipRange(a2, v12, a4);
        _InterlockedIncrement(&dword_140EF9240);
        return result;
      }
      v14 = 3;
      v15 = *(_QWORD *)(a2 + 40);
      v16 = HIWORD(*(_DWORD *)(a2 + 32)) & 7;
      v43 = v16;
      if ( (v15 & v13) != 0 )
      {
        v44 = 0;
        PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a2, &v43, &v44, 3LL);
        v14 = PfnPageSizeIndexUnsynchronized;
        if ( PfnPageSizeIndexUnsynchronized == 3 )
          goto LABEL_24;
        v16 = v43;
        if ( v43 == 6 )
          return MiExpandPageSkipRange(v8, a2, v12, MiPageSizes[PfnPageSizeIndexUnsynchronized]);
        v9 = a5;
        v13 = 0x10000000000LL;
        v11 = v41;
      }
      if ( v16 != 5 )
        break;
      if ( MiIsPageOnBadList(a2) )
      {
        _InterlockedIncrement(&dword_140EF924C);
        v32 = v12 - a2;
      }
      else if ( *(_QWORD *)(a2 + 8) == -8LL )
      {
        _InterlockedIncrement(&dword_140EF9250);
        v32 = v12 - a2;
      }
      else
      {
        if ( (a4 & 0x410000) == 0x410000 || (unsigned int)MiGetPfnSlabType(v31) == 9 )
          goto LABEL_59;
        _InterlockedIncrement(&dword_140EF92BC);
        v32 = v12 - 48 * (((__int64)(a2 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL) + 0x220000000000LL;
      }
      if ( v32 / 48 )
        return v32 / 48;
LABEL_59:
      if ( v14 == 3 )
      {
        if ( (*(_QWORD *)a2 & 1) == 0 )
        {
          v33 = 0;
LABEL_62:
          if ( v33 < 2 )
          {
            for ( i = 0LL; ; ++i )
            {
              if ( i > 3 )
              {
                ++v33;
                goto LABEL_62;
              }
              if ( (PVOID)((__int64)(a2 + 0x220000000000LL) / 48) == *(&qword_140E36180 + 7 * v33 + i) )
                break;
            }
            _InterlockedIncrement(&dword_140EF92F0);
LABEL_12:
            v18 = v12 - a2;
            return v18 / 48;
          }
        }
        goto LABEL_16;
      }
LABEL_69:
      v35 = (__int64)(a2 + 0x220000000000LL) / 48;
      v36 = MiPageSizes[v14];
      if ( v36 >= 0x200 )
      {
        if ( (a4 & 0x2000000) != 0 )
        {
LABEL_71:
          _InterlockedIncrement(&dword_140EF92D4);
          v18 = v12 - 48 * (v35 & -(__int64)v36) + 0x220000000000LL;
          return v18 / 48;
        }
      }
      else if ( (a4 & 0x1000000) != 0 )
      {
        goto LABEL_71;
      }
      v38 = v36 - (v35 & (v36 - 1));
      if ( v38 > (__int64)(v12 - a2) / 48 )
        v38 = (__int64)(v12 - a2) / 48;
      v9 = a5;
      v11 = v41;
      a2 += 48 * v38;
    }
    if ( v16 <= 1 )
    {
      if ( v14 == 3 )
        goto LABEL_16;
      goto LABEL_69;
    }
    v17 = 0;
    if ( (a4 & 0x10000000) != 0 )
    {
      if ( v16 != 2 && v16 != 7 )
      {
        v40 = *(_DWORD *)(a2 + 32);
        if ( v16 != 6
          || (v40 & 0x100000) != 0
          || (unsigned __int16)*(_DWORD *)(a2 + 32) != 1
          || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
          || (v40 & 0x8000000) != 0
          || (*(_QWORD *)a2 & 1) == 0 )
        {
LABEL_101:
          _InterlockedIncrement(&dword_140EF92CC);
          goto LABEL_12;
        }
        v20 = a2 + 0x220000000000LL;
        goto LABEL_52;
      }
      if ( !(unsigned __int16)*(_DWORD *)(a2 + 32) )
        goto LABEL_16;
      MiRequestIoPageMdlCacheRelease((__int64)(a2 + 0x220000000000LL) / 48);
      if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
        goto LABEL_101;
LABEL_24:
      v13 = 0x10000000000LL;
      goto LABEL_16;
    }
    if ( *(int *)(a2 + 32) < 0 )
    {
      _InterlockedIncrement(&dword_140EF92D0);
      goto LABEL_12;
    }
    v20 = a2 + 0x220000000000LL;
    v21 = (__int64)(a2 + 0x220000000000LL) / 48;
    v22 = a4 & 0x410000;
    if ( v16 > 4 )
      break;
    if ( byte_140E3BEA6
      && v22 != 4259840
      && *(_BYTE *)(qword_140E3D240 + 2 * (v21 >> 9))
      && *(_BYTE *)(qword_140E3D240 + 2 * (v21 >> 9)) != 10 )
    {
      _InterlockedIncrement(&dword_140EF92C0);
      v18 = v12 - 48 * (v21 & 0xFFFFFFFFFFFFFE00uLL) + 0x220000000000LL;
      return v18 / 48;
    }
    if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
    {
      MiRequestIoPageMdlCacheRelease((__int64)(a2 + 0x220000000000LL) / 48);
      if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
      {
LABEL_47:
        _InterlockedIncrement(&dword_140EF9254);
        goto LABEL_12;
      }
    }
    if ( (a4 & 0x4000000) != 0 )
      goto LABEL_24;
    v27 = *(_QWORD *)(a2 + 8);
    if ( v27 < 0 )
      goto LABEL_24;
    v13 = 0x10000000000LL;
    if ( v27 && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 )
      goto LABEL_47;
LABEL_16:
    v9 = a5;
    a2 += 48LL;
    v11 = v41;
  }
  if ( v22 != 4259840 && (v21 & 0xFFFFFFFFFFFFFE00uLL) != v11 )
  {
    v41 = v21 & 0xFFFFFFFFFFFFFE00uLL;
    if ( *((_BYTE *)v8 + 16486) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= 2 )
        {
          v9 = a5;
          goto LABEL_34;
        }
        if ( *(_QWORD *)&v8[8 * (unsigned int)j + 8356]
          && _bittest64(*(const signed __int64 **)&v8[8 * (unsigned int)j + 8360], v21 >> MiLargePageShifts[j]) )
        {
          break;
        }
      }
      _InterlockedIncrement(&dword_140EF9248);
      v18 = v12 - 48 * (v21 & -MiPageSizes[j]) + 0x220000000000LL;
      return v18 / 48;
    }
  }
LABEL_34:
  v17 = 2;
  if ( v16 != 6 )
  {
    _InterlockedIncrement(&dword_140EF9258);
    goto LABEL_12;
  }
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2 )
  {
    if ( (a4 & 8) != 0 )
      goto LABEL_98;
    if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFELL) != 0 )
    {
      if ( 8 * (*(_QWORD *)a2 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL) == -32LL )
      {
        _InterlockedIncrement(&dword_140EF925C);
        goto LABEL_12;
      }
    }
    else
    {
      *v9 |= 1u;
    }
    goto LABEL_24;
  }
  if ( (a4 & 0x800000) == 0 )
    goto LABEL_52;
  if ( *(__int64 *)(a2 + 40) >= 0 )
  {
    if ( (a4 & 0x8000000) == 0 || a3 == 16 )
    {
      v24 = 16LL;
      goto LABEL_40;
    }
    if ( a3 == 512 )
    {
      v24 = 512LL;
LABEL_40:
      if ( v21 == (v21 & ~(v24 - 1)) )
      {
        v25 = (__int64)(v12 - a2) / 48;
        if ( v25 >= v24 && (unsigned int)MiClusterVadFull(a2, v24, 0LL) )
        {
          v26 = (volatile signed __int32 *)&unk_140EF9304;
          goto LABEL_50;
        }
LABEL_51:
        v8 = a1;
      }
    }
LABEL_52:
    active = MiActivePageClaimCandidate((_DWORD)v8, a2, v17, a4, 0, (__int64)a5);
    if ( active )
    {
      v29 = ~(active - 1) & (v20 / 48);
      v30 = (__int64)(v12 + 0x220000000000LL) / 48;
      if ( active >= 0x200 )
      {
        NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate(v8, ~(active - 1) & (v20 / 48));
        if ( NextLowerLargePageCandidate < v29 )
        {
          _InterlockedIncrement(&dword_140EF9248);
          return v30 - NextLowerLargePageCandidate;
        }
        _InterlockedIncrement(&dword_140EF9244);
      }
      return v30 - v29;
    }
    if ( (a4 & 8) != 0 )
    {
LABEL_98:
      _InterlockedIncrement(&dword_140EF9260);
      goto LABEL_12;
    }
    goto LABEL_24;
  }
  if ( *(__int64 *)(a2 + 8) <= 0 || (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
  {
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || (a4 & 0x8000000) != 0 )
      goto LABEL_52;
    v25 = (__int64)(v12 - a2) / 48;
    v26 = (volatile signed __int32 *)&unk_140EF9264;
  }
  else
  {
    *v9 |= 2u;
    v25 = (__int64)(v12 - a2) / 48;
    v26 = &dword_140EF92B0;
  }
LABEL_50:
  _InterlockedIncrement(v26);
  if ( !v25 )
    goto LABEL_51;
  return v25;
}
