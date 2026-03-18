/*
 * XREFs of ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x1801254C8
 * Callers:
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     <none>
 */

struct IMonitorTarget *__fastcall CDrawingContext::GetMonitorTarget(CDrawingContext *this)
{
  __int64 v1; // rdx
  struct IMonitorTarget *result; // rax

  v1 = *((_QWORD *)this + 5);
  result = 0LL;
  if ( v1 )
    return *(struct IMonitorTarget **)(v1 + 56);
  return result;
}
