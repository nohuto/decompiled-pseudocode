/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800D7628
 * Callers:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1800D7860 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x18021CDCC (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x1800D5FB4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016DC6C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  struct CBrush *EffectiveMaskBrush; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 9);
  v3 = *(_QWORD *)(v1 + 240);
  if ( !v3 || (v6 = 0LL, result = CGeometry::TryGetAxisAlignedRectangle(v3, v1 + 140, &v6), (_BYTE)result) )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    return (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)EffectiveMaskBrush + 64LL))(
             EffectiveMaskBrush,
             19LL);
  }
  return result;
}
