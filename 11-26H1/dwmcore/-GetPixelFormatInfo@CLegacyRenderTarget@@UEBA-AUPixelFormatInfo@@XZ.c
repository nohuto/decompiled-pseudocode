/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801A9EC0
 * Callers:
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180247840 (-GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 32) + 24LL))(v2 + 32);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 56);
  }
  return a2;
}
