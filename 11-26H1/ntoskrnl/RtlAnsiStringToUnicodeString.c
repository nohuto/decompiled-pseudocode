/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14096BA30
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1405B83B0 (HvlDebuggerSupportInitialize.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1405CA598 (IopCreateUnicodeFromAnsiBuffer.c)
 *     PopEmModuleAddressMatchCallback @ 0x14060DD00 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140611370 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x140695100 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmpInitializeLoadOptions @ 0x1406E20E8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14071AA3C (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     KsepStringAnsiToUnicode @ 0x1407BE7F0 (KsepStringAnsiToUnicode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140801910 (RtlCreateUnicodeStringFromAsciiz.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1408226FC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x140822B8C (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x140824510 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14085294C (CmpCreateHwProfileFriendlyName.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140853E00 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1408566EC (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x14085C5DC (CmpInitializeRegistryNode.c)
 *     CmpFindControlSet @ 0x14085F13C (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x140887EBC (AslStringAnsiToUnicode.c)
 *     RtlInt64ToUnicodeString @ 0x14096A860 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14096B330 (RtlIntegerToUnicodeString.c)
 *     ObCheckRefTraceProcess @ 0x140984928 (ObCheckRefTraceProcess.c)
 *     PiGetDefaultMessageString @ 0x140A26864 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140ADD2D8 (MiSnapThunk.c)
 *     PopAnsiStringToUnicodeString @ 0x140AFD894 (PopAnsiStringToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     EmpInfParseGetGuidFromName @ 0x140CB5E44 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140CB625C (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140CBC528 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140CBD890 (IopMarkBootPartition.c)
 *     IopMountBlockIoLayerCallback @ 0x140CBDAD0 (IopMountBlockIoLayerCallback.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140CC1740 (PipCriticalDeviceWaitCallback.c)
 *     PipSmBiosGetString @ 0x140CC34AC (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140CEAB70 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140CED418 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CED7B0 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1404621F0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x14096D210 (RtlUTF8ToUnicodeN.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // ebx
  ULONG Length; // edi
  char *Buffer; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *Blink; // rdx
  wchar_t **p_Buffer; // r12
  NTSTATUS result; // eax
  ULONG UTF8StringByteCount; // edi
  char *v14; // r14
  ULONG MaximumLength; // esi
  WCHAR *v16; // rbx
  struct _CPTABLEINFO *p_Blink; // rdx
  ULONG v18; // esi
  ULONG v19; // r8d
  unsigned __int16 *MultiByteTable; // r10
  ULONG v21; // r9d
  int v22; // r9d
  unsigned __int16 *DBCSOffsets; // r10
  WCHAR *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  char *v27; // r14
  __int64 v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  ULONG v31; // [rsp+30h] [rbp-68h]
  ULONG v32; // [rsp+34h] [rbp-64h]
  ULONG v33; // [rsp+38h] [rbp-60h]
  NTSTATUS v34; // [rsp+40h] [rbp-58h]
  WCHAR *v35; // [rsp+48h] [rbp-50h]
  char *v36; // [rsp+50h] [rbp-48h]
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v38; // [rsp+B0h] [rbp+18h]
  int v39; // [rsp+B8h] [rbp+20h]

  v38 = AllocateDestinationString;
  v6 = 0;
  UnicodeStringActualByteCount = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( Length )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, Length);
      v6 = UnicodeStringActualByteCount;
    }
  }
  else
  {
    _InterlockedOr(v30, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[73].Blink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      while ( Length-- )
      {
        v29 = (unsigned __int8)*Buffer++;
        if ( *((_WORD *)&Blink->Flink + v29) )
        {
          if ( !Length )
          {
            v6 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * Length;
    }
  }
  UnicodeStringActualByteCount = v6 + 2;
  if ( v6 + 2 > 0xFFFE )
    return -1073741584;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateUnicodeStringBuffer(
             AllocateDestinationString,
             v6 + 2,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  v34 = result;
  if ( result >= 0 )
  {
    UTF8StringByteCount = SourceString->Length;
    v14 = SourceString->Buffer;
    MaximumLength = DestinationString->MaximumLength;
    v16 = *p_Buffer;
    if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    {
      p_Blink = &Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v30, 0);
      p_Blink = (struct _CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
    }
    v33 = UTF8StringByteCount;
    v36 = v14;
    v35 = v16;
    v31 = 0;
    v32 = 0;
    if ( !p_Blink || p_Blink->CodePage == 0xFDE9 )
    {
      v39 = 0;
      if ( !UTF8StringByteCount )
      {
        v19 = 0;
        UnicodeStringActualByteCount = 0;
        goto LABEL_31;
      }
      RtlUTF8ToUnicodeN(v16, MaximumLength, &UnicodeStringActualByteCount, v14, UTF8StringByteCount);
    }
    else
    {
      v18 = MaximumLength >> 1;
      v32 = v18;
      if ( !p_Blink->DBCSCodePage )
      {
        if ( v18 < UTF8StringByteCount )
          UTF8StringByteCount = v18;
        v19 = 2 * UTF8StringByteCount;
        UnicodeStringActualByteCount = 2 * UTF8StringByteCount;
        MultiByteTable = p_Blink->MultiByteTable;
        v21 = 0;
        v31 = 0;
        while ( v21 < UTF8StringByteCount )
        {
          v16[v21] = MultiByteTable[(unsigned __int8)v14[v21]];
          v31 = ++v21;
        }
        goto LABEL_31;
      }
      v22 = (int)v16;
      DBCSOffsets = p_Blink->DBCSOffsets;
      while ( v18 && UTF8StringByteCount )
      {
        v32 = --v18;
        v33 = --UTF8StringByteCount;
        v24 = v16 + 1;
        v25 = (unsigned __int8)*v14;
        v26 = DBCSOffsets[v25];
        if ( (_WORD)v26 )
        {
          if ( !UTF8StringByteCount )
          {
            *v16 = 0;
            LODWORD(v16) = (_DWORD)v16 + 2;
            v35 = v24;
            break;
          }
          v27 = v14 + 1;
          v36 = v27;
          *v16 = DBCSOffsets[(unsigned __int8)*v27 + v26];
          v14 = v27 + 1;
          v33 = --UTF8StringByteCount;
        }
        else
        {
          *v16 = p_Blink->MultiByteTable[v25];
          ++v14;
        }
        ++v16;
        v36 = v14;
        v35 = v24;
      }
      UnicodeStringActualByteCount = (_DWORD)v16 - v22;
    }
    v19 = UnicodeStringActualByteCount;
LABEL_31:
    v34 = 0;
    DestinationString->Length = v19;
    (*p_Buffer)[(unsigned __int64)v19 >> 1] = 0;
    return 0;
  }
  return result;
}
