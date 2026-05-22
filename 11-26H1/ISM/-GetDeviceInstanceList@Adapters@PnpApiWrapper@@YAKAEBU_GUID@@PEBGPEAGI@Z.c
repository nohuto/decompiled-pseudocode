/*
 * XREFs of ?GetDeviceInstanceList@Adapters@PnpApiWrapper@@YAKAEBU_GUID@@PEBGPEAGI@Z @ 0x1800E7270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceInstanceList(
        PnpApiWrapper::Adapters *this,
        const WCHAR *a2,
        WCHAR *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  return CM_Get_Device_ID_ListW(a2, a3, (ULONG)a4, 0x100u);
}
