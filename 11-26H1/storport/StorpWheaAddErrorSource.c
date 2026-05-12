/*
 * XREFs of StorpWheaAddErrorSource @ 0x140188940
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_140172004 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
