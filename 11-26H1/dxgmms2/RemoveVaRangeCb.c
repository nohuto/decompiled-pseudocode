/*
 * XREFs of RemoveVaRangeCb @ 0x1401139C4
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 */

void __fastcall RemoveVaRangeCb(__int64 a1, CVirtualAddressAllocator *a2)
{
  __int64 v2; // rdi
  __int64 VidMmAllocFromOwner; // rax
  __int64 v5; // r8
  int v6; // [rsp+50h] [rbp-28h]

  v2 = a1 - 8;
  if ( byte_14008A202 < 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*(_DWORD *)(v2 + 72) & 0xF, *(_QWORD *)(v2 + 64));
    v6 = v5;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      *(_QWORD *)(v2 + 80),
      &EndGpuVirtualAddressRangeMapping,
      v5,
      a2,
      VidMmAllocFromOwner,
      *(_QWORD *)(v2 + 80),
      *(_QWORD *)(v2 + 104),
      *(_QWORD *)(v2 + 112),
      *(_QWORD *)(v2 + 96),
      *(_QWORD *)(v2 + 88),
      v6,
      *(_QWORD *)(v2 + 120),
      *(_QWORD *)(v2 + 128));
  }
  *(_DWORD *)(v2 + 72) &= ~0x4000u;
  CVirtualAddressAllocator::RemoveVaRangeFromVad(a2, (struct VIDMM_MAPPED_VA_RANGE *)v2, 0, 1u, 0);
}
