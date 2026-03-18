/*
 * XREFs of DiscardCpuHostApertureRange @ 0x1400B1B94
 * Callers:
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1D50 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PE.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011D2E0 (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DiscardCpuHostApertureRange(__int64 a1, VIDMM_CPU_HOST_APERTURE *a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v5; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // [rsp+28h] [rbp-80h]
  unsigned int v11; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v3 = *(_QWORD **)(a3 + 16);
  v5 = *(_QWORD *)(a1 + 56);
  v7 = *v3;
  if ( (*(_BYTE *)(*v3 + 36LL) & 1) != 0 )
  {
    v8 = *(_QWORD *)(v7 + 48);
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 4563;
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v8 + 8) + 16LL), &ApcState);
    HIDWORD(v10) = 0;
    v9 = VidMmRotateLegacyAllocation(v5, v3, 3LL);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741558 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v9, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    *(_BYTE *)(v7 + 36) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 4LL * *(unsigned int *)(a3 + 32));
    LODWORD(v10) = 0;
    McTemplateK0ppqq_EtwWriteTransfer(a1, &EventCpuHostApertureDiscardRange, v11, v5, *(_QWORD *)(a3 + 16), v10, v11);
  }
  VIDMM_CPU_HOST_APERTURE::UnmapRange(a2, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a3);
  VIDMM_CPU_HOST_APERTURE::ReleaseRange(a2, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a3);
  v3[18] = 0LL;
}
