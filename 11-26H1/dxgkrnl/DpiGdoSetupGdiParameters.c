/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x14041B148
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x14041AD20 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiAppendStringToString @ 0x14024ADF8 (DpiAppendStringToString.c)
 *     DpiCopyUnicodeString @ 0x14024AFA8 (DpiCopyUnicodeString.c)
 *     DpiGdoCreateServiceEntry @ 0x140257148 (DpiGdoCreateServiceEntry.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int ServiceEntry; // ebx
  int appended; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v11; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID ValueData[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v20; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v22; // [rsp+118h] [rbp+18h]
  __int16 v23; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)SourceString = 0LL;
  v22 = 0;
  Source = 0LL;
  v23 = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  *(_OWORD *)ValueData = 0LL;
  Handle = 0LL;
  Destination = 0LL;
  memset(&v20, 0, sizeof(v20));
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v6 + 2847) )
  {
    ServiceEntry = 0;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v6 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
  }
  else
  {
    if ( ((*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4904LL) >> 64)) == 0 )
    {
      ServiceEntry = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1774;
      goto LABEL_38;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(((*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4904LL) >> 64))
                                      + 8),
                 &Source);
  }
  ServiceEntry = appended;
  if ( appended >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = &Source;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ServiceEntry = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( ServiceEntry < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1814;
      goto LABEL_38;
    }
    ServiceEntry = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
    if ( ServiceEntry >= 0 )
    {
      if ( *(_BYTE *)(v6 + 480) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        goto LABEL_14;
      }
      RtlStringCbPrintfW(SourceString, 0xEuLL, (size_t *)L"\\%04d", a3);
      RtlInitUnicodeString(&DestinationString, &SourceString[1]);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v11, 0xF003Fu, &ObjectAttributes) >= 0 && ZwDeleteKey(v11) < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1880;
      }
      ServiceEntry = ZwCreateKey(&v11, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      if ( ServiceEntry < 0 )
      {
        if ( ServiceEntry != -1073741771 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1903;
          goto LABEL_38;
        }
LABEL_14:
        ServiceEntry = DpiAppendStringToString(Source.Buffer, SourceString, (PUNICODE_STRING)ValueData);
        if ( ServiceEntry >= 0 )
        {
          ServiceEntry = RtlWriteRegistryValue(4u, L"VIDEO", *(PCWSTR *)(a2 + 8), 1u, ValueData[1], WORD1(ValueData[0]));
          if ( ServiceEntry >= 0 )
          {
            Destination.MaximumLength = Source.Length + 52;
            Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(Source.Length + 52), 1953656900LL);
            if ( Destination.Buffer )
            {
              ServiceEntry = RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( ServiceEntry >= 0 )
              {
                ServiceEntry = RtlAppendUnicodeToString(&Destination, SourceString);
                if ( ServiceEntry >= 0 )
                {
                  ServiceEntry = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
                  if ( ServiceEntry >= 0 )
                  {
                    v20.ObjectName = &Destination;
                    v20.Length = 48;
                    v20.RootDirectory = 0LL;
                    *(_OWORD *)&v20.SecurityDescriptor = 0LL;
                    v20.Attributes = 576;
                    ServiceEntry = ZwCreateKey(&Handle, 0xC0000000, &v20, 0, 0LL, 1u, 0LL);
                    if ( ServiceEntry >= 0 )
                    {
                      ServiceEntry = RtlWriteRegistryValue(
                                       0,
                                       Destination.Buffer,
                                       L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
                                       3u,
                                       *(PVOID *)(v3 + 168),
                                       *(unsigned __int16 *)(v3 + 160));
                      if ( ServiceEntry < 0 )
                      {
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 2103;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 2082;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 2054;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 2037;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2020;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2003;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1974;
          }
        }
        goto LABEL_38;
      }
      if ( Disposition != 1 )
        goto LABEL_14;
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
      ServiceEntry = ZwSetValueKey(v11, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
      if ( ServiceEntry >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1933;
    }
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
LABEL_40:
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString((PUNICODE_STRING)ValueData);
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)ServiceEntry;
}
