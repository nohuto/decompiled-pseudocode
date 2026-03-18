/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400CDDC0
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x140042120 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1400CC3F8 (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdx
  D3DGPU_SIZE_T Size; // rdx
  CVirtualAddressAllocator *VirtualAddressAllocator; // r14
  int v11; // r8d
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  D3DGPU_SIZE_T v13; // rdx
  D3DGPU_VIRTUAL_ADDRESS v14; // r8
  int v15; // esi
  int v17; // eax
  char v18; // al
  int v19; // eax
  D3DGPU_VIRTUAL_ADDRESS v20; // rdx
  unsigned __int64 *MaximumAddress; // [rsp+28h] [rbp-E0h]
  unsigned int v22; // [rsp+30h] [rbp-D8h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+38h] [rbp-D0h]
  UINT64 DriverProtection; // [rsp+40h] [rbp-C8h]
  _QWORD v25[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+78h] [rbp-90h]
  __int128 v27; // [rsp+88h] [rbp-80h]
  __int128 v28; // [rsp+98h] [rbp-70h]
  __int128 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  _QWORD v31[12]; // [rsp+C8h] [rbp-40h] BYREF
  struct VIDMM_MAPPED_VA_RANGE *v32; // [rsp+158h] [rbp+50h] BYREF

  if ( (*((_BYTE *)this + 41064) & 0x10) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 20116;
    return 3221225485LL;
  }
  BaseAddress = a4->BaseAddress;
  a4->PagingFenceValue = 0LL;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, BaseAddress);
    WdLogGlobalForLineNumber = 20125;
    return 3221225485LL;
  }
  Size = a4->Size;
  if ( (Size & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, Size);
    WdLogGlobalForLineNumber = 20131;
    return 3221225485LL;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 20138;
    return 3221225485LL;
  }
  v11 = 0x10000;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3044LL) >= 2400
    && (*((_BYTE *)this + 41064) & 1) != 0
    && *((_DWORD *)this + 10264) >= 0x28u
    && !(a4->Size % (unsigned int)(4096 << *((_DWORD *)this + 10265))) )
  {
    v11 = 4096 << *((_DWORD *)this + 10265);
  }
  MinimumAddress = a4->MinimumAddress;
  v13 = a4->Size;
  DriverProtection = a4->DriverProtection;
  ReservationType = a4->ReservationType;
  v22 = v11;
  v14 = a4->BaseAddress;
  MaximumAddress = (unsigned __int64 *)a4->MaximumAddress;
  v32 = 0LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v13,
          v14,
          MinimumAddress,
          (unsigned __int64)MaximumAddress,
          v22,
          ReservationType,
          DriverProtection,
          0,
          &a4->VirtualAddress,
          &v32,
          1);
  if ( v15 < 0 )
  {
    WdLogSingleEntry5(3LL, VirtualAddressAllocator, a4->Size, a4->BaseAddress, a4->MinimumAddress, a4->MaximumAddress);
    WdLogGlobalForLineNumber = 20177;
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      memset(v31, 0, 0x58uLL);
      v17 = *((_DWORD *)a3 + 28);
      v31[0] = -4294967183LL;
      v31[6] = v32;
      v31[5] = VirtualAddressAllocator;
      memset(&v31[7], 0, 24);
      if ( (v17 & 1) != 0 )
      {
        v19 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v31, 1);
      }
      else
      {
        v25[0] = 113LL;
        v30 = 0LL;
        v25[1] = *((_QWORD *)a3 + 12);
        v18 = *((_DWORD *)v32 + 18) & 0xF;
        v26 = 0LL;
        if ( v18 == 1 )
          *(_QWORD *)&v26 = *((_QWORD *)v32 + 8);
        v28 = xmmword_140060B68;
        v27 = *(_OWORD *)&v31[5];
        v29 = *(_OWORD *)&v31[9];
        BYTE8(v29) = 1;
        v19 = VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v25, 1, 0LL);
      }
      v15 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(3LL, VirtualAddressAllocator, a4->Size);
        v20 = a4->BaseAddress;
        WdLogGlobalForLineNumber = 20205;
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, v20);
      }
    }
  }
  return (unsigned int)v15;
}
