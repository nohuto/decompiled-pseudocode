/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400CD8CC
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  PVOID v10; // rax
  struct VIDMM_MAPPED_VA_RANGE *v11; // rax
  VIDMM_MAPPED_VA_RANGE *v12; // rbx
  __int64 v14; // rcx

  v10 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v10
    && (v11 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v10,
                                                (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                                (__int64)a2,
                                                a4,
                                                a4 + a5,
                                                0,
                                                0LL,
                                                0LL,
                                                (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                                a6.Value,
                                                a7,
                                                0LL,
                                                0LL,
                                                0),
        (v12 = v11) != 0LL) )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, a2, 0, v11) >= 0 )
      return v12;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2775;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A830);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2769;
    DxgkLogInternalTriageEvent(v14, 262145LL);
  }
  return 0LL;
}
