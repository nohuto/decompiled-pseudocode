/*
 * XREFs of _CmContainerListGenericObjectCallback @ 0x14089D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmValidateDeviceContainerName @ 0x140A3CE94 (_CmValidateDeviceContainerName.c)
 */

char __fastcall CmContainerListGenericObjectCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char result; // al

  result = 0;
  if ( a4 )
  {
    if ( (int)CmValidateDeviceContainerName() < 0 )
    {
      return 0;
    }
    else
    {
      result = 1;
      if ( *a4 )
        return guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return result;
}
