/*
 * XREFs of UserIsInVideoPnpCallout @ 0x1401153F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall UserIsInVideoPnpCallout(__int64 a1)
{
  return *(_BYTE *)(W32GetUserGdiSessionState(a1) + 20) != 0;
}
