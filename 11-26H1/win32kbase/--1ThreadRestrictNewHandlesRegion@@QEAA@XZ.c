/*
 * XREFs of ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14002355C (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(ThreadRestrictNewHandlesRegion *this)
{
  __int64 v2; // rcx
  ThreadRestrictNewHandlesRegion *v3; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 *i; // rdi
  char *v7; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = *(ThreadRestrictNewHandlesRegion **)(v2 + 328);
    if ( v3 )
    {
      if ( (*((_QWORD *)v3 + 2))-- == 1LL )
      {
        if ( this == v3 )
        {
          v5 = 0LL;
          for ( i = (unsigned __int64 *)((char *)this + 24); v5 < *i; ++v5 )
            HmgpThreadUnrestrictHandle(*(_DWORD *)(*((_QWORD *)this + 5) + 4 * v5));
        }
        else
        {
          GrepCaptureLiveMemoryDump(400LL, 52LL, 2LL, (__int64)this, (__int64)v3, 0);
          i = (unsigned __int64 *)((char *)this + 24);
        }
        *(_QWORD *)(*(_QWORD *)this + 328LL) = *((_QWORD *)this + 1);
        v7 = (char *)*((_QWORD *)this + 5);
        *i = 0LL;
        if ( v7 != (char *)this + 48 )
        {
          GreDeleteFastMutex(v7);
          *((_QWORD *)this + 5) = (char *)this + 48;
        }
      }
      else if ( this == v3 )
      {
        GrepCaptureLiveMemoryDump(400LL, 52LL, 1LL, (__int64)this, (__int64)v3, 0);
      }
    }
    else
    {
      GrepCaptureLiveMemoryDump(400LL, 52LL, 0LL, (__int64)this, 0LL, 0);
    }
  }
}
