/*
 * XREFs of ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140024FB0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

ThreadRestrictNewHandlesRegion *__fastcall ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion(
        ThreadRestrictNewHandlesRegion *this,
        __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, a2);
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 1LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 8LL;
  v5 = (v4 + 8) & -(__int64)(v4 != 0);
  *((_BYTE *)this + 80) = 1;
  *(_QWORD *)this = v5;
  *((_QWORD *)this + 5) = (char *)this + 48;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 328);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 80) )
      {
        ++*(_QWORD *)(v6 + 16);
      }
      else
      {
        *(_QWORD *)(v5 + 328) = this;
        *((_QWORD *)this + 1) = v6;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 328) = this;
    }
  }
  return this;
}
