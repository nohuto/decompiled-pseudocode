/*
 * XREFs of ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x140127904
 * Callers:
 *     VidMmFlushHeapTransitions @ 0x140042F80 (VidMmFlushHeapTransitions.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?FlushProcessHeapTransitions@VIDMM_PROCESS@@QEAAJXZ @ 0x1400A92B4 (-FlushProcessHeapTransitions@VIDMM_PROCESS@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FlushHeapTransitions(VIDMM_GLOBAL *this)
{
  struct VIDMM_PROCESS *v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v2 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v1 = *(struct VIDMM_PROCESS **)(v2 + 8);
  }
  VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v5, v1, 1);
  v3 = VIDMM_PROCESS::FlushProcessHeapTransitions(v1);
  VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v5);
  return v3;
}
