/*
 * XREFs of ?SetTouchpadSettingsManager@MultitaskingViewGestureHandler@@UEAAXPEAUITouchpadSettingsManager@@@Z @ 0x180212480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MultitaskingViewGestureHandler::SetTouchpadSettingsManager(
        MultitaskingViewGestureHandler *this,
        struct ITouchpadSettingsManager *a2)
{
  __int64 v4; // rcx

  if ( *((struct ITouchpadSettingsManager **)this + 11) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITouchpadSettingsManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
