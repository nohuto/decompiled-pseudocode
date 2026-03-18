/*
 * XREFs of PiDrvDbMountNode @ 0x140B65614
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     PiDrvDbFindNode @ 0x140528E14 (PiDrvDbFindNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x1407B630C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbMountNode(PCWSTR Source)
{
  int appended; // ebx
  wchar_t *Buffer; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Sourcea; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-10h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h] BYREF

  Sourcea = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v7, 0LL);
  RtlInitUnicodeString(&Sourcea, Source);
  if ( (int)PiDrvDbFindNode(&Sourcea, &v8) >= 0 )
  {
    appended = (*(_DWORD *)(v8 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
LABEL_3:
    Buffer = DestinationString.Buffer;
    goto LABEL_4;
  }
  DestinationString.Length = 0;
  DestinationString.MaximumLength = Sourcea.Length + 38;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    appended = RtlAppendUnicodeToString(&DestinationString, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_3;
    appended = RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    if ( appended < 0 )
      goto LABEL_3;
    appended = PiDrvDbQueryHiveFileName((__int64)&DestinationString, &v7);
    if ( appended < 0 )
      goto LABEL_3;
    Buffer = DestinationString.Buffer;
    appended = PiDrvDbRegisterNode(Source, 24, 0, DestinationString.Buffer, v7.Buffer);
  }
  else
  {
    appended = -1073741670;
  }
LABEL_4:
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v7.Buffer )
    ExFreePool(v7.Buffer);
  return (unsigned int)appended;
}
