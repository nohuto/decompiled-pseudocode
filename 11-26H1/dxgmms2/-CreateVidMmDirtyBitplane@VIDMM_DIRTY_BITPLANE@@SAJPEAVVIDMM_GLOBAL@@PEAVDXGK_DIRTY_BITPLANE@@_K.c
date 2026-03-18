/*
 * XREFs of ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x140050228
 * Callers:
 *     ?CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14009D378 (-CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAGII@Z @ 0x140041B48 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAGII@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_DIRTY_BITPLANE::CreateVidMmDirtyBitplane(
        struct VIDMM_GLOBAL *this,
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a3,
        struct VIDMM_DIRTY_BITPLANE **a4)
{
  unsigned int v7; // r12d
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned int v9; // r15d
  int v10; // ebx
  __int64 v11; // rax
  char *v12; // rdi
  unsigned __int16 v13; // ax
  unsigned int *v14; // r13
  __int64 v15; // rax
  __int64 Buffer_high; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rbp
  BOOLEAN v24; // al
  ULONG v25; // ecx
  PULONG Buffer; // rax
  unsigned __int64 v27; // rdx
  char *v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int128 v35; // xmm0
  unsigned __int64 v36; // rdx
  unsigned __int64 *v38; // [rsp+80h] [rbp-A8h]
  _QWORD v39[19]; // [rsp+90h] [rbp-98h] BYREF
  __int64 StartingRunIndex; // [rsp+140h] [rbp+18h] BYREF
  struct VIDMM_DIRTY_BITPLANE **v41; // [rsp+148h] [rbp+20h]

  v41 = a4;
  v7 = 0;
  VirtualAddressAllocator = 0LL;
  memset(v39, 0, 0x58uLL);
  v9 = 0;
  if ( a3 <= 0xFFFFF000 )
  {
    v11 = operator new(72LL, 0x32366956u, 256LL);
    v12 = (char *)v11;
    if ( !v11 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 75;
      return (unsigned int)-1073741801;
    }
    *(_QWORD *)v11 = 0LL;
    *(_OWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    v13 = VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(this, 0, BitMapHeader[2].SizeOfBitMap);
    *(_QWORD *)v12 = this;
    v14 = (unsigned int *)(v12 + 8);
    *((_QWORD *)v12 + 3) = *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 5040) + 1752LL) + 8LL * v13);
    v15 = **(_QWORD **)&BitMapHeader[3].SizeOfBitMap;
    *((_DWORD *)v12 + 3) = 0;
    Buffer_high = HIDWORD(BitMapHeader[4].Buffer);
    v17 = (unsigned int)(BitMapHeader->SizeOfBitMap - Buffer_high);
    StartingRunIndex = v15;
    v18 = (__int64)BitMapHeader[1].Buffer * (unsigned int)RtlNumberOfSetBitsInRange(BitMapHeader, Buffer_high, v17);
    v38 = (unsigned __int64 *)(v12 + 40);
    if ( a3 > v18 )
      a3 = v18;
    *((_QWORD *)v12 + 5) = a3;
    v19 = a3 >> 12;
    v20 = 8LL * (unsigned int)v19;
    *v14 = v19;
    if ( !is_mul_ok((unsigned int)v19, 8uLL) )
      v20 = -1LL;
    v21 = (_QWORD *)operator new[](v20, 0x31376956u, 256LL);
    if ( v21 )
    {
      v22 = *v14;
      if ( *v14 )
      {
        v23 = StartingRunIndex;
        do
        {
          v24 = RtlTestBit(BitMapHeader, HIDWORD(BitMapHeader[4].Buffer));
          v25 = HIDWORD(BitMapHeader[4].Buffer);
          if ( !v24 )
          {
            LODWORD(StartingRunIndex) = 0;
            v25 = HIDWORD(BitMapHeader[4].Buffer)
                + RtlFindNextForwardRunClear(BitMapHeader, v25, (PULONG)&StartingRunIndex);
          }
          HIDWORD(BitMapHeader[4].Buffer) = v25 + 1;
          if ( v25 + 1 == BitMapHeader->SizeOfBitMap )
          {
            HIDWORD(BitMapHeader[4].Buffer) = 0;
            v7 = 0;
          }
          else
          {
            v7 = 261;
          }
          Buffer = BitMapHeader[1].Buffer;
          v27 = v23 + (_QWORD)Buffer * v25;
          v28 = (char *)Buffer + v27;
          while ( v27 < (unsigned __int64)v28 )
          {
            v29 = v9;
            v30 = v27 >> 12;
            ++v9;
            v27 += 4096LL;
            v21[v29] = v30;
          }
          v22 = *v14;
        }
        while ( v9 < *v14 );
      }
      *((_QWORD *)v12 + 7) = *v21;
      *((_QWORD *)v12 + 8) = v21[v22 - 1];
      *((_QWORD *)v12 + 2) = v21;
      v31 = VIDMM_GLOBAL::AdapterId(this);
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v31, 0);
      if ( VirtualAddressAllocator )
      {
        v10 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                VirtualAddressAllocator,
                *v38,
                v32,
                *((_QWORD *)this + 5135),
                *((_QWORD *)this + 5136),
                0x1000u,
                (unsigned __int64 *)v12 + 4);
        if ( v10 < 0 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 155;
          goto LABEL_30;
        }
        v33 = CVirtualAddressAllocator::MapVirtualAddressRange(
                VirtualAddressAllocator,
                v12,
                0LL,
                9LL,
                *v38,
                *((_QWORD *)v12 + 4),
                0LL,
                0LL,
                4096,
                17LL,
                0LL,
                0,
                0LL,
                0,
                0);
        *((_QWORD *)v12 + 6) = v33;
        if ( v33 )
        {
          *(_DWORD *)(v33 + 72) |= 0x2000u;
          v34 = *((_QWORD *)v12 + 6);
          v39[0] = 113LL;
          v39[5] = VirtualAddressAllocator;
          *(_QWORD *)(v34 + 48) = 0LL;
          v35 = *(_OWORD *)v14;
          v39[6] = *((_QWORD *)v12 + 6);
          *(_OWORD *)&v39[7] = v35;
          v10 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v39, 1);
          if ( v10 >= 0 )
          {
            operator delete(v21);
            *v41 = (struct VIDMM_DIRTY_BITPLANE *)v12;
            return v7;
          }
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 192;
          goto LABEL_30;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 175;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 141;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 104;
    }
    v10 = -1073741801;
LABEL_30:
    v36 = *((_QWORD *)v12 + 4);
    if ( v36 )
    {
      CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, v36);
      *((_QWORD *)v12 + 4) = 0LL;
    }
    operator delete(v12);
    if ( v21 )
      operator delete(v21);
    return (unsigned int)v10;
  }
  WdLogSingleEntry1(3LL, a3);
  WdLogGlobalForLineNumber = 66;
  return (unsigned int)-1073741811;
}
