/*
 * XREFs of UserGetCSRSSProcess @ 0x1400F8DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetCSRSSProcess(__int64 a1)
{
  return *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
}
