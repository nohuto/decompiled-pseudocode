/*
 * XREFs of sub_140016A04 @ 0x140016A04
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 *     sub_1400386A0 @ 0x1400386A0 (sub_1400386A0.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_140016A04(__int64 a1, void *a2)
{
  DWORD result; // eax

  if ( a2 )
  {
    CancelWaitableTimer(a2);
    return WaitForSingleObject(a2, 0);
  }
  return result;
}
