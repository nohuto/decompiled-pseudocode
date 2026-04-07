/*
 * XREFs of ??0CContainerVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A80B4
 * Callers:
 *     ??$Create@VCContainerVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCContainerVisualProxy@@@Z @ 0x180084000 (--$Create@VCContainerVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCContainerVisualPr.c)
 * Callees:
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CContainerVisualProxy *__fastcall CContainerVisualProxy::CContainerVisualProxy(
        CContainerVisualProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CVisualProxy::CVisualProxy(this, a2, a3, 23LL);
  *(_QWORD *)this = &CContainerVisualProxy::`vftable';
  return this;
}
