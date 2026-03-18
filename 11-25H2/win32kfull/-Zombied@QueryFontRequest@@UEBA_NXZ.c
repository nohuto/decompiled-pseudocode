/*
 * XREFs of ?Zombied@QueryFontRequest@@UEBA_NXZ @ 0x1401F3150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryFontRequest::Zombied(QueryFontRequest *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 6) + 24LL);
}
