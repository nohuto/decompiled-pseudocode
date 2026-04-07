/*
 * XREFs of ?pop_back@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAXXZ @ 0x18008790C
 * Callers:
 *     ??1?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800878C4 (--1-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800CCBC0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1TrailPoint@CTouchDragVisual@@QEAA@XZ @ 0x1800CC5E4 (--1TrailPoint@CTouchDragVisual@@QEAA@XZ.c)
 */

void __fastcall std::deque<CTouchDragVisual::TrailPoint>::pop_back(_QWORD *a1)
{
  CTouchDragVisual::TrailPoint::~TrailPoint(*(CTouchDragVisual::TrailPoint **)(a1[1]
                                                                             + 8
                                                                             * ((a1[2] - 1LL) & (a1[3] - 1LL + a1[4]))));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
}
