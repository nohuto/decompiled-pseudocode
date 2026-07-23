/*
 * XREFs of MiPrepareToHotPatchImage @ 0x14087994C
 * Callers:
 *     MiPrepareToHotPatchVad @ 0x140879FC4 (MiPrepareToHotPatchVad.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     RtlFindNextForwardRunClear @ 0x140415210 (RtlFindNextForwardRunClear.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlAreBitsSet @ 0x14046FAA0 (RtlAreBitsSet.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140725820 (RtlHotPatchSynchronizationRequired.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408791D8 (MiMapHotPatchImageInSystemSpace.c)
 *     MiProcessHotPatchUndoTable @ 0x14087A074 (MiProcessHotPatchUndoTable.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408B11BC (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408B13A8 (RtlEnumerateHotPatchPatches.c)
 *     RtlFindHotPatchBaseMachine @ 0x1408B147C (RtlFindHotPatchBaseMachine.c)
 *     RtlpCheckFunctionPatchApplied @ 0x140C087EC (RtlpCheckFunctionPatchApplied.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // rsi
  _DWORD *v4; // rdi
  unsigned __int8 v6; // r15
  int CurrentProcessorColor; // eax
  unsigned int v8; // r8d
  __int64 PoolMm; // rax
  _RTL_BITMAP *v10; // rcx
  int v11; // edi
  unsigned int *v12; // r14
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // rax
  _RTL_BITMAP *v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  int *v19; // r12
  int v20; // r8d
  unsigned int v21; // r12d
  unsigned int *v22; // rdx
  int v23; // eax
  void *v24; // rax
  void *v25; // r13
  const void *v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  _RTL_BITMAP *v29; // rcx
  __int64 v30; // rdi
  ULONG v31; // r14d
  __int64 i; // rdi
  unsigned int v33; // r14d
  __int64 v34; // r15
  __int64 v35; // r13
  unsigned int *v36; // rdx
  __int64 j; // r11
  __int64 v38; // rcx
  int v39; // eax
  ULONG v40; // esi
  _QWORD *v41; // r15
  ULONG NextForwardRunClear; // eax
  ULONG v43; // r14d
  int v44; // esi
  __int64 v45; // rdx
  int v47; // [rsp+20h] [rbp-128h]
  int v48; // [rsp+40h] [rbp-108h]
  int v49; // [rsp+48h] [rbp-100h]
  int v50; // [rsp+50h] [rbp-F8h]
  int v51; // [rsp+58h] [rbp-F0h]
  int v52; // [rsp+60h] [rbp-E8h]
  __int64 v53; // [rsp+90h] [rbp-B8h]
  __int128 v55; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v56[136]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int *StartingRunIndex; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int8 v59; // [rsp+168h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v4 = a2;
  v55 = 0LL;
  memset_0(v56, 0, 0x48uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = (unsigned int *)v56;
    StartingRunIndex = (unsigned int *)v56;
    v6 = 1;
  }
  v59 = v6;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(
             256LL,
             8 * ((v8 >> 18) + ((v8 & 0x3F000) != 0) + 2),
             1833068877,
             CurrentProcessorColor | 0x80000000);
  *(_QWORD *)(a1 + 48) = PoolMm;
  if ( PoolMm )
  {
    *(_DWORD *)PoolMm = *(_DWORD *)(a1 + 32) >> 12;
    *(_QWORD *)(PoolMm + 8) = PoolMm + 16;
  }
  v10 = *(_RTL_BITMAP **)(a1 + 48);
  if ( !v10 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(v10);
  v12 = v3 + 4;
  *(_DWORD *)(a1 + 36) = 16 * v3[4];
  if ( !v4 )
  {
    v13 = MmGetCurrentProcessorColor();
    v15 = ExAllocatePoolMm(64LL, 8 * ((v14 >> 6) + ((v14 & 0x3F) != 0) + 2), 1833068877, v13 | 0x80000000);
    *(_QWORD *)(a1 + 40) = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = *v12;
      *(_QWORD *)(v15 + 8) = v15 + 16;
    }
    v16 = *(_RTL_BITMAP **)(a1 + 40);
    if ( !v16 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v16);
    MiProcessHotPatchUndoTable(a1, v3);
    v19 = 0LL;
    goto LABEL_36;
  }
  v53 = (__int64)v4 + *(unsigned int *)(RtlFindHotPatchBaseMachine(v4, *(unsigned __int16 *)(a1 + 136)) + 24);
  v11 = RtlCountRequiredHotPatchAddressTableEntries(
          *(_QWORD *)(a1 + 8),
          *(_DWORD *)(a1 + 32),
          v20,
          *(_QWORD *)(a1 + 24),
          *v12,
          (__int64)v4,
          v53,
          v6);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v21 = *v12;
  v22 = v3 + 5;
  StartingRunIndex = v3 + 5;
  if ( !v6 )
  {
    if ( v21 > *v12 )
    {
      v23 = MmGetCurrentProcessorColor();
      v24 = (void *)ExAllocatePoolMm(256LL, 8 * v21, 1213550664, v23 | 0x80000000);
      v25 = v24;
      if ( !v24 )
        return (unsigned int)v11;
      v26 = (const void *)*((_QWORD *)v3 + 3);
      if ( v26 )
      {
        memmove(v24, v26, 8 * *v12);
        ExFreePoolWithTag(*((PVOID *)v3 + 3), 0);
      }
      *((_QWORD *)v3 + 3) = v25;
    }
    v27 = MmGetCurrentProcessorColor();
    v28 = ExAllocatePoolMm(64LL, 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2), 1833068877, v27 | 0x80000000);
    *(_QWORD *)(a1 + 40) = v28;
    if ( v28 )
    {
      *(_DWORD *)v28 = v21;
      *(_QWORD *)(v28 + 8) = v28 + 16;
    }
    v29 = *(_RTL_BITMAP **)(a1 + 40);
    if ( !v29 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v29);
    MiProcessHotPatchUndoTable(a1, v3);
    v22 = StartingRunIndex;
  }
  if ( !*(_DWORD *)(a1 + 36)
    || (v11 = MiPrepareImagePagesForHotPatch((__int64 *)a1, *(_QWORD *)(a1 + 24), *v22), v11 >= 0) )
  {
    *(_QWORD *)&v55 = a1;
    DWORD2(v55) = v6;
    v19 = (int *)v53;
    RtlEnumerateHotPatchPatches(a2, v53, MiPrepareToHotPatchImagePatchCallback, &v55);
    v30 = **(_QWORD **)(*(_QWORD *)a1 + 80LL);
    if ( _bittest((const signed __int32 *)(v30 + 56), 0x11u) )
    {
      v31 = 0;
      for ( i = v30 + 128; i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 32) & 0x20000) != 0 && !RtlAreBitsSet(*(PRTL_BITMAP *)(a1 + 48), v31, *(_DWORD *)(i + 44)) )
        {
          v11 = -1073741746;
          goto LABEL_34;
        }
        v31 += *(_DWORD *)(i + 44);
      }
    }
    v11 = 0;
LABEL_34:
    if ( v11 >= 0 )
    {
      v4 = a2;
LABEL_36:
      if ( !v6 )
      {
        v33 = v3[4];
        v34 = *((_QWORD *)v3 + 3);
        v35 = *(_QWORD *)(a1 + 24);
        v36 = *(unsigned int **)(a1 + 8);
        StartingRunIndex = v36;
        for ( j = 0LL; (unsigned int)j < v33; j = (unsigned int)(j + 1) )
        {
          v38 = *(unsigned int *)(v34 + 8 * j);
          if ( (_DWORD)v38 )
          {
            v39 = RtlpCheckFunctionPatchApplied((char *)v36 + v38, v36, v17, v35);
            if ( v39 != (_DWORD)j )
              return (unsigned int)-1073740628;
            v36 = StartingRunIndex;
          }
        }
        LOBYTE(StartingRunIndex) = 0;
        RtlHotPatchSynchronizationRequired(
          *(_QWORD *)(a1 + 8),
          v4,
          v19,
          v18,
          v47,
          *(_QWORD *)(a1 + 24),
          *((_QWORD *)v3 + 3),
          *(PRTL_BITMAP *)(a1 + 40),
          v48,
          v49,
          v50,
          v51,
          v52,
          &StartingRunIndex);
        RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
        if ( (_BYTE)StartingRunIndex )
          *(_DWORD *)(a1 + 156) |= 1u;
      }
      v40 = 0;
      v41 = (_QWORD *)(a1 + 8);
      while ( 1 )
      {
        LODWORD(StartingRunIndex) = v40;
        NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), v40, (PULONG)&StartingRunIndex);
        v43 = NextForwardRunClear;
        if ( !NextForwardRunClear )
          break;
        v41 = (_QWORD *)(a1 + 8);
        v44 = (int)StartingRunIndex;
        v11 = MiPrepareImagePagesForHotPatch(
                (__int64 *)a1,
                *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
                NextForwardRunClear);
        if ( v11 < 0 )
          return (unsigned int)v11;
        v40 = v43 + v44;
      }
      v11 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
      if ( v11 >= 0 )
      {
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
        *(_QWORD *)(a1 + 72) = v45;
        *(_QWORD *)(a1 + 80) = v45 + *(_QWORD *)(a1 + 24) - *v41;
        return 0;
      }
    }
  }
  return (unsigned int)v11;
}
