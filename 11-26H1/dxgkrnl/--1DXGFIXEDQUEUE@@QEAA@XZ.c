/*
 * XREFs of ??1DXGFIXEDQUEUE@@QEAA@XZ @ 0x1400645FC
 * Callers:
 *     ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1402063A0 (-DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGFIXEDQUEUE::~DXGFIXEDQUEUE(DXGFIXEDQUEUE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
