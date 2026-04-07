/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800CF270
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(struct tagPOINT *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // ebx
  int v3; // eax
  int v6; // ebp
  LONG y; // esi
  int v8; // eax
  int v9; // esi
  struct tagPOINT v11; // [rsp+40h] [rbp+8h] BYREF

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
  v11.x = this[8].y + (this[1].x + this[2].x - v6) / 2;
  v11.y = this[9].x + v9 / 2;
  CVisual::SetSize((CVisual *)&this[-30], v6, v8);
  CVisual::SetOffset(this - 30, &v11);
  (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)&this[-30] + 24LL))(this - 30, 4096LL);
  return 0LL;
}
