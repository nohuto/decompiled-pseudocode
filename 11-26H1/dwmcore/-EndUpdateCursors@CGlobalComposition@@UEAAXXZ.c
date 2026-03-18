/*
 * XREFs of ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x18018E310
 * Callers:
 *     <none>
 * Callees:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x18018E35C (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 816);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 815); i != v1; ++i )
    CCursorVisual::SetNotificationMode(*i);
}
