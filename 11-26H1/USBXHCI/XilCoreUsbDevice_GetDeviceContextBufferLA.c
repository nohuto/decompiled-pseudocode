/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x14005742C
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x140025248 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140047410 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}
