/*
 * XREFs of ?IsSignaled@CEvent@DirectComposition@@QEAA_NXZ @ 0x1400AFD80
 * Callers:
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1400AFD30 (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 *     ?IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ @ 0x14013A590 (-IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEvent::IsSignaled(DirectComposition::CEvent *this)
{
  void *v1; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = (void *)*((_QWORD *)this + 1);
  Timeout.QuadPart = 0LL;
  return KeWaitForSingleObject(v1, UserRequest, 0, 0, &Timeout) == 0;
}
