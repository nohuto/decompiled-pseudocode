/*
 * XREFs of ?IsRemoteRendering@CGlobalComposition@@UEBA_NXZ @ 0x18019CC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalComposition::IsRemoteRendering(CGlobalComposition *this)
{
  return *(_QWORD *)(*((_QWORD *)this + 708) + 24LL) != 0LL;
}
