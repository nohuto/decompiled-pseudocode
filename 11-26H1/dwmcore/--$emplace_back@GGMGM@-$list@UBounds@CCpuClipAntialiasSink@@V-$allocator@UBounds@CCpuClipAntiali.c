/*
 * XREFs of ??$emplace_back@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAAEAUBounds@CCpuClipAntialiasSink@@$$QEAG0$$QEAM01@Z @ 0x18025AEAC
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ??$_Emplace@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@1@QEAU21@$$QEAG1$$QEAM12@Z @ 0x1801A94A0 (--$_Emplace@GGMGM@-$list@UBounds@CCpuClipAntialiasSink@@V-$allocator@UBounds@CCpuClipAntialiasSi.c)
 */

float *__fastcall std::list<CCpuClipAntialiasSink::Bounds>::emplace_back<unsigned short,unsigned short,float,unsigned short,float>(
        __int64 *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        float *a4,
        unsigned __int16 *a5,
        float *a6)
{
  return std::list<CCpuClipAntialiasSink::Bounds>::_Emplace<unsigned short,unsigned short,float,unsigned short,float>(
           (__int64)a1,
           *a1,
           a2,
           a3,
           a4,
           a5,
           a6)
       + 4;
}
