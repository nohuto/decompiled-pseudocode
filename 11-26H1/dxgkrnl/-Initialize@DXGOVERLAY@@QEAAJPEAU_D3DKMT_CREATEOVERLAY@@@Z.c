/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401F036C
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401C1E98 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1401A5A50 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1401AC974 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(union _LARGE_INTEGER **this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  union _LARGE_INTEGER *v6; // r13
  union _LARGE_INTEGER *v7; // rax
  union _LARGE_INTEGER v9; // r13
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v11; // eax
  int v12; // r8d
  __int64 v13; // rcx
  struct DXGALLOCATION *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // esi
  union _LARGE_INTEGER *v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  union _LARGE_INTEGER *v20; // rcx
  D3DKMT_HANDLE v21; // eax
  __int64 v22; // r8
  union _LARGE_INTEGER *v23; // rcx
  union _LARGE_INTEGER *v24; // [rsp+20h] [rbp-79h]
  __int64 v25[2]; // [rsp+50h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v26; // [rsp+60h] [rbp-39h] BYREF

  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(this[2][2].QuadPart + 16))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v4 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v4 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v4 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v4 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry3(2LL, this, v4, -1073741637LL);
    v23 = this[2];
    WdLogGlobalForLineNumber = 62;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Driver 0x%I64x didn't supply Overlay functions, returning 0x%I64x",
      (__int64)this,
      *(_QWORD *)(v23[2].QuadPart + 16),
      -1073741637LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 3168), (struct DXGOVERLAY *)this);
  v6 = this[2];
  *((_DWORD *)this + 8) = v5;
  if ( v5 == -1 )
  {
    WdLogSingleEntry1(6LL);
    v7 = this[2];
    WdLogGlobalForLineNumber = 75;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of overlay hardware on adapter 0x%I64x",
      *(_QWORD *)(v7[2].QuadPart + 16),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225626LL;
  }
  v9 = v6[5];
  hAllocation = a2->OverlayInfo.hAllocation;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9.QuadPart + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 < *(_DWORD *)(v9.QuadPart + 296) )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(v9.QuadPart + 280) + 16LL * v11 + 8);
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v9.QuadPart + 280) + 16LL * v11 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      v13 = *(_QWORD *)(v9.QuadPart + 280);
      if ( (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x1F) == 5 )
      {
        v14 = *(struct DXGALLOCATION **)(v13 + 16LL * v11);
        goto LABEL_15;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v14 = 0LL;
LABEL_15:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v25, v14);
  _InterlockedDecrement((volatile signed __int32 *)(v9.QuadPart + 264));
  ExReleasePushLockSharedEx(v9.QuadPart + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25[0] )
  {
    v15 = a2->OverlayInfo.hAllocation;
    v16 = -1073741811;
    WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
    WdLogGlobalForLineNumber = 90;
LABEL_17:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v25);
    return v16;
  }
  v17 = this[2];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25[0] + 8) + 16LL) + 16LL) != *(_QWORD *)(v17[2].QuadPart + 16) )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, this[2], v25[0], -1073741811LL);
    v24 = this[2];
    WdLogGlobalForLineNumber = 99;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v24,
      v25[0],
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v25[0] + 48) + 4LL) & 8) == 0 || (*(_DWORD *)(v25[0] + 72) & 0x800) == 0 )
  {
    v22 = a2->OverlayInfo.hAllocation;
    v16 = -1073741811;
    WdLogSingleEntry3(3LL, this, v22, -1073741811LL);
    WdLogGlobalForLineNumber = 110;
    goto LABEL_17;
  }
  memset(&v26, 0, sizeof(v26));
  v26.VidPnSourceId = a2->VidPnSourceId;
  v26.OverlayInfo.hAllocation = *(HANDLE *)(*(_QWORD *)(v25[0] + 48) + 16LL);
  v18 = *(_QWORD *)(*(_QWORD *)(v17[2].QuadPart + 16) + 3168LL);
  VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
    *(VIDMM_EXPORT **)(v18 + 760),
    *(struct VIDMM_GLOBAL **)(v18 + 768),
    *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v25[0] + 48) + 8LL),
    &v26.OverlayInfo.SegmentId,
    &v26.OverlayInfo.PhysicalAddress,
    0LL);
  v26.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v26.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  v26.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  v26.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
  v19 = ADAPTER_RENDER::DdiCreateOverlay(*(ADAPTER_RENDER **)(*(_QWORD *)(this[2][2].QuadPart + 16) + 3168LL), &v26);
  if ( v19 < 0 )
  {
    v16 = v19;
    goto LABEL_17;
  }
  v20 = this[2];
  this[5] = (union _LARGE_INTEGER *)v26.hOverlay;
  this[6] = (union _LARGE_INTEGER *)v25[0];
  v21 = DXGPROCESS::AllocHandleSafe(v20[5].QuadPart, (__int64)this, 6u);
  *((_DWORD *)this + 6) = v21;
  if ( !v21 )
  {
    v16 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 161;
    goto LABEL_17;
  }
  a2->hOverlay = v21;
  *((_DWORD *)this + 7) = 1;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v25);
  return 0LL;
}
