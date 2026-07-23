/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140250300 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404DDD28 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1404DE104 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405D00B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405DA1A8 (IopLiveDumpTraceEstimatedPageCountNotAvailable.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     MmAllocateIndependentPages @ 0x140B3F870 (MmAllocateIndependentPages.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 MillisecondCounter; // rax
  unsigned __int64 v7; // r9
  _QWORD *v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // edx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  __int64 Pool2; // rax
  __int64 v21; // rax
  int v22; // r12d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  char *IndependentPages; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  char IsUnderMemoryPressure; // al
  unsigned int v30; // r14d
  __int64 v31; // rax
  int v32; // edx
  char v33; // r10
  char v34; // cl
  unsigned __int64 v36; // rax
  char *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  char *v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // r15
  unsigned __int64 v49; // rdx
  char *v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  char *v55; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  char v58; // [rsp+30h] [rbp-49h]
  unsigned __int64 v59; // [rsp+38h] [rbp-41h]
  char v60; // [rsp+48h] [rbp-31h]
  int v61; // [rsp+50h] [rbp-29h]
  int v62; // [rsp+58h] [rbp-21h]
  __int64 v63; // [rsp+60h] [rbp-19h]
  _QWORD v64[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v65[11]; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v66; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v67; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v68; // [rsp+F0h] [rbp+77h]
  __int64 v69; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v61 = 0;
  v3 = 0LL;
  v67 = 0LL;
  v60 = 0;
  v4 = 0LL;
  v58 = 0;
  v5 = 0LL;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0LL);
  v7 = (unsigned int)BufferChunkSizeInPages;
  v8 = (_QWORD *)(a1 + 680);
  v63 = MillisecondCounter;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v9 = ~(v7 - 1);
  v10 = *(_QWORD *)(a1 + 120);
  v11 = v9 & (v7 + *(_QWORD *)(a1 + 96) - 1LL);
  v12 = *(_QWORD *)(a1 + 104) - 1LL;
  *(_QWORD *)(a1 + 96) = v11;
  v13 = v11 / v7;
  v68 = v11 / v7;
  v14 = *(_QWORD *)(a1 + 128) - 1LL;
  *(_QWORD *)(a1 + 104) = v9 & (v7 + v12);
  v15 = v9 & (v7 + v14);
  v16 = v9 & (v7 + v10 - 1);
  *(_QWORD *)(a1 + 128) = v15;
  *(_QWORD *)(a1 + 120) = v16;
  v17 = *(_DWORD *)(a1 + 80);
  v59 = v15 / v7 + v16 / v7;
  v18 = v59 + v13;
  v62 = v59 + v13;
  if ( (v17 & 0x200) != 0 )
  {
    v36 = (*(_QWORD *)(a1 + 1144) >> 12) + ((*(_QWORD *)(a1 + 1144) & 0xFFFLL) != 0);
    if ( v18 * v7 > v36 )
    {
      *(_DWORD *)(a1 + 80) = v17 | 0x400;
      v18 = (v9 & v36) / v7;
      v62 = v18;
    }
  }
  v19 = (8 * v18 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 752) = Pool2;
  if ( !Pool2 )
    goto LABEL_34;
  if ( (*(_DWORD *)(a1 + 80) & 0x40000) != 0 )
  {
    v37 = (char *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 880) = v37;
    if ( v37 )
    {
      IopLiveDumpDiscardVirtualAddressRange(a1, v37, v19);
    }
    else
    {
      v64[0] = 6897LL;
      v65[0] = L"LineNum";
      v64[1] = -1073741801LL;
      v65[1] = L"NTStatus";
      IopLiveDumpTraceEventGeneric(
        L"ChunkCRCList allocation failed, IoSpaceCorruptionDetection is disabled!",
        2LL,
        v65,
        v64);
    }
  }
  v21 = ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 760) = v21;
  if ( !v21 )
    goto LABEL_34;
  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 752), v19);
  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 760), v19);
  v66 = 0LL;
  v22 = 1;
LABEL_6:
  v23 = v68;
  while ( v3 < v23 )
  {
    v69 = 0LL;
    v24 = v3;
    switch ( v22 )
    {
      case 1:
        if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
        {
          IopLiveDumpAllocateFromIOSpace(a1, *(_QWORD *)(a1 + 1104), v23 - v3, &v66);
          v3 = v66;
          if ( v66 != v24 )
          {
            v61 += v66 - v24;
            v4 += (unsigned int)BufferChunkSizeInPages * (v66 - v24);
          }
          v22 = 2;
          goto LABEL_6;
        }
        v22 = 2;
        break;
      case 2:
        if ( (*(_DWORD *)(a1 + 80) & 4) == 0 )
        {
          v40 = (char *)IopLiveDumpAllocateFromVMMemoryPartition(a1, BufferChunkSizeInBytes, &v69);
          if ( v40 )
          {
            v41 = *(_QWORD *)(a1 + 752);
            v42 = (unsigned int)BufferChunkSizeInPages;
            ++v67;
            v4 += (unsigned int)BufferChunkSizeInPages;
            v43 = BufferChunkSizeInBytes;
            *(_QWORD *)(v41 + 8 * v3) = v40;
            v44 = *(_QWORD *)(a1 + 760);
            *v8 += v42;
            v45 = v69;
            ++*(_QWORD *)(a1 + 744);
            *(_QWORD *)(v44 + 8 * v3++) = v45;
            v66 = v3;
            IopLiveDumpDiscardVirtualAddressRange(a1, v40, v43);
          }
          else
          {
            v22 = 3;
          }
          goto LABEL_6;
        }
        v22 = 3;
        break;
      case 3:
        if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
        {
          IopLiveDumpAllocateFromIOSpace(a1, 0LL, v23 - v3, &v66);
          v3 = v66;
          if ( v66 != v24 )
          {
            v60 += v66 - v24;
            v4 += (unsigned int)BufferChunkSizeInPages * (v66 - v24);
          }
          v22 = 4;
          goto LABEL_6;
        }
        v22 = 4;
        break;
      default:
        IndependentPages = (char *)MmAllocateIndependentPages(BufferChunkSizeInBytes, 0xFFFFFFFFLL);
        if ( !IndependentPages )
          goto LABEL_31;
        v26 = (unsigned int)BufferChunkSizeInPages;
        v27 = BufferChunkSizeInBytes;
        v4 += (unsigned int)BufferChunkSizeInPages;
        ++v58;
        *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3) = IndependentPages;
        v28 = *(_QWORD *)(a1 + 760);
        *v8 += v26;
        ++*(_QWORD *)(a1 + 744);
        *(_QWORD *)(v28 + 8 * v3++) = 0LL;
        v66 = v3;
        IopLiveDumpDiscardVirtualAddressRange(a1, IndependentPages, v27);
        IsUnderMemoryPressure = IopLiveDumpIsUnderMemoryPressure(a1);
        v23 = v68;
        if ( IsUnderMemoryPressure )
        {
          v5 = 0LL;
LABEL_14:
          *(_DWORD *)(a1 + 80) |= 0x1000u;
          v30 = -1073741248;
          LODWORD(v3) = v67;
          goto LABEL_15;
        }
        break;
    }
  }
LABEL_31:
  if ( *v8 < *(_QWORD *)(a1 + 104) )
  {
    LODWORD(v3) = v67;
    v5 = 0LL;
LABEL_34:
    v30 = -1073741670;
LABEL_15:
    IopLiveDumpFreeDumpBuffers(a1);
    *v8 = 0LL;
    goto LABEL_16;
  }
  v30 = 0;
  if ( *v8 < *(_QWORD *)(a1 + 96) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4176LL) |= 0x8000u;
    IopLiveDumpTraceEstimatedPageCountNotAvailable(*v8, *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 104));
  }
  v46 = 0LL;
  *(_QWORD *)(a1 + 216) = v3;
  v68 = 0LL;
  v47 = 2;
  v48 = 8 * v3;
  v5 = 0LL;
LABEL_52:
  v49 = v59;
LABEL_53:
  LODWORD(v66) = v47;
  while ( v46 < v49 )
  {
    v69 = 0LL;
    if ( v47 == 2 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 )
      {
        v47 = 4;
        goto LABEL_53;
      }
      v50 = (char *)IopLiveDumpAllocateFromVMMemoryPartition(a1, BufferChunkSizeInBytes, &v69);
      if ( !v50 )
      {
        v46 = v68;
        v47 = 4;
        goto LABEL_52;
      }
      v51 = *(_QWORD *)(a1 + 752);
      ++v67;
      v52 = BufferChunkSizeInBytes;
      *(_QWORD *)(v48 + v51) = v50;
      v53 = *(_QWORD *)(a1 + 760);
      *v8 += (unsigned int)BufferChunkSizeInPages;
      v54 = v69;
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v48 + v53) = v54;
      v48 += 8LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v50, v52);
    }
    else
    {
      if ( v47 != 4 )
        goto LABEL_65;
      v55 = (char *)MmAllocateIndependentPages(BufferChunkSizeInBytes, 0xFFFFFFFFLL);
      if ( !v55 )
        break;
      v56 = BufferChunkSizeInBytes;
      ++v58;
      *(_QWORD *)(v48 + *(_QWORD *)(a1 + 752)) = v55;
      *v8 += (unsigned int)BufferChunkSizeInPages;
      v57 = *(_QWORD *)(a1 + 760);
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v48 + v57) = 0LL;
      v48 += 8LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v55, v56);
      if ( (unsigned __int8)IopLiveDumpIsUnderMemoryPressure(a1) )
        goto LABEL_14;
    }
    v49 = v59;
    v46 = v68;
LABEL_65:
    ++v46;
    v5 += (unsigned int)BufferChunkSizeInPages;
    v68 = v46;
    v47 = v66;
  }
  LODWORD(v3) = v67;
LABEL_16:
  if ( v4 < *(_QWORD *)(a1 + 104) )
    v4 = 0LL;
  *(_QWORD *)(a1 + 688) = v4;
  if ( v5 )
  {
    v38 = *(_QWORD *)(a1 + 120);
    if ( v5 <= v38 )
      v38 = v5;
    *(_QWORD *)(a1 + 696) = v38;
    v39 = v5 - v38;
    if ( v39 )
    {
      v1 = *(_QWORD *)(a1 + 128);
      if ( v39 <= v1 )
        v1 = v39;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  *(_QWORD *)(a1 + 704) = v1;
  v31 = IopLiveDumpGetMillisecondCounter(0LL);
  v32 = BufferChunkSizeInPages;
  v33 = v58 * BufferChunkSizeInPages;
  v34 = BufferChunkSizeInPages;
  *(_QWORD *)(a1 + 768) = v31 - v63;
  IopLiveDumpTraceEstimatedAndAllocatedPageCount(a1, v62 * v32, v61 * v32, v3 * v32, v60 * v34, v33);
  return v30;
}
