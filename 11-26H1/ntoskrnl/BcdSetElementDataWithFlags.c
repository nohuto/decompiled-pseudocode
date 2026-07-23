/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1409A40A4
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E6654 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14081C344 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     PopBcdSetupResumeObject @ 0x1409A3F8C (PopBcdSetupResumeObject.c)
 *     BcdSetElementData @ 0x1409A4084 (BcdSetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409A4BE4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 * Callees:
 *     _ultow_s @ 0x14053DA00 (_ultow_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiConvertElementFormatToValueType @ 0x1409A34EC (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x1409A3524 (BiConvertElementToRegistryData.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409A594C (BiSetFirmwareModifiedFromObject.c)
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  HANDLE v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  PVOID v17; // r15
  unsigned int v18; // eax
  int v19; // eax
  NTSTATUS v21; // r8d
  __int64 v22; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v23; // [rsp+38h] [rbp-39h] BYREF
  ULONG v24; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v24 = BcdElement;
  HIDWORD(v22) = 0;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v23 = 0LL;
  v8 = 0LL;
  LOBYTE(v22) = 0;
  Handle = 0LL;
  P = 0LL;
  if ( !BufferSize )
  {
    BiDeleteElement((__int64)BcdObjectHandle, BcdElement);
    return 0;
  }
  BiLogMessage(2LL, L"Setting element %08x", BcdElement);
  LOBYTE(v9) = (unsigned __int8)BcdObjectHandle & 1;
  BYTE1(v22) = (unsigned __int8)BcdObjectHandle & 1;
  v10 = BiAcquireBcdSyncMutant(v9);
  if ( v10 < 0 )
  {
    BiLogMessage(4LL, L"BcdSetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v10);
    return v21;
  }
  v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    goto LABEL_22;
  }
  if ( !ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
  {
    v14 = BiCreateKey(v23, DstBuf, 65538LL, 1LL, &Handle, &v22);
    v12 = v14;
    if ( v14 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
      v8 = Handle;
    }
    else
    {
      v16 = BiConvertElementToRegistryData(
              BcdElement,
              (GUID *)Buffer,
              BufferSize,
              v15,
              (wchar_t **)&P,
              (unsigned int *)&v22 + 1);
      v8 = Handle;
      v12 = v16;
      v17 = P;
      if ( v16 < 0 )
      {
        BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v16);
      }
      else
      {
        v18 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v19 = BiSetRegistryValue(v8, L"Element", 0LL, v18, v17, HIDWORD(v22), v22, v23);
        v12 = v19;
        if ( v19 < 0 )
          BiLogMessage(4LL, L"Failed to set registry data for element %s. Status: %x", DstBuf, (unsigned int)v19);
      }
      if ( v17 )
        ExFreePoolWithTag(v17, 0x4B444342u);
      if ( v12 >= 0 )
        goto LABEL_13;
    }
LABEL_22:
    if ( (_BYTE)v22 )
    {
      BiDeleteKey((__int64)v8);
      v8 = 0LL;
    }
LABEL_13:
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  if ( v23 )
    BiCloseKey(v23);
  if ( v12 >= 0 )
  {
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, &v24) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
  }
  LOBYTE(v13) = BYTE1(v22);
  BiReleaseBcdSyncMutant(v13);
  return v12;
}
