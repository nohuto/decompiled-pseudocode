/*
 * XREFs of NvmeControllerEssentialInitialize @ 0x1400F2C48
 * Callers:
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCbPrintfA @ 0x140038338 (RtlStringCbPrintfA.c)
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     NvmeGetDeviceBaseEx @ 0x140079BE8 (NvmeGetDeviceBaseEx.c)
 *     NvmeControllerAllocateInternalBuffer @ 0x1400F0620 (NvmeControllerAllocateInternalBuffer.c)
 *     NvmeControllerCreateAdminQueue @ 0x1400F1CF0 (NvmeControllerCreateAdminQueue.c)
 *     NvmeControllerGetMaxTransferSize @ 0x1400F4A5C (NvmeControllerGetMaxTransferSize.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400F4AD0 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeGetRegistrySettings @ 0x1400FEF44 (NvmeGetRegistrySettings.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x14011FB74 (NvmeControllerCreateExtendedCommandPool.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerEssentialInitialize(_QWORD *DeferredContext, char a2)
{
  __int64 v2; // r8
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  __int64 v10; // rdx
  size_t v11; // rsi
  char *Pool; // rax
  _QWORD *DeviceBase; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned int v16; // r10d
  unsigned int i; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // ecx
  bool v25; // zf
  int v26; // edx
  __int64 v27; // rdx
  int MaxTransferSize; // eax
  unsigned int v29; // eax
  char v30; // cl
  char pszDest[128]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = DeferredContext[16];
  v5 = *(_QWORD *)(v2 + 592);
  v6 = v2 + 176;
  if ( !v5 )
    return 3221225860LL;
  *((_WORD *)DeferredContext + 470) = *(_WORD *)(v5 + 8);
  *((_WORD *)DeferredContext + 471) = *(_WORD *)(v5 + 10);
  *((_BYTE *)DeferredContext + 944) = *(_BYTE *)(v5 + 16);
  RtlStringCbPrintfA(
    pszDest,
    0x80uLL,
    "Segment:%u Bus:%u Device:%u Function:%u",
    (unsigned __int16)(*(_DWORD *)(v2 + 584) >> 8),
    (unsigned __int8)*(_DWORD *)(v2 + 584),
    **(unsigned __int16 **)(v2 + 592),
    *(unsigned __int16 *)(*(_QWORD *)(v2 + 592) + 2LL));
  v8 = -1LL;
  do
    ++v8;
  while ( pszDest[v8] );
  v9 = (void *)DeferredContext[94];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52436152u);
  v10 = (unsigned int)(v8 + 1);
  v11 = v10;
  Pool = (char *)RaidAllocatePool(64LL, v10, 1380147538LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[94] = Pool;
  if ( !Pool )
    return 3221225626LL;
  RtlStringCbCopyA(Pool, v11, pszDest);
  DeviceBase = 0LL;
  v14 = *(_DWORD *)(v5 + 24) & 0xFFFFC000;
  DeferredContext[116] = v14;
  v15 = v14 | ((unsigned __int64)*(unsigned int *)(v5 + 28) << 32);
  DeferredContext[116] = v15;
  v16 = *(_DWORD *)(v6 + 52);
  if ( v16 )
  {
    for ( i = 0; i < v16; ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL * i) == v15 )
      {
        _mm_lfence();
        DeviceBase = (_QWORD *)NvmeGetDeviceBaseEx(
                                 DeferredContext[16],
                                 *(_DWORD *)(v6 + 8),
                                 *(_DWORD *)(v6 + 4),
                                 *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL * i),
                                 *(_DWORD *)(*(_QWORD *)(v6 + 56) + 16LL * i + 8),
                                 *(_BYTE *)(*(_QWORD *)(v6 + 56) + 16LL * i + 12) == 0);
        break;
      }
    }
  }
  DeferredContext[115] = DeviceBase;
  if ( !DeviceBase )
  {
    *((_DWORD *)DeferredContext + 298) = 4;
    return 3221225858LL;
  }
  v18 = DeferredContext[115];
  DeferredContext[73] = *DeviceBase;
  v19 = HIDWORD(DeferredContext[73]);
  *((_DWORD *)DeferredContext + 144) = *(_DWORD *)(v18 + 8);
  *((_DWORD *)DeferredContext + 304) = 4 << (v19 & 0xF);
  *((_DWORD *)DeferredContext + 305) = NvmeControllerGetReadyTimeout(DeferredContext);
  if ( !a2 )
    NvmeGetRegistrySettings(DeferredContext, v20);
  v21 = 3;
  v22 = 1024;
  if ( *(_DWORD *)(v6 + 20) != 1 )
    v21 = 1;
  *((_DWORD *)DeferredContext + 226) = v21;
  v23 = DeferredContext[131];
  *((_WORD *)DeferredContext + 3) = 256;
  if ( *(_DWORD *)(v23 + 4) )
  {
    v22 = *(_DWORD *)(v23 + 4);
  }
  else if ( PhysicalMemorySize )
  {
    if ( (unsigned __int64)PhysicalMemorySize < 0x800000000LL )
    {
      if ( (unsigned __int64)PhysicalMemorySize <= 0x1000000000LL )
        goto LABEL_29;
    }
    else if ( (unsigned __int64)PhysicalMemorySize <= 0x1000000000LL )
    {
      v22 = 2048;
      goto LABEL_29;
    }
    v22 = 4096;
  }
LABEL_29:
  v24 = (unsigned __int16)*((_DWORD *)DeferredContext + 146) + 1;
  if ( v22 < v24 )
    v24 = v22;
  *((_DWORD *)DeferredContext + 2) = v24;
  v25 = *(_DWORD *)(v6 + 20) == 1;
  *(_DWORD *)(v6 + 48) = 3;
  *(_BYTE *)(v6 + 81) = 1;
  *(_BYTE *)(v6 + 145) = 0;
  *(_DWORD *)(v6 + 148) = 1;
  *(_DWORD *)(v6 + 160) = v25 + 1;
  v25 = *(_BYTE *)(v6 + 144) == 0x80;
  *(_DWORD *)(v6 + 216) = 0;
  if ( v25 )
    *(_BYTE *)(v6 + 144) = 2;
  v26 = *(_DWORD *)(v6 + 220) | 0x2B;
  *(_BYTE *)(v6 + 147) = 0;
  *(_DWORD *)(v6 + 220) = v26;
  if ( (*(_DWORD *)(DeferredContext[131] + 24LL) & 2) == 0 )
    *(_DWORD *)(v6 + 220) = v26 | 4;
  *(_DWORD *)(v6 + 24) = 0x200000;
  result = NvmeControllerCreateAdminQueue(DeferredContext);
  if ( (int)result >= 0 )
  {
    if ( a2
      || (result = NvmeControllerAllocateInternalBuffer((__int64)DeferredContext, v6), (int)result >= 0)
      && ((*(_DWORD *)(DeferredContext[16] + 992LL) & 8) == 0 || (*(_DWORD *)(DeferredContext[131] + 24LL) & 8) == 0
        ? (DeferredContext[17] &= ~0x100000000uLL)
        : (DeferredContext[17] |= 0x100000000uLL),
          result = NvmeControllerCreateExtendedCommandPool(DeferredContext),
          (int)result >= 0) )
    {
      result = NvmeControllerReset(DeferredContext, v27, 1LL);
      if ( (int)result >= 0 )
      {
        result = NvmeControllerInitPhase1(DeferredContext);
        if ( (int)result >= 0 )
        {
          MaxTransferSize = NvmeControllerGetMaxTransferSize(DeferredContext);
          *((_DWORD *)DeferredContext + 155) = MaxTransferSize;
          *(_DWORD *)(v6 + 24) = MaxTransferSize;
          v29 = 0xA00000u / *((_DWORD *)DeferredContext + 155);
          if ( v29 >= 0x20 )
          {
            v30 = 32;
          }
          else
          {
            v30 = 10;
            if ( v29 > 0xA )
              v30 = 0xA00000u / *((_DWORD *)DeferredContext + 155);
          }
          *((_BYTE *)DeferredContext + 1730) = v30;
          *(_DWORD *)(v6 + 28) = 513;
          *(_BYTE *)(v6 + 72) = 1;
          *(_BYTE *)(v6 + 97) = 1;
          *(_BYTE *)(v6 + 146) = -1;
          *(_DWORD *)(v6 + 212) = 32;
          *(_DWORD *)(v6 + 204) = 32;
          *(_DWORD *)(v6 + 208) = 32;
          DeferredContext[121] &= ~2uLL;
          return 0LL;
        }
      }
      else
      {
        *((_DWORD *)DeferredContext + 298) = 5;
      }
    }
  }
  return result;
}
