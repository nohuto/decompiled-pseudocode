/*
 * XREFs of IoRegisterDeviceInterface @ 0x1409AB500
 * Callers:
 *     DifIoRegisterDeviceInterfaceWrapper @ 0x1406617F0 (DifIoRegisterDeviceInterfaceWrapper.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcspbrk @ 0x14053AFB4 (wcspbrk.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  WCHAR *v8; // rdi
  wchar_t *v9; // rsi
  PVOID DeviceNode; // rbp
  const wchar_t *v11; // rcx
  int v12; // eax
  int inited; // ebx
  const WCHAR *v14; // rdx
  unsigned __int64 Length; // rdx
  __int64 MaximumLength; // r8
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v20; // rbx
  int v21; // [rsp+30h] [rbp-38h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF

  v23 = 0;
  SourceString = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  *SymbolicLinkName = 0LL;
  if ( !PhysicalDeviceObject
    || (DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
    || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    inited = -1073741808;
LABEL_9:
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    goto LABEL_11;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    goto LABEL_23;
  ObQueryNameStringMode((__int64)PhysicalDeviceObject, 0LL, 0, &v23, 0);
  if ( v23 <= 0x10 )
    goto LABEL_23;
  if ( ReferenceString )
  {
    Length = ReferenceString->Length;
    if ( (unsigned __int16)Length >= 2u )
    {
      MaximumLength = ReferenceString->MaximumLength;
      if ( (unsigned __int16)MaximumLength >= 2u )
      {
        Buffer = ReferenceString->Buffer;
        if ( Buffer )
        {
          if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
          {
            inited = -1073741811;
            goto LABEL_11;
          }
          if ( *Buffer
            && ((_WORD)Length != (_WORD)MaximumLength || Buffer[((unsigned __int64)ReferenceString->Length >> 1) - 1])
            && (Length > MaximumLength - 2 || Buffer[(Length >> 1) - 1] && Buffer[Length >> 1]) )
          {
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v20 = Pool2;
            if ( !Pool2 )
            {
              inited = -1073741670;
              goto LABEL_11;
            }
            memmove(Pool2, ReferenceString->Buffer, ReferenceString->Length);
            v9 = v20;
            v20[(unsigned __int64)ReferenceString->Length >> 1] = 0;
          }
          else
          {
            v9 = ReferenceString->Buffer;
          }
        }
      }
      if ( wcspbrk(v9, L"\\/") )
      {
LABEL_23:
        inited = -1073741808;
        goto LABEL_11;
      }
    }
  }
  v11 = (const wchar_t *)*((_QWORD *)DeviceNode + 6);
  v21 = 0;
  v12 = IopRegisterDeviceInterface(v11, (__int64)InterfaceClassGuid, v9, 0, (PVOID *)&SourceString, &v21);
  v8 = (WCHAR *)SourceString;
  inited = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v14 = SourceString;
  PhysicalDeviceObject->Flags |= v21;
  inited = RtlInitUnicodeStringEx(SymbolicLinkName, v14);
  if ( inited < 0 )
    goto LABEL_9;
LABEL_11:
  PnpUnicodeStringToWstrFree(v9, ReferenceString);
  return inited;
}
