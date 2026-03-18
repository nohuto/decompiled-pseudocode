/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@PEAVOverlayPlaneInfo@COverlayContext@@@std@@YAPEAVOverlayPlaneInfo@COverlayContext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@V30@PEAV12@@Z @ 0x18020F038
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18020EF9C (--$uninitialized_move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180030BA8 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,COverlayContext::OverlayPlaneInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rdx

  v4 = a2;
  while ( a1 != v4 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(a3, a1);
    a3 = v7 + v6;
    a1 = v7 + v8;
  }
  return a3;
}
