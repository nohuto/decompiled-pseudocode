/*
 * XREFs of ?GetDeviceInterfaceProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x18010EAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall Adapters::GetDeviceInterfaceProperty(
        Adapters *this,
        const DEVPROPKEY *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4,
        PULONG PropertyBufferSize)
{
  return CM_Get_Device_Interface_PropertyW((LPCWSTR)this, a2, &a3->fmtid.Data1, a4, PropertyBufferSize, 0);
}
