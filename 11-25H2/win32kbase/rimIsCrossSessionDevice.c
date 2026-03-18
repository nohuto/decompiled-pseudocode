/*
 * XREFs of rimIsCrossSessionDevice @ 0x1401D5C0C
 * Callers:
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     RIMGetPointerDevicePDO @ 0x1400B23E4 (RIMGetPointerDevicePDO.c)
 */

_BOOL8 __fastcall rimIsCrossSessionDevice(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rcx
  BOOL v2; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v4; // rdi
  int Data; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+68h] [rbp+10h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp+18h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+78h] [rbp+20h] BYREF

  v1 = *(struct _FILE_OBJECT **)(a1 + 216);
  v2 = 0;
  Pdo = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v1);
  v4 = RelatedDeviceObject;
  if ( RelatedDeviceObject )
  {
    ObfReferenceObject(RelatedDeviceObject);
    if ( (int)RIMGetPointerDevicePDO(v4, &Pdo) >= 0 )
    {
      Data = 0;
      RequiredSize = 0;
      Type = 0;
      if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_SessionId, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0 )
        v2 = Data != W32GetCurrentWin32kSessionId();
      ObfDereferenceObject(Pdo);
    }
    ObfDereferenceObject(v4);
  }
  return v2;
}
