/*
 * XREFs of _CmContainerListGenericObjectCallback @ 0x140809670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _CmValidateDeviceContainerName @ 0x14095B284 (_CmValidateDeviceContainerName.c)
 */

char __fastcall CmContainerListGenericObjectCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char result; // al

  result = 0;
  if ( a4 )
  {
    result = (int)CmValidateDeviceContainerName() >= 0;
    if ( result )
    {
      if ( *a4 )
        return guard_dispatch_icall_no_overrides(a1);
    }
  }
  return result;
}
