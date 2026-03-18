/*
 * XREFs of ?bDontShowPointer@@YAHXZ @ 0x140093AFC
 * Callers:
 *     GreSetPointer @ 0x140092DBC (GreSetPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bDontShowPointer(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 72LL) != 0;
}
