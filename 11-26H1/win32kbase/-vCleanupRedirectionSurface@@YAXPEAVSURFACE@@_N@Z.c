/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1401994C4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1400572C0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140193F74 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x140248D00 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vCleanupRedirectionSurface(HSURF *this, char a2)
{
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // bp
  __int64 v9; // rsi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v11; // rcx
  __int64 *v12; // r14
  void (__fastcall *v13)(__int64); // rax
  __int64 *v14[6]; // [rsp+30h] [rbp-48h] BYREF

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported((__int64)this) >= 0 )
  {
    v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 688LL);
    if ( v5 )
    {
      if ( v5() >= 0 )
      {
        v7 = *(_QWORD *)(W32GetSessionState(v6) + 88);
        SURFREF::SURFREF((SURFREF *)v14, this[4], (struct Gre::Base::SESSION_GLOBALS *)v7);
        if ( v14[4] )
        {
          v8 = 0;
          v9 = 0LL;
          FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
          v12 = (__int64 *)(this + 6);
          if ( FirstLSurf )
          {
            v8 = 1;
            do
            {
              if ( !v9 )
                v9 = *((_QWORD *)FirstLSurf + 33);
              vSpDwmMigrateLSurfShapeReferenceWrap(*v12, FirstLSurf, 0LL);
              FirstLSurf = SURFACE::GetFirstLSurf((SURFACE *)this);
            }
            while ( FirstLSurf );
          }
          v13 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 24) + 696LL);
          if ( v13 )
            v13(v9);
          SURFREF::bDeleteSurface(v14, (struct Gre::Base::SESSION_GLOBALS *)v7, 0);
          if ( a2 && !v8 && !*(_BYTE *)(v7 + 4360) )
          {
            *(_BYTE *)(v7 + 4360) = 1;
            GrepCaptureLiveMemoryDump(400LL, 20LL, (__int64)this, *v12, 0LL, 0);
          }
        }
        SURFREF::~SURFREF((unsigned int **)v14);
      }
    }
  }
}
