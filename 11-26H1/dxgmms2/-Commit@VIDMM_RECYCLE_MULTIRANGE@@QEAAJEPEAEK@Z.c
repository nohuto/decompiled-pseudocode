/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAEK@Z @ 0x1400ACF54
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 * Callees:
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z @ 0x1400AD068 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F3E34 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  VIDMM_RECYCLE_RANGE *v4; // rdi
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v9 = VIDMM_RECYCLE_RANGE::Commit(v4, a2, a3, a4);
    if ( v9 < 0 )
      break;
    if ( v4 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
    {
      v11 = (_QWORD *)*((_QWORD *)this + 8);
      while ( 1 )
      {
        v11[17] = 0LL;
        v11[18] = 0LL;
        v11[19] = 0LL;
        v11[20] = this;
        if ( v11 == *((_QWORD **)this + 9) )
          break;
        v8 = v11[15];
        v12 = v11[9];
        v11 = 0LL;
        if ( v8 != v12 + 72 )
          v11 = (_QWORD *)(v8 - 120);
      }
      *((_DWORD *)this + 42) = 3;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v8);
      return 0LL;
    }
    a2 = *((_QWORD *)v4 + 15);
    v10 = *((_QWORD *)v4 + 9);
    v4 = 0LL;
    if ( a2 != v10 + 72 )
      v4 = (VIDMM_RECYCLE_RANGE *)(a2 - 120);
  }
  while ( v4 != *((VIDMM_RECYCLE_RANGE **)this + 8) )
  {
    v14 = *((_QWORD *)v4 + 16);
    v15 = *((_QWORD *)v4 + 9);
    v4 = 0LL;
    if ( v14 != v15 + 72 )
      v4 = (VIDMM_RECYCLE_RANGE *)(v14 - 120);
    VIDMM_RECYCLE_RANGE::Decommit(v4);
  }
  return (unsigned int)v9;
}
