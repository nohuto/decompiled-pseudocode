/*
 * XREFs of ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x18018A020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?ProcessStateChanges@CCursorVisual@@QEAAX_K@Z @ 0x18018A088 (-ProcessStateChanges@CCursorVisual@@QEAAX_K@Z.c)
 */

void __fastcall CGlobalComposition::BeginUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rbp
  CCursorVisual **i; // rsi
  CCursorVisual *v4; // rdi
  unsigned __int64 FrameTargetTime; // rax

  v1 = (CCursorVisual **)*((_QWORD *)this + 816);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 815); i != v1; ++i )
  {
    v4 = *i;
    FrameTargetTime = CComposition::GetFrameTargetTime(this);
    CCursorVisual::ProcessStateChanges(v4, FrameTargetTime);
  }
}
