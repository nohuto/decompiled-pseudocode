/*
 * XREFs of StorAddChildAdapter @ 0x14012EDD8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     RtlStringCbPrintfW @ 0x14004308C (RtlStringCbPrintfW.c)
 *     StorGetCommonAdapterMiniport @ 0x140078958 (StorGetCommonAdapterMiniport.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaSaveDriverInitData @ 0x140187F90 (RaSaveDriverInitData.c)
 */

__int64 __fastcall StorAddChildAdapter(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *DeviceExtension; // rdi
  _DWORD *CommonAdapterMiniport; // rax
  _DWORD *v7; // rsi
  NTSTATUS inited; // eax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-89h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-29h] BYREF

  v2 = 0;
  DeviceExtension = 0LL;
  DeviceObject = 0LL;
  DestinationString = 0LL;
  if ( !a2 )
    return (unsigned int)-1056964602;
  CommonAdapterMiniport = StorGetCommonAdapterMiniport((_DWORD *)a1);
  v7 = CommonAdapterMiniport;
  if ( !CommonAdapterMiniport || (CommonAdapterMiniport[62] & 0x280) != 0 )
    return (unsigned int)-1056964602;
  inited = RtlStringCbPrintfW(
             pszDest,
             0x4CuLL,
             L"\\Device\\STORPORT_CA%d",
             (unsigned int)_InterlockedIncrement(&StorChildAdapterNumber));
  if ( inited >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    inited = IoCreateDevice(
               *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 16) + 8LL),
               0x50u,
               &DestinationString,
               0x22u,
               0,
               0,
               &DeviceObject);
    if ( inited >= 0 )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
      *((_QWORD *)DeviceExtension + 8) = CacheAwareRundownProtection;
      if ( CacheAwareRundownProtection )
      {
        *(_DWORD *)DeviceExtension = 1396916560;
        *((_DWORD *)DeviceExtension + 15) = 2;
        *((_QWORD *)DeviceExtension + 2) = *(_QWORD *)(a1 + 16);
        *((_QWORD *)DeviceExtension + 4) = DeviceObject;
        *((_QWORD *)DeviceExtension + 9) = a1;
        inited = RaSaveDriverInitData(*(_QWORD *)(a1 + 16), a2);
        if ( inited >= 0 )
        {
          *((_QWORD *)v7 + 48) = DeviceObject;
          _InterlockedOr(v12, 0);
          v7[62] |= 0x180u;
          DeviceObject->Flags &= ~0x80u;
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
          return v2;
        }
      }
      else
      {
        inited = -1073741801;
      }
    }
  }
  v2 = RaidNtStatusToStorStatus(inited);
  if ( v2 && DeviceExtension )
  {
    v10 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)DeviceExtension + 8);
    if ( v10 )
      ExFreeCacheAwareRundownProtection(v10);
    IoDeleteDevice(DeviceObject);
  }
  return v2;
}
