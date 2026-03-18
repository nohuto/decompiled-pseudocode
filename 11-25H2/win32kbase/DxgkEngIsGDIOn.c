/*
 * XREFs of DxgkEngIsGDIOn @ 0x1400F06B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngIsGDIOn(__int64 a1)
{
  return *(unsigned int *)(W32GetUserGdiSessionState(a1) + 28);
}
