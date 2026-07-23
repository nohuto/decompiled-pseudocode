/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x18007FCE4
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18007EAA0 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     WerpPathTail @ 0x18007FEC4 (WerpPathTail.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v2; // rax
  const WCHAR *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // esi
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v10; // [rsp+78h] [rbp-88h]
  HANDLE KeyHandle; // [rsp+2C0h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(ProcessInformation, 0, 0x220uLL);
  *(_OWORD *)BaseAddress = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v2 = WerpPathTail(v10);
    v3 = (const WCHAR *)v2;
    if ( v2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(v2 + 2 * v4) );
      v5 = 2 * v4 + 202;
      BaseAddress[1] = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
      if ( BaseAddress[1] )
      {
        WORD1(BaseAddress[0]) = v5;
        if ( RtlAppendUnicodeToString(
               (PUNICODE_STRING)BaseAddress,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString((PUNICODE_STRING)BaseAddress, v3) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
            RtlQueryImageFileKeyOption(KeyHandle, (wchar_t *)L"GlobalFlag", 4, 0LL);
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( BaseAddress[1] )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
  return 0LL;
}
