/*
 * XREFs of ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEAVVIDMM_DEVICE@@@Z @ 0x140056160
 * Callers:
 *     ?Initialize@DXGDOORBELL@@IEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E2B68 (-Initialize@DXGDOORBELL@@IEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
        VIDMM_EXPORT *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        unsigned __int64 a7,
        bool a8,
        struct VIDMM_DEVICE *a9)
{
  char v9; // r10
  unsigned int v10; // r11d
  char v12; // [rsp+20h] [rbp-38h]

  v9 = a4;
  v10 = a3;
  LOBYTE(a4) = a5;
  LOBYTE(a3) = v9;
  v12 = 0;
  return (*(__int64 (__fastcall **)(struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD, __int64, __int64, char, unsigned __int64, bool, struct VIDMM_DEVICE *))(*((_QWORD *)this + 1) + 872LL))(
           a2,
           v10,
           a3,
           a4,
           v12,
           a7,
           a8,
           a9);
}
