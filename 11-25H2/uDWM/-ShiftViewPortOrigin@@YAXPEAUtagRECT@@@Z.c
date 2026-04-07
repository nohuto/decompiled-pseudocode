/*
 * XREFs of ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800CF898
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18001396C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShiftViewPortOrigin(struct tagRECT *a1)
{
  int v2; // ebx
  int SystemMetrics; // eax

  v2 = -GetSystemMetrics(77);
  SystemMetrics = GetSystemMetrics(76);
  OffsetRect(a1, -SystemMetrics, v2);
}
