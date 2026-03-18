/*
 * XREFs of ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x140391BA4
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x140432E30 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x140433930 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(void **a1)
{
  if ( *a1 != a1 + 1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a1);
}
