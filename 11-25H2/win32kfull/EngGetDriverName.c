/*
 * XREFs of EngGetDriverName @ 0x1403308A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_QWORD *)(*((_QWORD *)hdev + 222) + 16LL) + 8LL);
}
