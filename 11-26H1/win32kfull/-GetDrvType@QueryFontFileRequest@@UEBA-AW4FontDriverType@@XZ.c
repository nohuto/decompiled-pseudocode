/*
 * XREFs of ?GetDrvType@QueryFontFileRequest@@UEBA?AW4FontDriverType@@XZ @ 0x14020E130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryFontFileRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL);
}
