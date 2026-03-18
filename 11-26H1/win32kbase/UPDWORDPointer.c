/*
 * XREFs of UPDWORDPointer @ 0x1401348C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UPDWORDPointer(int a1, int a2, int a3)
{
  return 16LL * (((unsigned int)(a1 - 0x2000) >> 1) + 1) + W32GetUserSessionState(a1, a2, a3) + 66808;
}
