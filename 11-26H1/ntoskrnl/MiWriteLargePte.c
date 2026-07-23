/*
 * XREFs of MiWriteLargePte @ 0x1402A0630
 * Callers:
 *     MiZeroWithUltraSpace @ 0x1402A0430 (MiZeroWithUltraSpace.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiMapBackgroundPageToZero @ 0x1405217B4 (MiMapBackgroundPageToZero.c)
 *     MxMapLargeVa @ 0x1406EC0F4 (MxMapLargeVa.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiReleaseProcessorHugeMappingAtDpc @ 0x140709FF8 (MiReleaseProcessorHugeMappingAtDpc.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14070A1CC (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAcquireScrubProtection @ 0x14071093C (MiAcquireScrubProtection.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiWriteLargePte(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  char v7; // r15
  unsigned __int64 v8; // rbx
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax

  v4 = a3;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 1 )
  {
    v23 = 2 - a3;
    do
    {
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v23;
    }
    while ( v23 );
  }
  if ( a4 )
  {
    v7 = a4 & 0x1F;
    v8 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a4 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v8 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a4 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
      v9 = a4 & 0x4000000;
    }
    else
    {
      if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v8 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a4 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
        }
        else if ( (a4 & 0x4000000) == 0 )
        {
          v8 = ((a2 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[a4 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
        }
        if ( (unsigned int)MiUserPdeOrAbove(v6) )
          v8 |= 4uLL;
      }
      v17 = (__int64)(v6 << 25) >> 16;
      v9 = a4 & 0x4000000;
      if ( (a4 & 0x4000000) != 0 && v17 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v17 = (__int64)(v17 << 25) >> 16;
        }
        while ( v17 >= 0xFFFFF68000000000uLL );
      }
      if ( v17 < 0x7FFFFFFF0000LL )
      {
        v8 |= 4uLL;
        goto LABEL_24;
      }
      if ( v17 < 0xFFFF800000000000uLL )
      {
LABEL_24:
        v18 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
        goto LABEL_25;
      }
      if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v17 < qword_140E2DFC0 || v17 > qword_140E2DFD0 )
        {
          v18 = BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
LABEL_25:
          if ( v18 )
            v8 |= 0x100uLL;
          goto LABEL_5;
        }
        goto LABEL_24;
      }
    }
LABEL_5:
    if ( a4 < 0 && (v7 & 5) == 4 )
      v8 |= 0x42uLL;
    v10 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (a4 & 0x40000000) == 0 )
      v10 = v8;
    if ( (a4 & 0x20000000) != 0 )
      v10 = ((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ v10) & 0xFFFFFFFFFFFFFEFFuLL;
    v11 = MiPtesToSupportLargePageSizes[v4];
    v12 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
    if ( (a4 & 0x8000000) == 0 )
      v12 = v10;
    v13 = v12 | 0x80;
    if ( !v9 )
      v13 = v12;
    v14 = 0;
    v15 = v13 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( v11 )
    {
      v24 = 0LL;
      do
      {
        *(_QWORD *)(v6 + 8 * v24) = v15;
        v24 = ++v14;
        v15 = (v15 + 4096) ^ ((v15 + 4096) ^ v15) & 0xFFF0000000000FFFuLL;
      }
      while ( v14 < v11 );
    }
    return v6;
  }
  v19 = MiPtesToSupportLargePageSizes[a3];
  v20 = 0;
  if ( v19 )
  {
    v21 = 0LL;
    do
    {
      v22 = (_QWORD *)(v6 + 8 * v21);
      if ( *v22 )
      {
        if ( (unsigned int)v4 <= 1 )
          MiRewritePteWithLockBit(0LL, 0, (unsigned __int64)v22, *(__int64 *)&CLFS_LSN_NULL_EXT);
        else
          *v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v21 = ++v20;
    }
    while ( v20 < v19 );
  }
  return v6;
}
