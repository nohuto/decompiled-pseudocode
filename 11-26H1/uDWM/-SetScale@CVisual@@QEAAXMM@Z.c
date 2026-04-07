/*
 * XREFs of ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168
 * Callers:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014060 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800141D8 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800774F0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA?AVDirtyFlags@@XZ @ 0x1800166EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetScale(CVisual *this, float a2, float a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int32 v5; // xmm3_4
  unsigned int *v6; // rax
  __int64 v7; // r9
  char v8; // [rsp+38h] [rbp+10h] BYREF

  COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 26) - a2) & v5) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 27) - a3) & v5) > 0.0000011920929 )
  {
    *((float *)this + 26) = a2;
    *((float *)this + 27) = a3;
    v6 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(
                           &v8,
                           v3,
                           v4,
                           this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *v6);
  }
}
