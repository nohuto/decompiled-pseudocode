/*
 * XREFs of PiSwCloseDevice @ 0x140A7B100
 * Callers:
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwCloseDescendants @ 0x140A7CAE0 (PiSwCloseDescendants.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1404D2B60 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x140525230 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A7AE8C (PiSwQueuedCreateInfoFree.c)
 *     PiSwBusRelationRemove @ 0x140A7B204 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140A7B3F4 (PiSwDeviceDereference.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  _QWORD *Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = (_QWORD *)a1;
  if ( (byte_140EF3DCC & 0x40) != 0 )
  {
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDevice,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    PiSwQueuedCreateInfoFree(*(char **)(a1 + 88));
    Buffer[11] = 0LL;
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v4 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v4);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      PiSwBusRelationRemove((PVOID)a1);
      a1 = (__int64)Buffer;
    }
    if ( (byte_140EF3DCC & 0x40) != 0 )
      McTemplateK0zz_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
        a3,
        *(const wchar_t **)(a1 + 8),
        *(const wchar_t **)(a1 + 16));
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    return (struct _DEVICE_OBJECT *)PiSwDeviceDereference(Buffer);
  }
  return result;
}
