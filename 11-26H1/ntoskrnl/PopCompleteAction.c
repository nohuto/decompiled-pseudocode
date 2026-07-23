/*
 * XREFs of PopCompleteAction @ 0x1409F4288
 * Callers:
 *     PopPolicyWorkerAction @ 0x1409F3240 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall PopCompleteAction(__int64 a1, LONG a2)
{
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  result = *(_DWORD *)(a1 + 4);
  if ( (result & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 4) = result & 0xFFFFFFDF;
    v3 = *(struct _KEVENT **)(a1 + 8);
    v3[1].Header.LockNV = a2;
    return KeSetEvent(v3, 0, 0);
  }
  return result;
}
