/*
 * XREFs of ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x14004E364
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1400A3B00 (-ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CFlipExBuffer::ReleaseHDR10MetaData(CFlipExBuffer *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 48);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 48) = 0LL;
  }
}
