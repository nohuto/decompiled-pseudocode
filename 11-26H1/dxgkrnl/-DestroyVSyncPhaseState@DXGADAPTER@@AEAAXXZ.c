/*
 * XREFs of ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1401982FC
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x140196D84 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyVSyncPhaseState(DXGADAPTER *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = (void *)*((_QWORD *)this + 544);
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 545);
  if ( v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 546);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 547);
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 548);
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 549);
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 556);
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  v9 = (void *)*((_QWORD *)this + 555);
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 557);
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
}
