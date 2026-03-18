/*
 * XREFs of ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14003C2B4
 * Callers:
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401B7D10 (DxgkOpenVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1402A1E80 (DxgkModifyVSyncWaiterInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

DXGPAIREDADAPTERSTOPRESETLOCKSHARED *__fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  struct DXGADAPTER *v3; // rax
  bool v5; // al
  __int64 v6; // rbx
  __int64 v7; // rbx
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  v3 = a2;
  if ( a3 )
    v3 = a3;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 4) = v3;
  v5 = !a3 || a3 == a2;
  *((_BYTE *)this + 48) = v5;
  *((_BYTE *)this + 49) = 0;
  if ( !v5 && !*((_BYTE *)this + 40) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 4) + 24LL));
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 3) = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 152));
    *((_BYTE *)this + 40) = 1;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
    v7 = *((_QWORD *)this + 1);
    *(_QWORD *)this = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v7 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 152));
    *((_BYTE *)this + 16) = 1;
  }
  result = this;
  *((_BYTE *)this + 49) = 1;
  return result;
}
