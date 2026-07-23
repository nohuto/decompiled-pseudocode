/*
 * XREFs of RtlPushFrame @ 0x1800D4700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPushFrame(PTEB_ACTIVE_FRAME Frame)
{
  struct _TEB *v1; // rdx

  v1 = NtCurrentTeb();
  Frame->Previous = v1->ActiveFrame;
  v1->ActiveFrame = Frame;
}
