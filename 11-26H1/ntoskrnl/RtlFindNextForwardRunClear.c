/*
 * XREFs of RtlFindNextForwardRunClear @ 0x14041D9C0
 * Callers:
 *     HalpIrtAllocateIndex @ 0x140784614 (HalpIrtAllocateIndex.c)
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 *     HvpGenerateLogMetadata @ 0x1408B70C4 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1408B7184 (HvpCountSetRangesInVector.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     PnprMirrorMarkedPages @ 0x140BF1F18 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140BFA800 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkSnapSharedExports @ 0x140C44130 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // edi
  ULONG v4; // r9d
  unsigned int *Buffer; // rsi
  unsigned int *v7; // rax
  unsigned __int64 v8; // r10
  _DWORD *v9; // rcx
  int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // r11
  ULONG v13; // ebx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  else
  {
    Buffer = BitMapHeader->Buffer;
    v7 = &Buffer[(unsigned __int64)FromIndex >> 5];
    v8 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    v9 = v7 + 1;
    v10 = *v7 | ((1 << (FromIndex & 0x1F)) - 1);
    while ( 1 )
    {
      v11 = ~v10;
      if ( v11 )
        break;
      if ( (unsigned __int64)v9 > v8 )
        goto LABEL_17;
      v10 = v7[1];
      ++v7;
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    v13 = v12 + 32 * (v7 - Buffer);
    if ( v13 > SizeOfBitMap )
    {
LABEL_17:
      v13 = SizeOfBitMap;
      goto LABEL_15;
    }
    v14 = ~(v11 | ((1 << v12) - 1));
    while ( 1 )
    {
      if ( v14 )
      {
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        goto LABEL_12;
      }
      v4 += 32;
      if ( (unsigned __int64)(v7 + 1) > v8 )
        break;
      v14 = v7[1];
      ++v7;
    }
    LODWORD(v15) = 32;
LABEL_12:
    v16 = SizeOfBitMap;
    v17 = v15 + 32 * (v7 - Buffer);
    if ( v17 <= SizeOfBitMap )
      v16 = v17;
    v4 = v16 - v13;
LABEL_15:
    *StartingRunIndex = v13;
    return v4;
  }
}
