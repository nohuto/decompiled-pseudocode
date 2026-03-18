/*
 * XREFs of ?GetDrvType@QueryFontRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1401ED8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryFontRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 48) + 20LL);
}
