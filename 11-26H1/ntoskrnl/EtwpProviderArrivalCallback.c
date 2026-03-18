/*
 * XREFs of EtwpProviderArrivalCallback @ 0x14093C304
 * Callers:
 *     EtwpTrackProviderBinaryKm @ 0x1408289A8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x140828C6C (EtwpTrackProviderBinaryOld.c)
 *     EtwpTrackProviderRegistration @ 0x140936F80 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1404D9298 (MmLockLoadedDataTableEntryShared.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1406FD1D0 (MmUnlockLoadedDataTableEntryShared.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpEventWriteDebugLookupFailed @ 0x1408252C8 (EtwpEventWriteDebugLookupFailed.c)
 *     EtwpSendDbgId @ 0x14082C740 (EtwpSendDbgId.c)
 *     EtwpTrackBinaryForSession @ 0x14093C508 (EtwpTrackBinaryForSession.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140942658 (EtwpLocateDbgIdForRegEntry.c)
 *     MmGetFileNameForAddress @ 0x1409FBE08 (MmGetFileNameForAddress.c)
 *     EtwpTrackDebugIdForSession @ 0x140A8465C (EtwpTrackDebugIdForSession.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rcx
  int FileNameForAddress; // ebx
  wchar_t *Buffer; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  _BYTE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE P[512]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_QWORD *)(a3 + 88);
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  FileNameForAddress = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x10) != 0 || (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
  {
    *(_DWORD *)&DestinationString.Length = 0x2000000;
    Buffer = (wchar_t *)P;
    DestinationString.Buffer = (wchar_t *)P;
    if ( a2 )
    {
      FileNameForAddress = MmGetFileNameForAddress(v4, &DestinationString);
    }
    else
    {
      v10 = MmLockLoadedDataTableEntryShared(v4);
      v11 = v10;
      if ( !v10 )
      {
        FileNameForAddress = -1073741275;
LABEL_11:
        if ( FileNameForAddress >= 0 )
          EtwpTrackBinaryForSession(a1, &DestinationString, *(_QWORD *)(a3 + 32) + 40LL);
        if ( Buffer != (wchar_t *)P )
          ExFreePoolWithTag(Buffer, 0);
        goto LABEL_15;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v10 + 72));
      MmUnlockLoadedDataTableEntryShared(v11);
      FileNameForAddress = 0;
    }
    Buffer = DestinationString.Buffer;
    goto LABEL_11;
  }
LABEL_15:
  if ( (*(_BYTE *)(a3 + 98) & 8) != 0
    || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
    && _bittest16((const signed __int16 *)(a3 + 98), 0xAu) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
      return 3221225659LL;
    v20 = 512;
    *(_QWORD *)&DestinationString.Length = P;
    LOBYTE(v4) = a2;
    v12 = EtwpLocateDbgIdForRegEntry(v4, a3, &DestinationString, &v20);
    v13 = *(_BYTE **)&DestinationString.Length;
    FileNameForAddress = v12;
    if ( v12 < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_DEBUG_LOOKUP_FAILED) )
        EtwpEventWriteDebugLookupFailed(v18, v17, v19, a3, a1, FileNameForAddress);
    }
    else
    {
      EtwpTrackDebugIdForSession(a1, *(_QWORD *)&DestinationString.Length, v20);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendDbgId(a1, v14, v15, v16);
      }
    }
    if ( v13 != P )
      ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)FileNameForAddress;
}
