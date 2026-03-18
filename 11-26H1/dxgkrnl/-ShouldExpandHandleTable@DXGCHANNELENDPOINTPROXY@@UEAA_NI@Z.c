/*
 * XREFs of ?ShouldExpandHandleTable@DXGCHANNELENDPOINTPROXY@@UEAA_NI@Z @ 0x140213610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGCHANNELENDPOINTPROXY::ShouldExpandHandleTable(DXGCHANNELENDPOINTPROXY *this, unsigned int a2)
{
  return a2 <= *((_DWORD *)this + 28);
}
