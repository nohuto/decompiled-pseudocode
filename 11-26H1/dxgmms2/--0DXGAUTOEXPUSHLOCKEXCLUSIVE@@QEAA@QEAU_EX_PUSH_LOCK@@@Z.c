/*
 * XREFs of ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003A398
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A20FC (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

DXGAUTOEXPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        DXGAUTOEXPUSHLOCKEXCLUSIVE *this,
        struct _EX_PUSH_LOCK *const a2)
{
  DXGAUTOEXPUSHLOCKEXCLUSIVE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
