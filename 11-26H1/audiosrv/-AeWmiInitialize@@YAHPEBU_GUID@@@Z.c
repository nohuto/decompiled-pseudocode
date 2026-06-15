/*
 * XREFs of ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180122CC4
 * Callers:
 *     DllMain @ 0x180086B0C (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AeWmiInitialize(const struct _GUID *a1)
{
  _QWORD v2[3]; // [rsp+40h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = &GUID_NULL;
  g_fEventTracingEnabled = 1;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64 (__fastcall *)(enum WMIDPREQUESTCODE, void *, unsigned int *, void *), _QWORD, void *, __int64, _QWORD *, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
                        AeWmiCallback,
                        0LL,
                        &AEWMIGUID,
                        1LL,
                        v2,
                        0LL,
                        0LL,
                        &qword_18016F020) )
    return 1LL;
  g_fEventTracingEnabled = 0;
  return 0LL;
}
