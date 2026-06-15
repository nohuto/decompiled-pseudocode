/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        CApplication **this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  *a2 = 0LL;
  return CApplication::GetApplicationSpecificEndpointInfo(this[28], (struct CProcess *)this, a2);
}
