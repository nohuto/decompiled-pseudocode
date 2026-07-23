/*
 * XREFs of BiResolveLocateDevice @ 0x140897718
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140B66674 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x140728760 (ZwQueryAttributesFile.c)
 *     BiGetBcdDeviceType @ 0x140898600 (BiGetBcdDeviceType.c)
 *     BiGetLocateTarget @ 0x1408992A8 (BiGetLocateTarget.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocateDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  WCHAR *v4; // rdi
  NTSTATUS v5; // ebx
  __int64 BcdDeviceType; // rax
  int LocateTarget; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-49h] BYREF
  PCWSTR Source; // [rsp+28h] [rbp-41h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(unsigned int *)(a2 + 24);
  Source = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v12[0] = 0;
  Destination = 0LL;
  if ( *(_DWORD *)(v2 + a2) != 2 )
  {
    v5 = -1073741637;
    BcdDeviceType = BiGetBcdDeviceType();
    BiLogMessage(
      3LL,
      L"BiResolveLocateDevice: Parent device (%ws) is not partition. Status %x",
      BcdDeviceType,
      3221225659LL);
LABEL_11:
    BiLogMessage(3LL, L"BiResolveLocateDevice: Failed Status %x", (unsigned int)v5);
    goto LABEL_13;
  }
  LocateTarget = BiGetLocateTarget(a1, a2, &Source, v12);
  v5 = LocateTarget;
  if ( LocateTarget < 0 )
  {
    BiLogMessage(2LL, L"BiResolveLocateDevice: Failed to get locate target %x", (unsigned int)LocateTarget);
    v4 = (WCHAR *)Source;
    goto LABEL_11;
  }
  v4 = (WCHAR *)Source;
  BiLogMessage(2LL, L"BiResolveLocateDevice: LOCATE=[%ws]", Source);
  v8 = v2 + a2;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  do
    ++v9;
  while ( *(_WORD *)(v8 + 2 * v9 + 20) );
  Destination.MaximumLength = 2 * (v10 + 1 + v9);
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
  if ( !Destination.Buffer )
  {
    v5 = -1073741670;
    goto LABEL_11;
  }
  RtlAppendUnicodeToString(&Destination, (PCWSTR)(v8 + 20));
  RtlAppendUnicodeToString(&Destination, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v5 < 0 )
    goto LABEL_11;
  BiLogMessage(2LL, L"BiResolveLocateDevice: Partition:%ws", v8 + 20);
LABEL_13:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
  if ( v4 && v12[0] )
    ExFreePoolWithTag(v4, 0x4B444342u);
  return (unsigned int)v5;
}
