/*
 * XREFs of ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180195420
 * Callers:
 *     ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x180247450 (-GetClearMode@CLegacyStereoRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetClearMode(__int64 a1)
{
  CDirectFlipInfo *v1; // rcx
  unsigned int v2; // ebx
  int v4; // eax

  v1 = *(CDirectFlipInfo **)(a1 + 19504);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  v4 = *((_DWORD *)v1 + 13);
  if ( v4 == 4 )
  {
    return !CDirectFlipInfo::RenderingRealizationChanged(v1);
  }
  else
  {
    LOBYTE(v2) = v4 < 3;
    return v2;
  }
}
