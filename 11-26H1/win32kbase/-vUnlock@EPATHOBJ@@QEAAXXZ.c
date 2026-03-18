/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140011B40 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1401ED000 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1401F2428 (--1EPATHOBJGC@@QEAA@XZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 88) & 1) == 0 )
    {
      *(_DWORD *)(v2 + 96) = *((_DWORD *)this + 1);
      v3 = *((_QWORD *)this + 1);
      *(_DWORD *)(v3 + 92) = *(_DWORD *)this;
      v4 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v3) + 88);
      HmgDecrementShareReferenceCount(v4, *((_QWORD *)this + 1));
      if ( HmgRemoveObject(v4, 1, 7, 0LL) )
      {
        PATH_CORE::vFreeBlocks((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((void **)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
