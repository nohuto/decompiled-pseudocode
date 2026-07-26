/*
 * XREFs of ndisAllocateConfigurationString @ 0x140034A40
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        PUNICODE_STRING Destination)
{
  const UNICODE_STRING *v6; // rsi
  int Length; // edx
  unsigned __int16 v9; // ax
  unsigned int v10; // r8d
  unsigned int v11; // edi
  int v12; // eax
  int v13; // r8d
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // ax
  wchar_t *Pool2; // rax
  char v18; // [rsp+30h] [rbp-28h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      8,
      17,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)a1,
      v18,
      (char)a3);
  }
  Length = a1->Length;
  v9 = -1;
  if ( (unsigned __int16)(ndisParameterStr.Length + Length) >= (unsigned __int16)Length )
    v9 = ndisParameterStr.Length + Length;
  v10 = (unsigned __int16)(ndisParameterStr.Length + Length) < (unsigned __int16)Length ? 0xC0000095 : 0;
  Destination->MaximumLength = v9;
  v11 = 0;
  if ( v6 )
  {
    Length = v9;
    LOWORD(Length) = a3->Length + v9;
    if ( (unsigned __int16)Length < v9 )
    {
      v12 = -1073741675;
      Length = 0xFFFF;
    }
    else
    {
      v12 = 0;
    }
    v13 = v12 | v10;
    Destination->MaximumLength = Length;
    v9 = -1;
    v14 = v6->Length + Length;
    if ( v14 >= (unsigned __int16)Length )
      v9 = v6->Length + Length;
    v10 = (v14 < (unsigned __int16)Length ? 0xC0000095 : 0) | v13;
  }
  v15 = v9 + 2;
  Destination->Buffer = 0LL;
  Destination->MaximumLength = v15;
  Destination->Length = 0;
  if ( !v10 && (Pool2 = (wchar_t *)ExAllocatePool2(64LL, v15, 538985550LL), (Destination->Buffer = Pool2) != 0LL) )
  {
    RtlCopyUnicodeString(Destination, a1);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( v6 )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, v6);
    }
  }
  else
  {
    v11 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      1,
      18,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)a1,
      (char)v6,
      (char)a3);
  }
  return v11;
}
