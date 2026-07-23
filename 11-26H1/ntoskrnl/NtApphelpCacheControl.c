/*
 * XREFs of NtApphelpCacheControl @ 0x140A30790
 * Callers:
 *     DifNtApphelpCacheControlWrapper @ 0x1406715B0 (DifNtApphelpCacheControlWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     AhcCacheQueryHwId @ 0x1407791E0 (AhcCacheQueryHwId.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall NtApphelpCacheControl(int a1, char *a2)
{
  ULONG v3; // edi
  unsigned int v4; // ebx
  PIRP v5; // rbx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+77h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a1 >= 12 )
    return (unsigned int)-1073741811;
  FileObject = 0LL;
  v3 = (4 * a1) | 0x220003;
  DeviceObject = 0LL;
  if ( a1 == 9 )
    return (unsigned int)AhcCacheQueryHwId(a2);
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
      {
LABEL_6:
        v4 = -1073741275;
        goto LABEL_7;
      }
      v8 = a1 - 1;
      if ( !v8 )
        goto LABEL_27;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_27;
      v11 = v9 - 1;
      v10 = v11 == 0;
      goto LABEL_28;
    }
LABEL_26:
    v4 = -1073741823;
    goto LABEL_7;
  }
  v12 = a1 - 6;
  if ( !v12 )
    goto LABEL_6;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_27;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_26;
  v11 = v14 - 2;
  v10 = v11 == 0;
LABEL_28:
  if ( !v10 )
  {
    if ( v11 == 1 )
      goto LABEL_26;
    return (unsigned int)-1073741811;
  }
LABEL_27:
  v4 = 0;
LABEL_7:
  if ( WheapPfaLock.KernelShadowStack )
  {
LABEL_8:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           v3,
           (PDEVICE_OBJECT)WheapPfaLock.KernelShadowStack,
           a2,
           0x188u,
           0LL,
           0,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v5 )
      return (unsigned int)-1073741823;
    v5->RequestorMode = ExGetPreviousMode();
    return (unsigned int)IofCallDriver((PDEVICE_OBJECT)WheapPfaLock.KernelShadowStack, v5);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"\\Device\\ahcache") >= 0
    && IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject) >= 0 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&WheapPfaLock.KernelShadowStack,
           (signed __int64)DeviceObject,
           0LL) )
    {
      ObfDereferenceObject(FileObject);
    }
    goto LABEL_8;
  }
  return v4;
}
