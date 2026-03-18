/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1409D30C4
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E15C4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140816134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140893620 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     PopBcdSetupResumeObject @ 0x1409D2FAC (PopBcdSetupResumeObject.c)
 *     BcdSetElementData @ 0x1409D30A4 (BcdSetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetPendingResume @ 0x140B4C7C4 (PopBcdSetPendingResume.c)
 * Callees:
 *     _ultow_s @ 0x14053B580 (_ultow_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409D15A8 (BiDeleteKey.c)
 *     BiConvertElementFormatToValueType @ 0x1409D250C (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x1409D2544 (BiConvertElementToRegistryData.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409D472C (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409D496C (BiSetFirmwareModifiedFromObject.c)
 *     BiCreateKey @ 0x1409D5868 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  HANDLE v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  PVOID v17; // r15
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v21; // r8d
  __int64 v22; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v23; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v24 = a2;
  HIDWORD(v22) = 0;
  if ( !a4 && a5 )
    return 3221225485LL;
  v23 = 0LL;
  v8 = 0LL;
  LOBYTE(v22) = 0;
  Handle = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0LL;
  }
  BiLogMessage(2LL, L"Setting element %08x", a2);
  LOBYTE(v9) = a1 & 1;
  BYTE1(v22) = a1 & 1;
  v10 = BiAcquireBcdSyncMutant(v9);
  if ( v10 < 0 )
  {
    BiLogMessage(4LL, L"BcdSetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v10);
    return v21;
  }
  v11 = BiOpenKey(a1, L"Elements", 131101LL, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    goto LABEL_22;
  }
  if ( !ultow_s(a2, DstBuf, 0x16uLL, 16) )
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
      v16 = BiConvertElementToRegistryData(a2, a4, a5, v15, &P, (unsigned int *)&v22 + 1);
      v8 = Handle;
      v12 = v16;
      v17 = P;
      if ( v16 < 0 )
      {
        BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v16);
      }
      else
      {
        v18 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
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
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v24) )
      BiSetFirmwareModifiedFromObject(a1);
  }
  LOBYTE(v13) = BYTE1(v22);
  BiReleaseBcdSyncMutant(v13);
  return (unsigned int)v12;
}
