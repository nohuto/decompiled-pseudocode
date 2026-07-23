/*
 * XREFs of RtlUnicodeStringToInteger @ 0x140975540
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F1678 (RtlpMuiRegAddAlternateCodePage.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     RtlpQueryNlsSystemCodePages @ 0x140807D5C (RtlpQueryNlsSystemCodePages.c)
 *     WdipSemLoadNextEndEvent @ 0x140825C4C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     CmpGetAcpiProfileInformation @ 0x140859190 (CmpGetAcpiProfileInformation.c)
 *     _PnpParseIndirectResourceString @ 0x140973DB8 (_PnpParseIndirectResourceString.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     RtlGetIntegerAtom @ 0x140974EE0 (RtlGetIntegerAtom.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD9D70 (PopReadSimulatedHGSClasses.c)
 *     PopReadSimulatedWpsContainment @ 0x140CDA41C (PopReadSimulatedWpsContainment.c)
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringToInteger(PCUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG v5; // r9d
  NTSTATUS v6; // esi
  unsigned int Length; // eax
  wchar_t *Buffer; // r10
  unsigned int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v12; // ax
  wchar_t *v13; // rcx
  unsigned int v14; // edx
  int v15; // r11d
  ULONG v16; // edx
  __int16 v18; // ax

  v5 = 0;
  v6 = 0;
  Length = String->Length;
  if ( !(_WORD)Length || (Length & 1) != 0 )
    goto LABEL_21;
  Buffer = String->Buffer;
  v9 = Length >> 1;
  v10 = 0;
  while ( v9-- )
  {
    v10 = *Buffer++;
    if ( v10 > 0x20u )
      break;
    if ( !v9 )
    {
      v10 = 0;
      break;
    }
  }
  v12 = v10;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( v9 )
    {
      --v9;
      v12 = *Buffer++;
    }
    else
    {
      v12 = 0;
    }
  }
  v13 = Buffer;
  v14 = v9;
  if ( !Base )
  {
    Base = 10;
    v15 = 0;
    if ( v12 == 48 )
    {
      if ( !v9 )
        goto LABEL_47;
      --v9;
      v18 = *Buffer++;
      switch ( v18 )
      {
        case 'x':
          Base = 16;
          v15 = 4;
          break;
        case 'o':
          Base = 8;
          v15 = 3;
          break;
        case 'b':
          Base = 2;
          v15 = 1;
          break;
        default:
          v9 = v14;
          Buffer = v13;
          break;
      }
      if ( v9 )
      {
        --v9;
        v12 = *Buffer++;
      }
      else
      {
LABEL_47:
        v12 = 0;
      }
    }
    goto LABEL_10;
  }
  if ( Base != 16 )
  {
    switch ( Base )
    {
      case 2u:
        v15 = 1;
        goto LABEL_10;
      case 8u:
        v15 = 3;
        goto LABEL_10;
      case 0xAu:
        v15 = 0;
        goto LABEL_10;
    }
LABEL_21:
    v6 = -1073741811;
    goto LABEL_20;
  }
  v15 = 4;
LABEL_10:
  while ( v12 )
  {
    if ( (unsigned __int16)(v12 - 48) > 9u )
    {
      if ( (unsigned __int16)(v12 - 65) <= 5u )
      {
        v16 = v12 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v12 - 97) > 5u )
          break;
        v16 = v12 - 87;
      }
    }
    else
    {
      v16 = v12 - 48;
    }
    if ( v16 >= Base )
      break;
    v5 = v15 ? v16 | (v5 << v15) : v16 + Base * v5;
    if ( !v9 )
      break;
    --v9;
    v12 = *Buffer++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_20:
  *Value = v5;
  return v6;
}
