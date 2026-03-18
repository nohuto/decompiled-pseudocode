/*
 * XREFs of ?GetDrvType@QueryAdvanceWidthsRequest@@UEBA?AW4FontDriverType@@XZ @ 0x140206ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryAdvanceWidthsRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 20LL);
}
