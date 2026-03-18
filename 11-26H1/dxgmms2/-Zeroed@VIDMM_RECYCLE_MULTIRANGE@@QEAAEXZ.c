/*
 * XREFs of ?Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x140110524
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_RECYCLE_MULTIRANGE::Zeroed(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // r9
  char v2; // r8
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 8);
  v2 = 1;
  v3 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    if ( *(_DWORD *)(v1 + 80) > 1u )
      v2 = 0;
    if ( v1 == v3 )
      break;
    v4 = *(_QWORD *)(v1 + 120);
    v5 = *(_QWORD *)(v1 + 72);
    v1 = 0LL;
    if ( v4 != v5 + 72 )
      v1 = v4 - 120;
  }
  return v2;
}
