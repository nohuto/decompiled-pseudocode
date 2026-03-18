/*
 * XREFs of UPDWORDPointer @ 0x1400EC890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UPDWORDPointer(__int64 a1, __int64 a2)
{
  return 16 * (((unsigned int)(a1 - 0x2000) >> 1) + 1 + 4176LL) + W32GetUserSessionState(a1, a2);
}
