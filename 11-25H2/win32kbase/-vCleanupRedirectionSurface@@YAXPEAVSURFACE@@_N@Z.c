/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x140070C10 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x140066410 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x14008D32C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140156BC0 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x14023E664 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall vCleanupRedirectionSurface(struct SURFACE *this, __int64 a2)
{
  char v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v8; // rsi
  char v9; // bp
  __int64 v10; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64); // rax
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v2 = a2;
  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported((__int64)this, a2) >= 0 )
  {
    v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 688LL);
    if ( v6 )
    {
      if ( v6() >= 0 )
      {
        v8 = *(_QWORD *)(W32GetSessionState(v5) + 88);
        SURFREF::SURFREF((SURFREF *)v15, *((struct HOBJ__ **)this + 4), (struct Gre::Base::SESSION_GLOBALS *)v8);
        if ( v16 )
        {
          v9 = 0;
          v10 = 0LL;
          FirstLSurf = SURFACE::GetFirstLSurf(this);
          if ( FirstLSurf )
          {
            v9 = 1;
            do
            {
              if ( !v10 )
                v10 = *((_QWORD *)FirstLSurf + 33);
              vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)this + 6), FirstLSurf, 0LL);
              FirstLSurf = SURFACE::GetFirstLSurf(this);
            }
            while ( FirstLSurf );
          }
          v14 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 24) + 696LL);
          if ( v14 )
            v14(v10);
          SURFREF::bDeleteSurface((SURFREF *)v15);
          if ( v2 && !v9 && !*(_BYTE *)(v8 + 4248) )
          {
            *(_BYTE *)(v8 + 4248) = 1;
            GrepCaptureLiveMemoryDump(0x190u, 20LL, (__int64)this, *((_QWORD *)this + 6), 0LL, 0);
          }
        }
        SURFREF::~SURFREF((SURFREF *)v15);
      }
    }
  }
}
