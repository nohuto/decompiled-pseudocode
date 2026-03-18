/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x1401CD920
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14005C938 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x14009797C (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140099690 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1401CD9F0 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall GrepSfmRemoveSurfaces(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  struct Gre::Base::SESSION_GLOBALS **v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax
  HLSURF *v7; // rbx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  OBJECT *v9; // [rsp+40h] [rbp-18h]

  result = Gre::Base::Globals(a1);
  v2 = result;
  v3 = (struct Gre::Base::SESSION_GLOBALS **)(*((_QWORD *)result + 529) + 40LL);
  v4 = *v3;
  if ( *v3 != (struct Gre::Base::SESSION_GLOBALS *)v3 )
  {
    do
    {
      v5 = (_QWORD *)((char *)v4 - 32);
      v4 = *(struct Gre::Base::SESSION_GLOBALS **)v4;
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v8, (HLSURF)*v5);
      if ( v9 )
      {
        v6 = *((_DWORD *)v5 + 61);
        if ( (v6 & 0x10) != 0 )
          *((_DWORD *)v5 + 61) = v6 & 0xFFFFFFEF;
        else
          *((_DWORD *)v5 + 62) = 0;
        SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v5, 0LL, *((struct SfmState **)v2 + 529));
        v7 = (HLSURF *)v9;
        if ( v9 )
          OBJECT::InterlockedDecrementExclusiveLockCount(v9);
        v9 = 0LL;
        bhLSurfDestroyLogicalSurfaceObject(v7, 1);
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v8);
      result = (struct Gre::Base::SESSION_GLOBALS *)(*((_QWORD *)v2 + 529) + 40LL);
    }
    while ( v4 != result );
  }
  return result;
}
