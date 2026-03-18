/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1401F0994
 * Callers:
 *     DxgkUpdateOverlay @ 0x1401F23C0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1401B331C (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(DXGOVERLAY *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  int updated; // edi
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  UINT PrivateDriverDataSize; // eax
  void *v12; // rax
  __int64 hAllocation; // r8
  __int64 v14[2]; // [rsp+50h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v15; // [rsp+60h] [rbp-68h] BYREF

  v14[1] = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 274;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      274LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v4 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v4 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v4 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v4 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 275;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 275LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 8) == -1 )
    return 0LL;
  memset(&v15, 0, sizeof(v15));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
    (DXGALLOCATIONREFERENCE *)v14,
    a2->OverlayInfo.hAllocation);
  if ( v14[0] )
  {
    v8 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[0] + 8) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
    {
      v9 = *(_QWORD *)(v14[0] + 48);
      if ( (*(_DWORD *)(v9 + 4) & 8) == 0 || (*(_DWORD *)(v14[0] + 72) & 0x800) == 0 )
      {
        hAllocation = a2->OverlayInfo.hAllocation;
        updated = -1073741811;
        WdLogSingleEntry3(3LL, *((_QWORD *)this + 2), hAllocation, -1073741811LL);
        WdLogGlobalForLineNumber = 315;
        goto LABEL_27;
      }
      v15.OverlayInfo.hAllocation = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 3168LL);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(v10 + 760),
        *(struct VIDMM_GLOBAL **)(v10 + 768),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v14[0] + 48) + 8LL),
        &v15.OverlayInfo.SegmentId,
        &v15.OverlayInfo.PhysicalAddress,
        0LL);
      v15.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v15.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
      {
        v15.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
        v12 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL);
        v15.OverlayInfo.pPrivateDriverData = v12;
        if ( !v12 )
        {
          updated = -1073741801;
          WdLogSingleEntry3(3LL, this, v15.OverlayInfo.PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 352;
          goto LABEL_27;
        }
        RtlCopyFromUser(v12, a2->OverlayInfo.pPrivateDriverData, v15.OverlayInfo.PrivateDriverDataSize);
      }
      else
      {
        a2->OverlayInfo.PrivateDriverDataSize = 0;
        a2->OverlayInfo.pPrivateDriverData = 0LL;
      }
      updated = ADAPTER_RENDER::DdiUpdateOverlay(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3168LL),
                  *((void **)this + 5),
                  &v15);
      if ( updated >= 0 )
        *((_QWORD *)this + 6) = v14[0];
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15.OverlayInfo.pPrivateDriverData);
      goto LABEL_27;
    }
    updated = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v14[0], -1073741811LL);
    WdLogGlobalForLineNumber = 304;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      v14[0],
      -1073741811LL,
      0LL,
      0LL);
  }
  else
  {
    v6 = a2->OverlayInfo.hAllocation;
    updated = -1073741811;
    WdLogSingleEntry3(3LL, *((_QWORD *)this + 2), v6, -1073741811LL);
    WdLogGlobalForLineNumber = 295;
  }
LABEL_27:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v14);
  return (unsigned int)updated;
}
