/*
 * XREFs of ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x1801846F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  return *((_QWORD *)this + 31) || (**((_DWORD **)this + 28) & 0x40000) != 0;
}
