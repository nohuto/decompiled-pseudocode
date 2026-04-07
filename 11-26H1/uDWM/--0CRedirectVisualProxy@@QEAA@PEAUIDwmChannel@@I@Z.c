/*
 * XREFs of ??0CRedirectVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF308
 * Callers:
 *     ??$Create@VCRedirectVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7560 (--$Create@VCRedirectVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRedirectVisualProx.c)
 * Callees:
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CRedirectVisualProxy *__fastcall CRedirectVisualProxy::CRedirectVisualProxy(
        CRedirectVisualProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CVisualProxy::CVisualProxy(this, a2, a3, 14LL);
  *(_QWORD *)this = &CVisualProxy::`vftable';
  return this;
}
