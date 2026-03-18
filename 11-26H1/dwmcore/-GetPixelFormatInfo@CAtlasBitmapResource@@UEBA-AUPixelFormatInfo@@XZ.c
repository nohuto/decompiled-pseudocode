/*
 * XREFs of ?GetPixelFormatInfo@CAtlasBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801B3740
 * Callers:
 *     ?GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x18028AEA0 (-GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CAtlasBitmapResource::GetPixelFormatInfo(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  bool v4; // cf
  _DWORD *result; // rax

  v2 = *a1;
  *a2 = 87;
  v4 = (*(unsigned __int8 (__fastcall **)(__int64 *))(v2 + 32))(a1) != 0;
  a2[2] = 0;
  result = a2;
  a2[1] = v4 ? 3 : 1;
  return result;
}
