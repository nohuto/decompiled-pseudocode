/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800792F0
 * Callers:
 *     ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x180079110 (-AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800795B8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // di
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE v7; // rax
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  int v10; // ebx
  NTSTATUS v12; // ebx
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Name[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset_0(Buffer, 0, 0x228uLL);
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(Name, 0x104uLL, L"%s%I64x", L"DwmDxBltEvent_", a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    RestartScan = 93;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v7 = OpenEventW(2u, 0, Name);
    if ( v7 )
    {
      *a2 = v7;
      goto LABEL_9;
    }
    v8 = DirectoryHandle;
    if ( DirectoryHandle )
      goto LABEL_4;
    v5 = StringCchPrintfW(Name, 0x104uLL, L"\\Sessions\\%u\\AppContainerNamedObjects", NtCurrentPeb()->SessionId);
    v6 = v5;
    if ( v5 < 0 )
      break;
    RtlInitUnicodeString(&DestinationString, Name);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
    if ( v12 < 0 )
    {
      v6 = v12 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2EF0, 3u, v6, 0x84u, 0LL);
      goto LABEL_9;
    }
    v8 = DirectoryHandle;
LABEL_4:
    v9 = NtQueryDirectoryObject(v8, Buffer, 0x228u, 1u, v4, &Context, 0LL);
    v10 = v9;
    if ( v9 == -2147483622 )
    {
      v10 = -1073741772;
LABEL_16:
      v6 = v10 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2EF0, 3u, v6, 0x97u, 0LL);
      goto LABEL_9;
    }
    if ( v9 < 0 )
      goto LABEL_16;
    v4 = 0;
    v5 = StringCchPrintfW(Name, 0x104uLL, L"AppContainerNamedObjects\\%wZ\\%s%I64x", Buffer, L"DwmDxBltEvent_", a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      RestartScan = 163;
      goto LABEL_8;
    }
  }
  RestartScan = 123;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2EF0, 3u, v5, RestartScan, 0LL);
LABEL_9:
  if ( DirectoryHandle )
    CloseHandle(DirectoryHandle);
  return v6;
}
