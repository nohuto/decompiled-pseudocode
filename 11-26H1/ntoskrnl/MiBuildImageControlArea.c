/*
 * XREFs of MiBuildImageControlArea @ 0x140A6279C
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     MiSetControlAreaImageRange @ 0x1404B6F4C (MiSetControlAreaImageRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiLogCreateImageFileMapFailure @ 0x140886120 (MiLogCreateImageFileMapFailure.c)
 *     MiParseImageSectionHeaders @ 0x140A62CA8 (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildImageControlArea(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  unsigned int v4; // r13d
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // r12
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _QWORD *v10; // r15
  _QWORD *v11; // rcx
  __int64 *ProtoPool; // rax
  __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r12
  bool v17; // al
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  int v24; // r8d
  __int64 SubsectionPte; // rax
  __int64 v26; // r9
  unsigned int v27; // r10d
  unsigned int v28; // edx
  unsigned int i; // r8d
  int v30; // ebx
  __int64 result; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v34; // r9
  unsigned int v35; // edx
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // [rsp+30h] [rbp-38h] BYREF
  int v42; // [rsp+38h] [rbp-30h]
  int v43; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v44; // [rsp+70h] [rbp+8h]
  _QWORD *v45; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 40);
  v43 = 0;
  if ( *(_DWORD *)(v1 + 12) < 0x1000u )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x40000) != 0 )
    {
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
      {
        MiLogCreateImageFileMapFailure(v39, v38, *(_QWORD *)a1, *(unsigned int *)(v1 + 64), *(_DWORD *)(a1 + 156));
      }
      if ( SepRmCapTableLock.SystemAffinityTokenListHead.Next )
        guard_dispatch_icall_no_overrides(*(_QWORD *)a1, *(unsigned int *)(v1 + 64));
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 55;
      return 3221225595LL;
    }
    v40 = *(_WORD *)(a1 + 152);
    if ( v40 != 332 && v40 != -31132 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 56;
      return 3221225595LL;
    }
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  v44 = *(unsigned __int16 *)(a1 + 154);
  v4 = ((*(_DWORD *)(v1 + 16) & 0xFFF) != 0) + (*(_DWORD *)(v1 + 16) >> 12);
  if ( !v4 )
    return 3221225595LL;
  v5 = 1LL;
  v6 = *(_DWORD *)(a1 + 12) & 4;
  if ( !v6 )
    v5 = (unsigned int)*(unsigned __int16 *)(a1 + 154) + 1;
  v7 = 56 * v5;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, v7 + 200, v6 != 0 ? 1631808845 : 1766026573, CurrentProcessorColor | 0x80000000);
  v10 = (_QWORD *)PoolMm;
  if ( !PoolMm )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 26;
    return 3221225626LL;
  }
  *(_DWORD *)(PoolMm + 56) |= 0x20u;
  v11 = (_QWORD *)(PoolMm + v7 + 128);
  *(_QWORD *)(PoolMm + 96) = v11;
  v45 = v11;
  v11[3] = v11[3] & 0xFFFFFFFFFFFFFFF8uLL | 2;
  ProtoPool = (__int64 *)MiAllocateProtoPool(274LL, 8LL * v4, 1951624525LL);
  v13 = ProtoPool;
  if ( !ProtoPool )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 27;
    v30 = -1073741670;
    goto LABEL_57;
  }
  memset_0(ProtoPool, 0, 8LL * v4);
  v14 = MmGetCurrentProcessorColor();
  v15 = ExAllocatePoolMm(256LL, 0x98uLL, 1734693709, v14 | 0x80000000);
  v16 = v15;
  if ( !v15 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 28;
    v30 = -1073741670;
    goto LABEL_55;
  }
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 64) = v13;
  *(_QWORD *)v15 = v10;
  *(_DWORD *)(v15 + 8) = v4;
  *(_QWORD *)(v15 + 56) = v15 + 72;
  *(_QWORD *)(v15 + 24) = (unsigned __int64)v4 << 12;
  *(_DWORD *)(v15 + 136) = *(_DWORD *)(v1 + 24);
  *(_DWORD *)(v15 + 140) = *(_DWORD *)(v1 + 16);
  *(_DWORD *)(v15 + 144) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(v15 + 128) = v3;
  *(_QWORD *)(v15 + 72) = *(_QWORD *)v1 + *(unsigned int *)(v1 + 28);
  *(_QWORD *)(v15 + 88) = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v15 + 96) = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v15 + 104) = *(unsigned __int16 *)(v1 + 50);
  *(_WORD *)(v15 + 110) = *(_WORD *)(v1 + 52);
  *(_WORD *)(v15 + 108) = *(_WORD *)(v1 + 54);
  *(_WORD *)(v15 + 112) = *(_WORD *)(v1 + 56);
  *(_WORD *)(v15 + 114) = *(_WORD *)(v1 + 58);
  *(_WORD *)(v15 + 118) = *(_WORD *)(v1 + 60);
  *(_DWORD *)(v15 + 132) = *(_DWORD *)(v1 + 64);
  v17 = *(_DWORD *)(v1 + 68) || *(_DWORD *)(v1 + 28);
  *(_BYTE *)(v16 + 122) = v17;
  *(_WORD *)(v16 + 116) = *(_WORD *)(a1 + 170);
  *(_WORD *)(v16 + 120) = *(_WORD *)(a1 + 152);
  *(_DWORD *)(v16 + 124) = *(_DWORD *)(v1 + 20);
  *v10 = v16;
  v10[2] = v10 + 1;
  v10[1] = v10 + 1;
  v10[14] = 1LL;
  v10[3] = 1LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
    v10[6] = 1LL;
  *((_DWORD *)v10 + 14) |= 0x82u;
  v42 = 0;
  v41 = -1LL;
  MiSetControlAreaImageRange((__int64)v10, (__int64)&v41, 0);
  v18 = *((_DWORD *)v10 + 14);
  v19 = v18 ^ (*(_DWORD *)(a1 + 24) << 20);
  v10[13] = 0LL;
  *((_DWORD *)v10 + 14) = v18 ^ v19 & 0x7F00000;
  *(_BYTE *)(v16 + 14) = *(_BYTE *)(v16 + 14) & 0xDF | (*(_DWORD *)(v1 + 128) != 0 ? 0x20 : 0);
  v10[16] = v10;
  *(_QWORD *)(v16 + 32) = *(_QWORD *)v1;
  v10[17] = v13;
  if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    v20 = *(unsigned int *)(v1 + 24);
    if ( (_DWORD)v20 )
    {
      v21 = *(unsigned int *)(v1 + 12);
      v22 = v20 + v21 - 1;
      if ( v22 <= (unsigned int)v20 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 30;
      }
      else
      {
        v23 = ((v22 & -(int)v21 & 0xFFF) + 4095) >> 12;
        v24 = ((unsigned __int64)~(v21 - 1) >> 12) & ((unsigned __int64)(v21 + v20 - 1) >> 12);
        *((_DWORD *)v10 + 43) = v24 + v23;
        if ( v24 + v23 <= v4 )
        {
          v4 -= v24 + v23;
          *((_DWORD *)v10 + 42) = *(_DWORD *)(v1 + 24) >> 9;
          *((_DWORD *)v10 + 40) = ((*(_WORD *)(v1 + 24) & 0x1FF) << 20) | 2;
          SubsectionPte = MiMakeSubsectionPte((__int64)(v10 + 16));
          v28 = *(_DWORD *)(v26 + 44);
          for ( i = 0; i < v28; ++i )
          {
            if ( v27 >= *(_DWORD *)(v1 + 24) )
            {
              *v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              ++*(_DWORD *)(v26 + 52);
            }
            else
            {
              *v13 = SubsectionPte;
            }
            v28 = *(_DWORD *)(v26 + 44);
            v27 += 4096;
            ++v13;
          }
          v13 -= v28;
          goto LABEL_21;
        }
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 31;
      }
    }
    else
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 29;
    }
    v30 = -1073741701;
    goto LABEL_55;
  }
  *((_DWORD *)v10 + 43) = v4;
  v32 = *(unsigned int *)(v1 + 16);
  if ( v32 > v3 )
    v32 = v3;
  *((_DWORD *)v10 + 42) = v32 >> 9;
  *(_BYTE *)(v16 + 123) |= 8u;
  *(_BYTE *)(v16 + 122) = 1;
  *((_DWORD *)v10 + 40) = ((v32 & 0x1FF) << 20) | 0xE;
  MiMakeSubsectionPte((__int64)(v10 + 16));
  DemandZeroPte = MiMakeDemandZeroPte(7);
  v35 = 0;
  v36 = v4;
  do
  {
    v37 = DemandZeroPte;
    if ( v35 < (unsigned int)v3 )
      v37 = v34;
    v35 += 4096;
    *v13++ = v37;
    --v36;
  }
  while ( v36 );
  v13 -= v4;
  *(_QWORD *)(v16 + 48) = v4;
LABEL_21:
  v30 = MiParseImageSectionHeaders(a1, v10, v44, v4);
  if ( v30 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v45, 1);
    result = 0LL;
    *(_QWORD *)(a1 + 56) = v10;
    return result;
  }
  if ( !v13 )
    goto LABEL_56;
LABEL_55:
  MiFreeProtoPool(v13, 0LL);
  if ( v16 )
LABEL_56:
    ExFreePoolWithTag((PVOID)v16, 0);
LABEL_57:
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)v30;
}
