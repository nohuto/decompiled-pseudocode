/*
 * XREFs of CcGetFileObjectFromBcb @ 0x1404E0EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromBcb(PVOID Bcb)
{
  return (PFILE_OBJECT)(*(_QWORD *)(*((_QWORD *)Bcb + 22) + 96LL) & 0xFFFFFFFFFFFFFFF0uLL);
}
