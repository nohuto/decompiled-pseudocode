/*
 * XREFs of ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180054C0C
 * Callers:
 *     ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180054B80 (--_GCPolygonBuilder@@MEAAPEAXI@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

int __fastcall detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  void *v1; // r10
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 v4; // r8
  void *v5; // rbx
  int result; // eax
  bool v7; // zf
  HANDLE ProcessHeap; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = a1;
  v3 = (a1[1] - *a1) >> 3;
  if ( v3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v9, *a1, v3);
    v2[1] += -8 * v4;
  }
  v5 = (void *)*v2;
  result = (_DWORD)v2 + 24;
  v7 = *v2 == (_QWORD)(v2 + 3);
  *v2 = (__int64)v1;
  if ( v7 )
    v5 = v1;
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v5);
  }
  return result;
}
