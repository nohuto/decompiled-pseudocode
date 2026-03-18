/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x14000DC10 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14009ADAC (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1401C3C00 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1401D1824 (--1EPATHOBJGC@@QEAA@XZ.c)
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000DAB0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct _BASEOBJECT *v3; // rcx
  struct HOBJ__ *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 88) & 1) == 0 )
    {
      *(_DWORD *)(v2 + 96) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = *(_DWORD *)this;
      v3 = (struct _BASEOBJECT *)*((_QWORD *)this + 1);
      v4 = *(struct HOBJ__ **)v3;
      HmgDecrementShareReferenceCountEx(v3, 0LL);
      if ( HmgRemoveObjectImpl(v4, 0, 0, 1u, 7, 0LL) )
      {
        PATH_CORE::vFreeBlocks((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
