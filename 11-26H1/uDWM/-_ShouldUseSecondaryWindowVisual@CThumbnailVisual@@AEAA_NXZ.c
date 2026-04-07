/*
 * XREFs of ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18005CE24
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18005CFE0 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 */

char __fastcall CThumbnailVisual::_ShouldUseSecondaryWindowVisual(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx

  v2 = 1;
  if ( !EqualRect(
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 48LL),
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 236LL)) )
    return 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    return 0;
  v4 = *((_QWORD *)this + 44);
  if ( (*(_BYTE *)(v4 + 36) & 2) != 0
    && (*(_DWORD *)(v4 + 36) & 0x100000) == 0
    && !EqualRect((const RECT *)(*(_QWORD *)(v4 + 24) + 48LL), (const RECT *)(v4 + 56)) )
  {
    return 0;
  }
  v5 = *(_DWORD *)(*((_QWORD *)this + 44) + 36LL);
  if ( (v5 & 0x40000000) != 0 )
    return 0;
  v6 = *((_QWORD *)this + 45);
  if ( v6
    && (unsigned int)CSecondaryWindowRepresentation::GetThumbnailType(v6) != 1
    && (v7 = *((_DWORD *)this + 114)) != 0
    && (v8 = *((_DWORD *)this + 115)) != 0 )
  {
    if ( (float)((float)*((int *)this + 110) / (float)v7) < 0.5
      || (float)((float)*((int *)this + 111) / (float)v8) < 0.5 )
    {
      return 0;
    }
  }
  else if ( (v5 & 0x4000000) != 0 )
  {
    return 0;
  }
  return v2;
}
