/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x140198168
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x140196D84 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *((_QWORD *)this + 379) )
  {
    for ( i = 0;
          i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
          *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 112) = 0LL )
    {
      v3 = 352LL * i;
      v4 = *(void **)(*((_QWORD *)this + 379) + v3 + 64);
      if ( v4 )
      {
        ObfDereferenceObject(v4);
        *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 64) = 0LL;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 379) + v3 + 32));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 379) + v3 + 40));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 379) + v3 + 104));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 379) + v3 + 112));
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 32) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 40) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 104) = 0LL;
    }
  }
}
