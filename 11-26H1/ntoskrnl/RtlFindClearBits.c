/*
 * XREFs of RtlFindClearBits @ 0x14035A520
 * Callers:
 *     MiQueuePinDriverAddressLog @ 0x14024E374 (MiQueuePinDriverAddressLog.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x140358D6C (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     MiGetPageFromSlabEntry @ 0x1403599BC (MiGetPageFromSlabEntry.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 *     MiReserveExistingDriverPtes @ 0x140B0C144 (MiReserveExistingDriverPtes.c)
 *     MiCheckForBootMappingsBetweenDrivers @ 0x140CFA720 (MiCheckForBootMappingsBetweenDrivers.c)
 *     MiAssignSystemVa @ 0x140CFF388 (MiAssignSystemVa.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // ebp
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // r14
  int v10; // ebx
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r15
  ULONG v14; // esi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  ULONG v20; // r10d
  ULONG v22; // r9d
  int v23; // edx
  unsigned __int64 *v24; // rsi
  bool v25; // zf
  __int64 v26; // rcx
  ULONG v27; // r10d
  unsigned __int64 v28; // rdi
  __int64 v29; // r10
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // edx
  char v33; // r8
  unsigned __int64 *v34; // rdx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  unsigned __int64 *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // edx
  unsigned int *v45; // [rsp+40h] [rbp+8h]
  ULONG v46; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v4 = HintIndex;
  v7 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    Buffer = BitMapHeader->Buffer;
    v9 = (unsigned __int8)Buffer & 4;
    v45 = Buffer;
    v10 = v9 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v11 = v10 + v7;
      v12 = v10 + v4;
      v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
      if ( v7 - v4 + 1 >= NumberToFind )
        break;
      v20 = -1;
LABEL_19:
      if ( !v4 )
        return v20;
      v22 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v22 = SizeOfBitMap;
      v7 = v22 - 1;
      v4 = 0;
    }
    v14 = v11 - NumberToFind + 1;
    v46 = v14;
    v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64)v12 >> 6;
    v17 = *(_QWORD *)&v13[8 * v16] | ((1LL << v12) - 1);
    v18 = (unsigned __int64 *)&v13[8 * v16];
    if ( NumberToFind > 0x7F )
    {
      v30 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v30 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( v17 )
      {
        if ( *++v18 )
          goto LABEL_66;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v31, v17);
        if ( v25 )
          v32 = 64;
        else
          v32 = 63 - v31;
      }
      else
      {
        v32 = 0;
      }
      while ( 1 )
      {
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) - v32;
        if ( v20 > v14 )
          break;
        v33 = NumberToFind - v32;
        v34 = &v18[(unsigned __int64)(NumberToFind - v32) >> 6];
        while ( ++v18 != v34 )
        {
          if ( *v18 )
            goto LABEL_66;
        }
        v38 = v33 & 0x3F;
        if ( !v38 )
          goto LABEL_13;
        v25 = !_BitScanForward64((unsigned __int64 *)&v39, *v18);
        if ( v25 )
          LODWORD(v39) = 64;
        if ( (unsigned int)v39 >= v38 )
          goto LABEL_13;
        do
        {
LABEL_66:
          v40 = v18;
          if ( (unsigned __int64)v18 > v30 )
            goto LABEL_17;
          ++v18;
        }
        while ( *v18 );
        v25 = !_BitScanReverse64((unsigned __int64 *)&v41, *v40);
        if ( v25 )
          v32 = 64;
        else
          v32 = 63 - v41;
      }
LABEL_17:
      v20 = -1;
      goto LABEL_18;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v23 = 0;
        v24 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v18 > v15 )
                goto LABEL_17;
              v17 = *v18;
              if ( *v18 != -1LL )
              {
                v23 = 0;
                break;
              }
            }
          }
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= NumberToFind )
            break;
          v27 = NumberToFind;
          v28 = ~v17;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v29, v28);
              goto LABEL_32;
            }
          }
          if ( v18 == v24 )
            goto LABEL_17;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v42, v17);
          v17 = v18[1];
          if ( v25 )
          {
            ++v18;
            v23 = 64;
          }
          else
          {
            v23 = 63 - v42;
            ++v18;
          }
        }
        LODWORD(v29) = -v23;
LABEL_32:
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v29;
        if ( v20 > v46 )
          goto LABEL_17;
LABEL_13:
        if ( v20 != -1 )
        {
          v20 -= v10;
          return v20;
        }
        goto LABEL_18;
      }
      while ( v17 == -1 )
      {
        if ( (unsigned __int64)++v18 > v15 )
          goto LABEL_17;
        v17 = *v18;
      }
      _BitScanForward64(&v19, ~v17);
      v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v19;
      if ( v20 <= v14 )
        goto LABEL_13;
      v20 = -1;
LABEL_18:
      Buffer = v45;
      goto LABEL_19;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_17;
          v17 = *v18;
        }
        v25 = !_BitScanReverse64((unsigned __int64 *)&v43, v17);
        if ( v25 )
          v44 = 64;
        else
          v44 = 63 - v43;
        v20 = (((unsigned int)(((char *)v18 - v13) >> 3) + 1) << 6) - v44;
        if ( v20 > v14 )
          goto LABEL_17;
        v35 = NumberToFind - v44;
        if ( NumberToFind == v44 )
          goto LABEL_13;
        v36 = v18[1];
        ++v18;
        v17 = v36;
        if ( v35 >= 0x40 )
          break;
LABEL_58:
        v25 = !_BitScanForward64((unsigned __int64 *)&v37, v17);
        if ( v25 )
          LODWORD(v37) = 64;
        if ( (unsigned int)v37 >= v35 )
          goto LABEL_13;
      }
      if ( !v36 )
      {
        v35 -= 64;
        if ( !v35 )
          goto LABEL_13;
        v17 = v18[1];
        ++v18;
        goto LABEL_58;
      }
    }
  }
  return v4 & 0xFFFFFFF8;
}
