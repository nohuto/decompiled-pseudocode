/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x14011D998
 * Callers:
 *     VidMmReserveGpuVirtualAddressRange @ 0x140046140 (VidMmReserveGpuVirtualAddressRange.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  UINT Alignment; // ecx
  UINT64 BaseAddress; // rcx
  __int64 v6; // r14
  UINT64 v7; // rax
  unsigned int v8; // r15d
  unsigned int v9; // r13d
  struct _KTHREAD **v10; // r9
  unsigned int i; // r12d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r10
  UINT64 v13; // r8
  UINT64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // eax
  UINT64 SizeInBytes; // rax
  UINT64 v19; // rax
  struct _KTHREAD **v20; // [rsp+90h] [rbp+8h]

  if ( (*((_BYTE *)this + 41064) & 2) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21943;
    goto LABEL_23;
  }
  Alignment = a2->Alignment;
  if ( !Alignment || ((Alignment - 1) & Alignment) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21949;
    goto LABEL_23;
  }
  BaseAddress = a2->BaseAddress;
  v6 = (1LL << *((_DWORD *)this + 10265) << 12) - 1;
  if ( (a2->Flags & 1) == 0 )
  {
    if ( BaseAddress && (BaseAddress & v6) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v17 = 21958;
    }
    else
    {
      SizeInBytes = a2->SizeInBytes;
      if ( SizeInBytes && (SizeInBytes & v6) == 0 )
        goto LABEL_8;
      WdLogSingleEntry0(1LL);
      v17 = 21964;
    }
LABEL_23:
    WdLogGlobalForLineNumber = v17;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
  if ( BaseAddress && (BaseAddress & 0xFFF) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21972;
    goto LABEL_23;
  }
  v7 = a2->SizeInBytes;
  if ( !v7 || (v7 & 0xFFF) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21978;
    goto LABEL_23;
  }
LABEL_8:
  v8 = 0;
  v9 = 1;
  v10 = (struct _KTHREAD **)*((_QWORD *)a2->hDxgkProcess + 1);
  v20 = v10;
  if ( (*(_DWORD *)(*((_QWORD *)a2->hDxgkProcess + 4) + 408LL) & 2) != 0 )
  {
    if ( !*((_BYTE *)this + 41067) )
    {
      result = VIDMM_PROCESS::OpenAdapter(v10, this);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      v10 = v20;
      *((_BYTE *)this + 41067) = 1;
    }
    v9 = *((_DWORD *)this + 1738);
  }
  for ( i = 0; i < v9; ++i )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                (VIDMM_PROCESS *)v10,
                                *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                i);
    if ( VirtualAddressAllocator )
    {
      v13 = a2->BaseAddress;
      v14 = a2->SizeInBytes;
      if ( !v13 && (a2->Flags & 1) == 0 )
      {
        v13 = *((_QWORD *)VirtualAddressAllocator + 3);
        v19 = v6 & v13;
        if ( (v6 & v13) != 0 && v14 > v19 )
          v14 -= v19;
      }
      v8 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
             VirtualAddressAllocator,
             v14,
             v13,
             0LL,
             0LL,
             a2->Alignment,
             D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
             0LL,
             (*(_BYTE *)&a2->0 & 1) == 0,
             &a2->StartVirtualAddress,
             0LL,
             0);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i) + 556LL) & 4) != 0 )
    {
      return 3221225485LL;
    }
    v10 = v20;
  }
  return v8;
}
