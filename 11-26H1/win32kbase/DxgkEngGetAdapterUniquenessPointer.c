/*
 * XREFs of DxgkEngGetAdapterUniquenessPointer @ 0x14019C470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetAdapterUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1856LL) + 1573024LL;
}
