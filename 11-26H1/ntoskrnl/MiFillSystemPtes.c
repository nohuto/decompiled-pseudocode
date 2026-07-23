/*
 * XREFs of MiFillSystemPtes @ 0x1403611E8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x1404DAA40 (MmMapMdl.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140714E1C (MiAllocateZeroCalibrationBuffer.c)
 *     MiLockAndMapEntireDriver @ 0x140873B54 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408791D8 (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2190 (MiAssignInitialPageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiIoPagesInRun @ 0x14049DC4C (MiIoPagesInRun.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70 (MiLogSystemImageReadOnlyPageViolation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFillSystemPtes(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  _QWORD *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // r12d
  unsigned __int64 v11; // rbp
  int v12; // r9d
  unsigned __int64 ValidPte; // rax
  __int64 v14; // r8
  _DWORD *BugCheckParameter4; // r10
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v24; // r15d
  unsigned __int64 v25; // rbx
  unsigned __int64 v27; // rsi
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // edx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edi
  unsigned __int64 v35; // r15
  __int64 v36; // r9
  unsigned __int64 v37; // rbp
  unsigned int v38; // r14d
  __int64 v39; // rdx
  unsigned __int8 v40; // di
  __int64 *ProcessorFlushList; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *v50; // rdx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  char v55; // cl
  __int64 v56; // [rsp+30h] [rbp-88h] BYREF
  __int64 v57; // [rsp+38h] [rbp-80h]
  __int64 v58; // [rsp+40h] [rbp-78h]
  unsigned __int64 v59; // [rsp+48h] [rbp-70h]
  __int128 v60; // [rsp+50h] [rbp-68h] BYREF
  __int64 v61; // [rsp+60h] [rbp-58h]
  unsigned __int64 v62; // [rsp+C0h] [rbp+8h]
  int v64; // [rsp+D0h] [rbp+18h]
  int v65; // [rsp+D8h] [rbp+20h]

  v62 = (unsigned __int64)a1;
  v6 = a1;
  v57 = 0LL;
  v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v60 = 0LL;
  v61 = 0LL;
  v8 = 0LL;
  LOBYTE(v9) = a4;
  v64 = 0;
  v56 = 0LL;
  v11 = a2;
  *a6 = 0;
  v65 = MiProtectionToCacheAttribute(a4);
  ValidPte = MiMakeValidPte((unsigned __int64)v6, 0LL, v12 | 0xA0000000);
  BugCheckParameter4 = 0LL;
  v59 = ValidPte;
  v16 = 0LL;
  v17 = a3 - 8;
  if ( a3 >= 0 )
    v16 = a3 - 1;
  v18 = 2LL;
  v19 = 0LL;
  if ( a3 >= 0 )
    v17 = 0LL;
  v20 = 0x20000000000000LL;
  while ( 1 )
  {
    if ( !v11 )
      return 0LL;
    if ( v17 )
      v16 = *(_QWORD *)(v17 + 8);
    else
      ++v16;
    v21 = v17 + 8;
    if ( !v17 )
      v21 = 0LL;
    v17 = v21;
    v58 = v21;
    if ( (a5 & 2) == 0 || v16 != qword_140E36178 )
      break;
LABEL_24:
    --v11;
    v62 = (unsigned __int64)++v6;
  }
  if ( v16 <= qword_140E2D920 )
  {
    if ( ((*(_QWORD *)(48 * v16 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v22 = 48 * v16 - 0x220000000000LL;
      v23 = a5 & 1;
      if ( (a5 & 1) != 0 && ((*(_BYTE *)(v22 + 34) & 7) != 5 || (*(_QWORD *)(v22 + 40) & 0x20000000000000LL) == 0) )
        KeBugCheckEx(0x1Au, 0x1246uLL, v16, 0LL, (ULONG_PTR)BugCheckParameter4);
      if ( !(unsigned __int16)*(_DWORD *)(v22 + 32)
        && ((a5 & 1) == 0 || (*(_BYTE *)(v22 + 34) & 7) != 5 || (*(_QWORD *)(v22 + 40) & 0x20000000000000LL) == 0) )
      {
        MiShowBadMapper(v16, 1uLL);
      }
      v24 = MiLegitimatePageForDriversToMap(48 * v16 - 0x220000000000LL, v23, v14);
      if ( v24 < 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(v22 + 32) & 0xC00000) == 0xC00000 )
        MiAssignInitialPageAttribute(48 * v16 - 0x220000000000LL, v65);
      if ( v65 == ((*(_DWORD *)(v22 + 32) >> 22) & 3) )
      {
        v25 = (v16 << 12) ^ ((v16 << 12) ^ v59) & 0xFFF0000000000FFFuLL;
      }
      else
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, 48 * v16 - 0x220000000000LL);
        LOBYTE(v9) = ProtectionPfnCompatible;
        v25 = MiMakeValidPte(v62, v16, ProtectionPfnCompatible | 0xA0000000);
      }
      BugCheckParameter4 = 0LL;
      if ( (MiFlags & 0x20000) != 0 && !a5 && (v9 & 4) != 0 && *(__int64 *)(v22 + 40) >= 0 )
      {
        v32 = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
        v14 = 0xFFFFF68000000000uLL;
        v33 = *(_QWORD *)(v22 + 16);
        v34 = *(_DWORD *)(v22 + 32);
        v35 = (__int64)(v32 << 25) >> 16;
        if ( (unsigned __int8)v33 >> 5 == 1 && v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( (unsigned int)MiGetSystemRegionType(v35) == 11 && (v34 & 0x280000) == 0 )
            MiLogSystemImageReadOnlyPageViolation(v35, 1LL, v14, v36);
          BugCheckParameter4 = 0LL;
        }
      }
      v6 = (_QWORD *)v62;
      goto LABEL_23;
    }
    v18 = 2LL;
  }
  if ( v19 )
  {
    v28 = 2 * ((v16 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *(_DWORD *)(v8 + 24));
    v29 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)v28 >> 5) + 44);
LABEL_30:
    v30 = (v29 >> v28) & 3;
    --v19;
LABEL_31:
    v9 &= 7u;
    if ( v30 )
    {
      if ( v30 == 2 )
        v9 |= 0x18u;
    }
    else
    {
      v9 |= 0x10u;
    }
    if ( v64 && v64 == v9 )
    {
      v25 = (v16 << 12) ^ (v7 ^ (v16 << 12)) & 0xFFF0000000000FFFuLL;
    }
    else
    {
      v25 = MiMakeValidPte((unsigned __int64)v6, v16, v9 | 0xA0000000);
      BugCheckParameter4 = 0LL;
    }
    v64 = v9;
    v7 = v25;
LABEL_23:
    v17 = v58;
    v20 = 0x20000000000000LL;
    v8 = v56;
    *v6 = v25;
    v18 = 2LL;
    goto LABEL_24;
  }
  v46 = HIDWORD(v61);
  if ( HIDWORD(v61) && v16 >= (unsigned __int64)v60 && v16 <= *((_QWORD *)&v60 + 1) )
  {
    v47 = v57;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags != (_DWORD)BugCheckParameter4 )
    {
      LOBYTE(v17) = 2;
      LOBYTE(v18) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v18, v17);
    }
    MiIoSpaceGetBounds((__int64)&v60, v16);
    if ( KiIrqlFlags != (_DWORD)BugCheckParameter4 )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      BugCheckParameter4 = 0LL;
    }
    __writecr8(CurrentIrql);
    v47 = v61;
    v17 = v58;
    v46 = HIDWORD(v61);
    v57 = v61;
  }
  if ( v46 != 3 )
  {
    v30 = v47;
    goto LABEL_31;
  }
  if ( v17 )
  {
    v19 = 1LL;
    if ( v11 > 1 )
    {
      v50 = (unsigned __int64 *)(v17 + 8);
      v51 = v11 - 1;
      do
      {
        v52 = *v50;
        if ( *v50 != *(v50 - 1) + 1
          || (v52 & 0x1FF) == 0
          || v52 <= qword_140E2D920 && ((*(_QWORD *)(48 * v52 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          break;
        }
        ++v19;
        ++v50;
        --v51;
      }
      while ( v51 );
    }
  }
  else
  {
    v19 = MiIoPagesInRun(v16, v11, v14, v20);
  }
  v53 = MiReferenceIoPages(1u, v16, v19, v65, BugCheckParameter4, &v56);
  BugCheckParameter4 = 0LL;
  v24 = v53;
  if ( v53 >= 0 )
  {
    v54 = v56;
    v55 = dword_140E2D878 - 12;
    v6 = (_QWORD *)v62;
    *a6 |= 1u;
    v28 = 2 * ((v16 & ((1LL << v55) - 1)) - *(_DWORD *)(v54 + 24));
    v29 = *(_DWORD *)(v54 + 4 * ((unsigned __int64)v28 >> 5) + 44);
    goto LABEL_30;
  }
LABEL_26:
  v27 = a2 - v11;
  if ( a2 != v11 )
  {
    v37 = (__int64)((v62 << 25) + ((v11 - a2) << 28)) >> 16;
    v38 = (unsigned int)MiVaToFlushVm(v37);
    MiClearMappingAndDereferenceIoSpace(v37, v27);
    v40 = KeGetCurrentIrql();
    if ( v40 < 2u )
    {
      v48 = KeGetCurrentIrql();
      if ( (_BYTE)v48 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v39) = 2;
        KiRaiseIrqlProcessIrqlFlags(v48, v39);
      }
    }
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v38, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    MiInsertTbFlushEntry(v42, v37, v27, 0);
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList(v44, v43, v45);
    if ( v40 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
      __writecr8(v40);
    }
  }
  return (unsigned int)v24;
}
