/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B66CC
 * Callers:
 *     ?InvalidateVirtualAddresses@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x1400B2660 (-InvalidateVirtualAddresses@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@P6AJ33PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x140122398 (-VidMmRotateLegacyAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PHYSICAL_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT **this)
{
  VIDMM_SEGMENT *v2; // rsi
  VIDMM_SEGMENT *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD **v7; // rax
  _QWORD *v8; // r12
  _QWORD **v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r15
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v15; // rdx
  VIDMM_CPU_HOST_APERTURE *v16; // rdi
  __int64 v17; // [rsp+40h] [rbp-88h]
  struct _KTHREAD **v18; // [rsp+48h] [rbp-80h]
  _QWORD **v19; // [rsp+50h] [rbp-78h]
  _QWORD *v20; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 3445;
  }
  v2 = this[14];
  do
  {
    v3 = v2;
    if ( v2 == (VIDMM_SEGMENT *)(this + 14) )
      return;
    v2 = *(VIDMM_SEGMENT **)v2;
    v4 = (_QWORD *)((char *)v3 + 16);
    v5 = (_QWORD *)*((_QWORD *)v3 + 2);
    v20 = (_QWORD *)((char *)v3 + 16);
LABEL_6:
    v6 = v5;
  }
  while ( v5 == v4 );
  v5 = (_QWORD *)*v5;
  v7 = (_QWORD **)(v6 + 2);
  v19 = v7;
  v8 = *v7;
  while ( 1 )
  {
    if ( v8 == v7 )
    {
      v4 = v20;
      goto LABEL_6;
    }
    v9 = (_QWORD **)*(v8 - 7);
    v8 = (_QWORD *)*v8;
    v10 = *v9;
    v11 = (__int64)(*v9 + 38);
    v17 = v11;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v18 = (struct _KTHREAD **)(v10 + 17);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 17));
    if ( (*((_BYTE *)v10 + 36) & 1) != 0 )
      break;
LABEL_15:
    v14 = *v10;
    v15 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(*v10 + 144LL);
    if ( v15 )
    {
      v16 = this[64];
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v16, v15);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v16, *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v14 + 144));
      *(_QWORD *)(v14 + 144) = 0LL;
    }
    *(_QWORD *)(v17 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(v18);
    v7 = v19;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v10;
    WdLogGlobalForLineNumber = 3495;
  }
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v10[6] + 8LL) + 16LL), &ApcState);
  v13 = VidMmRotateLegacyAllocation(this[1], *v10, 3LL);
  if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073741558 )
  {
    *((_BYTE *)v10 + 36) &= ~1u;
    *((_DWORD *)v10 + 6) |= 0x10000u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_15;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v13, 0LL);
  WdLogGlobalForLineNumber = 213;
}
