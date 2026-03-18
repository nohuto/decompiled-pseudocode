/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1400E5620 (NtGdiGetPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F50 (NtGdiCloseFigure.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6028 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiFlattenPath @ 0x140226630 (NtGdiFlattenPath.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  CAutoTGO::vUnguard((XEPATHOBJ *)((char *)this + 80));
}
