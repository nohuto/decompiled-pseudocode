/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructor @ 0x14005C858
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x14005C840 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140099690 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14005C9DC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1401CD9F0 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACEREF_vDestructor(__int64 a1)
{
  OBJECT *v2; // rcx
  Gre::Base *v3; // rcx
  int v4; // eax
  SFMLOGICALSURFACE *v5; // rbx
  HLSURF v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  char v8; // [rsp+20h] [rbp-18h]

  v2 = *(OBJECT **)(a1 + 32);
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    if ( *(_DWORD *)(a1 + 40) == 1 )
    {
      v3 = *(Gre::Base **)(a1 + 32);
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v7 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)(a1 + 32), 0LL, *((struct SfmState **)v7 + 529));
      }
      v5 = *(SFMLOGICALSURFACE **)(a1 + 32);
      v6 = *(HLSURF *)v5;
      if ( *(_QWORD *)v5 )
      {
        v8 = 18;
        v5 = (SFMLOGICALSURFACE *)HmgRemoveObject(v6, 0LL, 0LL, 1LL, v8, 0LL);
      }
      if ( v5 )
      {
        SFMLOGICALSURFACE::DeInitialize(v5, v6);
        FreeObject(v5, 18LL);
        EtwLogicalSurfDestroyEvent(v6, 0LL);
      }
    }
  }
}
