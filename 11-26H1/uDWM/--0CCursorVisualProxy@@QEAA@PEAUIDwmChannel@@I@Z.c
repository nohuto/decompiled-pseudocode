/*
 * XREFs of ??0CCursorVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A9750
 * Callers:
 *     ??$Create@VCCursorVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCCursorVisualProxy@@@Z @ 0x1800A7050 (--$Create@VCCursorVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCCursorVisualProxy@@@.c)
 * Callees:
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CCursorVisualProxy *__fastcall CCursorVisualProxy::CCursorVisualProxy(
        CCursorVisualProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CVisualProxy::CVisualProxy(this, a2, a3, 4LL);
  *(_QWORD *)this = &CVisualProxy::`vftable';
  return this;
}
