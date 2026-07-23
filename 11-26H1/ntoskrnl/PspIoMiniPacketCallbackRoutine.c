/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x140A81550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return ObfDereferenceObject(a2);
}
