/*
 * XREFs of DifpExFreePool_LwSP_Enter @ 0x140C491D0
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPostPoolAlloc @ 0x140C491EC (DifpLwSPProcessPostPoolAlloc.c)
 */

__int64 __fastcall DifpExFreePool_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPostPoolAlloc(*(_QWORD *)(a1 + 8));
}
