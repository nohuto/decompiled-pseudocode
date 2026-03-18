/*
 * XREFs of ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140040EC0
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400939A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x140040FDC (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

void __fastcall ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(ThreadRestrictNewHandlesRegion *this)
{
  ThreadRestrictNewHandlesRegion *v2; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 *i; // rdi
  char *v6; // rcx
  __int64 v7; // r8

  if ( !*(_QWORD *)this )
    return;
  v2 = *(ThreadRestrictNewHandlesRegion **)(*(_QWORD *)this + 336LL);
  if ( !v2 )
  {
    v7 = 0LL;
    goto LABEL_10;
  }
  if ( (*((_QWORD *)v2 + 2))-- != 1LL )
  {
    if ( this != v2 )
      return;
    v7 = 1LL;
LABEL_10:
    GrepCaptureLiveMemoryDump(400LL, 52LL, v7);
    return;
  }
  if ( this == v2 )
  {
    v4 = 0LL;
    for ( i = (unsigned __int64 *)((char *)this + 24); v4 < *i; ++v4 )
      HmgpThreadUnrestrictHandle(*(_DWORD *)(*((_QWORD *)this + 5) + 4 * v4));
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 52LL, 2LL, this, v2, 0LL, 0LL, 0);
    i = (unsigned __int64 *)((char *)this + 24);
  }
  *(_QWORD *)(*(_QWORD *)this + 336LL) = *((_QWORD *)this + 1);
  *i = 0LL;
  v6 = (char *)*((_QWORD *)this + 5);
  if ( v6 != (char *)this + 48 )
  {
    GreDeleteFastMutex(v6);
    *((_QWORD *)this + 5) = (char *)this + 48;
  }
}
