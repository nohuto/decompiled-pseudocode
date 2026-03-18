/*
 * XREFs of ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1400406E8
 * Callers:
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x140178EF8 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x140041D84 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::FreeTargetPool(
        DirectComposition::CConnection::CFrameStats *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    if ( v2 != (char *)this + 48 )
    {
      Win32FreePoolImpl(v2);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
