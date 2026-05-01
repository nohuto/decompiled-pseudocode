/*
 * XREFs of ?GetSourcePosition@SwitchItemThumbnailElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804BFE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemThumbnailElement::GetSourcePosition(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 208) - *(_DWORD *)(a1 - 216);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 - 204) - *(_DWORD *)(a1 - 212);
  result = a2;
  *(_QWORD *)a2 = 0LL;
  return result;
}
