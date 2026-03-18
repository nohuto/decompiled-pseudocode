/*
 * XREFs of ?GetGuestPhysicalAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400AD740
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetGuestPhysicalAddress(
        VIDMM_RECYCLE_HEAP_MGR *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v3 = *((_QWORD *)a2 + 10);
  v4 = **(_DWORD **)(v3 + 32);
  if ( v4 == 9 || v4 == 10 )
    v5 = *((_QWORD *)a2 + 6) + *(_QWORD *)(v3 + 136) - *(_QWORD *)(v3 + 40);
  else
    v5 = 0LL;
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v7);
  return (void *)v5;
}
