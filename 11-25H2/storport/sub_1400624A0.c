/*
 * XREFs of sub_1400624A0 @ 0x1400624A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall sub_1400624A0(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  LONG result; // eax

  result = (int)a3;
  if ( a3 )
    return KeSetEvent(a3, 0, 0);
  return result;
}
