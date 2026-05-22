/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18006FE5C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D7F98 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall _tlgGuidIsZero(const struct _GUID *a1)
{
  char result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 && !*(_DWORD *)&a1->Data4[4] )
    return 1;
  return result;
}
