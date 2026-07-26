/*
 * XREFs of ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x14009D170
 * Callers:
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x14009CE94 (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x140060390 (WPP_RECORDER_SF_dd_ea_140060390.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisSetFilterDefaultParameter(
        const struct _UNICODE_STRING *a1,
        const WCHAR *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int8 a4)
{
  int v5; // r15d
  unsigned int v7; // edi
  char v9; // si
  int v10; // edx
  NTSTATUS RegistryValues; // ebx
  wchar_t *Buffer; // rcx
  unsigned int i; // ebx
  int v14; // eax
  const WCHAR *v15; // rdx
  NTSTATUS v16; // eax
  int v17; // ecx
  char v19[8]; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[5]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a4;
  v7 = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 1;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  Value = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x60u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = a3->Buffer;
  QueryTable[1].QueryRoutine = 0LL;
  QueryTable[2].QueryRoutine = 0LL;
  QueryTable[3].QueryRoutine = 0LL;
  QueryTable[1].Name = L"Optional";
  QueryTable[4].Name = 0LL;
  QueryTable[1].Flags = (_BYTE)v5 != 0 ? 288 : 32;
  QueryTable[1].EntryContext = &String;
  QueryTable[2].Flags = QueryTable[1].Flags;
  QueryTable[2].Name = L"Default";
  QueryTable[3].Flags = QueryTable[1].Flags;
  QueryTable[2].EntryContext = &DestinationString;
  QueryTable[0].Flags = 1;
  QueryTable[3].Name = L"Type";
  QueryTable[3].EntryContext = &String2;
  QueryTable[1].DefaultType = (_BYTE)v5 != 0 ? 0x1000000 : 0;
  QueryTable[2].DefaultType = QueryTable[1].DefaultType;
  QueryTable[3].DefaultType = QueryTable[1].DefaultType;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, a2, QueryTable, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = v5;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x61u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      RegistryValues,
      *(_QWORD *)v19);
  }
  if ( RegistryValues )
  {
    v7 = -1073741823;
  }
  else
  {
    if ( String.Buffer )
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
    if ( !Value )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        if ( String2.Buffer )
        {
          for ( i = 0; i < 6; ++i )
          {
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)&unk_1400F6BB0 + 24 * i), &String2, 1u) )
            {
              v14 = *((_DWORD *)&unk_1400F6BB0 + 6 * i + 4);
              if ( v14 == 4 || v14 == 5 )
              {
                v15 = (const WCHAR *)&unk_1400F7E38;
                goto LABEL_20;
              }
              break;
            }
          }
        }
        v15 = L"0";
LABEL_20:
        RtlInitUnicodeString(&DestinationString, v15);
        Buffer = DestinationString.Buffer;
        v9 = 0;
      }
      v16 = RtlWriteRegistryValue(1u, (PCWSTR)a1->Buffer, (PCWSTR)a3->Buffer, 1u, Buffer, DestinationString.Length + 2);
      v17 = 0;
      if ( v16 )
        v17 = -1073741823;
      v7 = v17;
    }
  }
  if ( String.Buffer )
    ExFreePoolWithTag(String.Buffer, 0);
  if ( DestinationString.Buffer && v9 )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x62u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v7);
  return v7;
}
