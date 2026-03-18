/*
 * XREFs of ObpDereferenceCurrentDeviceMap @ 0x140A18B70
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x140A181D0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 */

void __fastcall ObpDereferenceCurrentDeviceMap(volatile signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  if ( a2 )
  {
    _m_prefetchw(a2);
    v2 = *a2;
    while ( ((unsigned __int64)a1 ^ v2) < 0xF )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a2, v2 + 1, v2);
      if ( v3 == v2 )
        return;
    }
  }
  ObDereferenceDeviceMap(a1, 1u);
}
