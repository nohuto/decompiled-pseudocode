/*
 * XREFs of ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140117E64
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9630 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 */

void __fastcall VidMmiLogEndVaRangeMapping(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 VidMmAllocFromOwner; // rax
  int v8; // r10d
  _QWORD *v9; // r11
  __int64 v10; // r8
  int v11; // [rsp+50h] [rbp-28h]

  if ( byte_14008A202 < 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a2 + 18) & 0xF, *((_QWORD *)a2 + 8));
    v11 = v8;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      a5,
      &EndGpuVirtualAddressRangeMapping,
      v10,
      a1,
      VidMmAllocFromOwner,
      v10,
      a4,
      a5,
      v9[12],
      v9[11],
      v11,
      v9[15],
      v9[16]);
  }
}
