/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiStrokePath @ 0x1401129F0 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x140114130 (NtGdiFillPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1401DE770 (NtGdiGetPath.c)
 *     NtGdiFlattenPath @ 0x140259C30 (NtGdiFlattenPath.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  CAutoTGO::vUnguard((XEPATHOBJ *)((char *)this + 80));
}
