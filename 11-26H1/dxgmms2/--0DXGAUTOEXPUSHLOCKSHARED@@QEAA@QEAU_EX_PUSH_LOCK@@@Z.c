/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400362C8
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x14009F50C (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1400ABC7C (--1VIDMM_PARTITION@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

DXGAUTOEXPUSHLOCKSHARED *__fastcall DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
        DXGAUTOEXPUSHLOCKSHARED *this,
        struct _EX_PUSH_LOCK *const a2)
{
  DXGAUTOEXPUSHLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  result = this;
  *((_DWORD *)this + 4) = 1;
  return result;
}
