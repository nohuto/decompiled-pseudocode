/*
 * XREFs of ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401245B4
 * Callers:
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x140099728 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        __int64 a3)
{
  int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]

  v4 = *((_DWORD *)a2 + 7);
  v6 = *((unsigned int *)a2 + 8);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v6);
    v10 = 0;
    McTemplateK0ppqq_EtwWriteTransfer(
      (__int64)this,
      &EventCpuHostApertureReleaseRange,
      a3,
      **((_QWORD **)this + 6),
      *((_QWORD *)a2 + 2),
      v10,
      v11);
  }
  if ( v4 == -1 || (_DWORD)v6 == -1 )
  {
    WdLogSingleEntry1(1LL, this);
    WdLogGlobalForLineNumber = 680;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 5);
    v8 = *(_DWORD *)(v7 + 4LL * *((unsigned int *)a2 + 8));
    *(_DWORD *)(v7 + 4 * v6) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 18) += v8;
    *((_DWORD *)this + 19) = v4;
    *((_DWORD *)a2 + 7) = -1;
    *((_DWORD *)a2 + 8) = -1;
  }
}
