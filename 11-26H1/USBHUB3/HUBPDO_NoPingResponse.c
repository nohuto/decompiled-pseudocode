/*
 * XREFs of HUBPDO_NoPingResponse @ 0x140019840
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBPDO_NoPingResponse(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 512, 4059);
}
