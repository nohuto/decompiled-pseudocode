/*
 * XREFs of ?CancelSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18049AA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CancelSwipe(MultitaskingViewGestureHandler *this)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), 4LL);
  *((_QWORD *)this + 15) = 0LL;
  return 0LL;
}
