/*
 * XREFs of ?GetDisplayId@CSectionBitmapRealization@@WPI@EBA?AVDisplayId@@XZ @ 0x1802AA910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - 248, a2);
}
