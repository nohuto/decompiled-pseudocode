/*
 * XREFs of ?HasSinglePrimitive@CRedirectedVisualContent@@UEBA_NXZ @ 0x1801BDE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::HasSinglePrimitive(CRedirectedVisualContent *this)
{
  return (*(_BYTE *)(*((_QWORD *)this + 9) + 98LL) & 1) == 0;
}
