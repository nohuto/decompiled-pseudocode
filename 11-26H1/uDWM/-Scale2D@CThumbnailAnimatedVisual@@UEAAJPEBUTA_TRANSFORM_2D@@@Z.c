/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800C91D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(struct tagPOINT *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // ebx
  int v3; // eax
  LONG v6; // ebp
  LONG y; // esi
  LONG v8; // eax
  int v9; // esi
  __int64 v10; // r8
  _DWORD *v11; // rax
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  if ( this[2].x - this[1].x >= 0 )
    v3 = this[2].x - this[1].x;
  v6 = RoundToNearestInt((float)v3 * *((float *)a2 + 5));
  y = this[1].y;
  if ( this[2].y - y >= 0 )
    v2 = this[2].y - y;
  v8 = RoundToNearestInt((float)v2 * *((float *)a2 + 6));
  v9 = this[2].y + y - v8;
  v13.x = this[8].y + (this[1].x + this[2].x - v6) / 2;
  v13.y = this[9].x + v9 / 2;
  CVisual::SetSize((CVisual *)&this[-33], v6, v8);
  CVisual::SetOffset(this - 33, &v13, v10);
  v11 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v13);
  (*(void (__fastcall **)(struct tagPOINT *, _QWORD))(*(_QWORD *)&this[-33] + 24LL))(this - 33, (unsigned int)*v11);
  return 0LL;
}
