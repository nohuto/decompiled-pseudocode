/*
 * XREFs of ?Uninitialize@CPointerFeedback@@SAXXZ @ 0x1401F9720
 * Callers:
 *     ?CleanupFeedbackData@@YAXXZ @ 0x1401F9698 (-CleanupFeedbackData@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPointerFeedback::Uninitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx

  v3 = *(void **)(W32GetUserSessionState(a1, a2) + 36312);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36312) = 0LL;
}
