/*
 * XREFs of GetSynthesizedContainerMouseInputEvent @ 0x140216220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSynthesizedContainerMouseInputEvent(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19440);
}
