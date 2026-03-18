/*
 * XREFs of ??1DXGK_LOG@@QEAA@XZ @ 0x14009D7E8
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGK_LOG::~DXGK_LOG(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *this = 0LL;
  }
}
