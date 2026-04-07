/*
 * XREFs of ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180013CB8
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18001396C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800154D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 */

bool __fastcall CThumbnailVisual::_IsThumbnailCVIStatic(CThumbnailVisual *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 41);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x100000) != 0 && *((_BYTE *)this + 434) )
    return !CThumbnailVisual::_IsImmersiveIconic(this);
  return v2;
}
