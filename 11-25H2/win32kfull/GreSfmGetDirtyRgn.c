/*
 * XREFs of GreSfmGetDirtyRgn @ 0x14008D37C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14017FAC0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x14008D504 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14008F404 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        Gre::Base *a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  HSEMAPHORE v13; // rdi
  __int64 v14; // rcx
  unsigned int DirtyRgn; // ebx
  struct _GRETHREAD *v16; // rax
  _BYTE v19[32]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v20; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v13 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 520LL);
  GreAcquireSemaphoreSharedInternal(v13);
  GrepAcquireLockValidate<7>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive(v14) )
    {
      SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19, (HLSURF)a1);
      if ( v20 )
        DirtyRgn = GrepSfmGetDirtyRgn(v20, a2, a3, a4, a5, a6, a7, a8, a9);
      else
        DirtyRgn = -1073741816;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
    }
    else
    {
      DirtyRgn = -1071775733;
    }
  }
  else
  {
    DirtyRgn = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"DwmState", v13);
  v16 = GreGetCurrentThreadCrossSessionCheck();
  if ( v16 )
  {
    if ( (*((_BYTE *)v16 + 15))-- == 1 )
      *(_QWORD *)v16 &= ~0x80uLL;
    if ( !*(_QWORD *)v16 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreSharedInternal(v13);
  return DirtyRgn;
}
