/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x1405CF1A8
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140250300 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     RtlSetAllBitsEx @ 0x1403711E0 (RtlSetAllBitsEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404DDD28 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopGetPhysicalMemoryBlock @ 0x1405CC17C (IopGetPhysicalMemoryBlock.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x1405CF108 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CF894 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405D047C (IopLiveDumpAllocateIptBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405D0650 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpReleaseResources @ 0x1405D3E34 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1405D4180 (IopLiveDumpTraceBufferAllocation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // rsi
  _DWORD *PhysicalMemoryBlock; // rax
  _QWORD *v5; // r13
  int MappingResources; // edi
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 Pool2; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 i; // rdi
  unsigned int v25; // r12d
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 j; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int k; // r14d
  int v34; // ecx
  char v35; // al
  __int64 v36; // rax
  __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  char v39; // [rsp+40h] [rbp-C8h] BYREF
  bool v40; // [rsp+41h] [rbp-C7h] BYREF
  bool v41; // [rsp+42h] [rbp-C6h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int64 *v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  char *v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  __int64 *v54; // [rsp+C8h] [rbp-40h]
  __int64 v55; // [rsp+D0h] [rbp-38h]
  __int64 *v56; // [rsp+D8h] [rbp-30h]
  __int64 v57; // [rsp+E0h] [rbp-28h]
  bool *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  __int64 *v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+100h] [rbp-8h]
  bool *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  __int64 *v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  *(_QWORD *)(a1 + 312) = a1;
  *(_DWORD *)(a1 + 320) = 0;
  v3 = MillisecondCounter;
  v38 = MillisecondCounter;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  PhysicalMemoryBlock = (_DWORD *)IopGetPhysicalMemoryBlock();
  v5 = PhysicalMemoryBlock;
  if ( PhysicalMemoryBlock )
  {
    v7 = *PhysicalMemoryBlock;
    if ( !v7 )
    {
      MappingResources = -1073741595;
      goto LABEL_50;
    }
    v8 = v5[2 * (unsigned int)(v7 - 1) + 2] + v5[2 * (unsigned int)(v7 - 1) + 3];
    *(_QWORD *)(a1 + 88) = v8;
    v9 = (((unsigned __int64)(v8 + 7) >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Pool2 = ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
      goto LABEL_6;
    if ( IopLiveDumpIsUnderMemoryPressure(a1) )
    {
LABEL_8:
      MappingResources = -1073741248;
      goto LABEL_49;
    }
    v11 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 584) = *(_QWORD *)(a1 + 592);
    *(_QWORD *)(a1 + 576) = v11;
    RtlSetAllBitsEx((_QWORD *)(a1 + 576));
    IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 592), (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    if ( (*(_DWORD *)(a1 + 80) & 0x8000) != 0 )
      IopLiveDumpAllocAndInitProcessFilters(a1);
    v12 = v9 + 8320;
    if ( VslVsmEnabled )
    {
      v12 += v9;
      if ( (HvlpFlags & 2) != 0 )
        v12 += v9;
    }
    v13 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v14 = ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 560) = v14;
    if ( v14 )
    {
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
        goto LABEL_8;
      v15 = *(_QWORD **)(a1 + 560);
      *(_QWORD *)(a1 + 568) = v13;
      v15[1028] = v13;
      v16 = *(_QWORD *)(a1 + 88);
      v15[1030] = v16;
      *(_QWORD *)(a1 + 544) = v16;
      *(_QWORD *)(a1 + 552) = v15 + 1031;
      memset_0(v15 + 1031, 0, 4 * ((v16 >> 5) + ((v16 & 0x1F) != 0)));
      IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 560), *(_QWORD *)(a1 + 568));
      v17 = ExAllocatePool2(0x40uLL);
      *(_QWORD *)(a1 + 648) = v17;
      if ( v17 )
      {
        if ( IopLiveDumpIsUnderMemoryPressure(a1) )
          goto LABEL_8;
        v18 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(a1 + 608) = *(_QWORD *)(a1 + 648);
        *(_QWORD *)(a1 + 600) = v18;
        IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 648), (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        v19 = *(_QWORD *)(a1 + 88);
        if ( VslVsmEnabled )
        {
          *(_QWORD *)(a1 + 632) = v19;
          *(_QWORD *)(a1 + 640) = (char *)v15 + v9 + 8248;
          if ( (HvlpFlags & 2) != 0 )
            v20 = (__int64)v15 + 2 * v9 + 8248;
          else
            v20 = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 624) = v20;
        }
        else
        {
          *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 616) = v19;
          v21 = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 640) = v21;
        }
        v22 = ExAllocatePool2(0x40uLL);
        *(_QWORD *)(a1 + 672) = v22;
        if ( v22 )
        {
          if ( IopLiveDumpIsUnderMemoryPressure(a1) )
            goto LABEL_8;
          v23 = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 664) = *(_QWORD *)(a1 + 672);
          *(_QWORD *)(a1 + 656) = v23;
          IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 672), (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL);
          for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
            IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(i + 16), *(unsigned int *)(i + 24));
          MappingResources = IopLiveDumpAllocateMappingResources(a1);
          if ( MappingResources < 0 )
            goto LABEL_49;
          if ( IopLiveDumpIsUnderMemoryPressure(a1) )
            goto LABEL_8;
          MappingResources = IopLiveDumpEstimateMemoryPages(a1);
          if ( MappingResources < 0 )
            goto LABEL_49;
          MappingResources = IopLiveDumpAllocateDumpBuffers(a1);
          if ( MappingResources >= 0 )
          {
            MappingResources = IopLiveDumpAllocateExtraBuffers(a1);
            if ( MappingResources >= 0 )
            {
              if ( !IptInterface || (MappingResources = IopLiveDumpAllocateIptBuffers(a1), MappingResources >= 0) )
                IopLiveDumpTraceBufferAllocation(a1);
            }
          }
          v25 = KeNumberProcessors_0;
          v26 = 8LL * (unsigned int)KeNumberProcessors_0;
          v27 = ExAllocatePool2(0x40uLL);
          *(_QWORD *)(a1 + 1120) = v27;
          if ( v27 )
          {
            v28 = (unsigned int)BufferChunkSizeInPages;
            *(_DWORD *)(a1 + 1112) = v25;
            v29 = (8 * v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            for ( j = 0LL; (unsigned int)j < v25; j = (unsigned int)(j + 1) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1120) + 8 * j) = ExAllocatePool2(0x40uLL);
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1120) + 8 * j) )
                goto LABEL_6;
            }
            v31 = ExAllocatePool2(0x40uLL);
            *(_QWORD *)(a1 + 1128) = v31;
            if ( v31 )
            {
              v32 = ExAllocatePool2(0x40uLL);
              *(_QWORD *)(a1 + 1136) = v32;
              if ( v32 )
              {
                if ( !IopLiveDumpIsUnderMemoryPressure(a1) )
                {
                  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 1120), v26);
                  for ( k = 0; k < *(_DWORD *)(a1 + 1112); ++k )
                    IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(*(_QWORD *)(a1 + 1120) + 8LL * k), v29);
                  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 1128), v29);
                  IopLiveDumpDiscardVirtualAddressRange(a1, *(char **)(a1 + 1136), v29);
                  goto LABEL_49;
                }
                goto LABEL_8;
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 1112) = 0;
          }
        }
      }
    }
LABEL_6:
    MappingResources = -1073741670;
LABEL_49:
    v3 = v38;
    goto LABEL_50;
  }
  MappingResources = -1073741670;
LABEL_50:
  if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
  {
    v34 = *(_DWORD *)(a1 + 80);
    v48 = &v38;
    v42 = *(_QWORD *)(a1 + 680);
    v50 = &v42;
    v35 = *(_BYTE *)(a1 + 44) & 1;
    v38 = 0x1000000LL;
    v39 = v35;
    v52 = &v39;
    v43 = *(_QWORD *)(a1 + 696);
    v54 = &v43;
    v44 = *(_QWORD *)(a1 + 704);
    v56 = &v44;
    v40 = (v34 & 0x200) != 0;
    v41 = (v34 & 0x400) != 0;
    v58 = &v40;
    v45 = *(_QWORD *)(a1 + 1144);
    v60 = &v45;
    v62 = &v41;
    v49 = 8LL;
    v51 = 8LL;
    v53 = 1LL;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 1LL;
    v61 = 8LL;
    v63 = 1LL;
    v36 = IopLiveDumpGetMillisecondCounter(0);
    v65 = 8LL;
    v46 = v36 - v3;
    v64 = &v46;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06D90,
      (unsigned __int8 *)byte_140047CA0,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      0xBu,
      &v47);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( MappingResources < 0 )
    IopLiveDumpReleaseResources(a1);
  return (unsigned int)MappingResources;
}
