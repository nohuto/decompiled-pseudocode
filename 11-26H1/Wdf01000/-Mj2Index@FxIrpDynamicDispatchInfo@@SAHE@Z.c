/*
 * XREFs of ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x140062444
 * Callers:
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1400A122C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIrpDynamicDispatchInfo::Mj2Index(unsigned __int8 MajorFunction)
{
  __int64 result; // rax

  result = 3LL;
  switch ( MajorFunction )
  {
    case 3u:
      return 0LL;
    case 4u:
      return 1LL;
    case 0xEu:
      return 2LL;
  }
  if ( MajorFunction != 15 )
    return 4LL;
  return result;
}
