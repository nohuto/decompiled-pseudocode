/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x140A138AC
 * Callers:
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     EtwpRealtimeResetReferenceTime @ 0x14083624C (EtwpRealtimeResetReferenceTime.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140836280 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpSendSessionNotification @ 0x140A14650 (EtwpSendSessionNotification.c)
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140B4652C (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeRestoreState @ 0x140B561BC (EtwpRealtimeRestoreState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  size_t v5; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  wchar_t v8; // ax
  wchar_t *v9; // rdx
  __int64 v10; // rax
  const WCHAR *v11; // rdx
  int updated; // edi
  __int64 v13; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  v1 = a1 + 360;
  DestinationString = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 368) )
    goto LABEL_30;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 144) + 2 * v4) );
  v5 = 2LL * (unsigned int)(v4 + 9) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( RtlStringCbPrintfW(Pool2, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 144)) )
  {
    ExFreePoolWithTag(v7, 0);
    return 3221225485LL;
  }
  v8 = *v7;
  v9 = v7;
  while ( v8 )
  {
    if ( v8 == 34 || v8 == 47 || v8 == 58 || v8 == 60 || v8 == 62 || v8 == 63 || v8 == 92 || v8 == 124 )
      *v9 = 95;
    v8 = *++v9;
  }
  v10 = *(_QWORD *)(a1 + 1360);
  v11 = L"%SystemRoot%\\system32\\Logfiles\\WMI\\RtBackup\\";
  if ( *(_QWORD *)(v10 + 4384) )
    v11 = *(const WCHAR **)(v10 + 4384);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 368), v11) )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    LOBYTE(v13) = 1;
    updated = EtwpExpandFileName(v13, a1 + 368, 0LL, &DestinationString, *(_QWORD *)(a1 + 1360) == EtwpHostSiloState);
    if ( updated < 0 )
      goto LABEL_23;
LABEL_30:
    updated = EtwpDelayCreate(v1, 1, 1, 0LL);
    if ( updated >= 0 )
    {
      *(_QWORD *)(a1 + 392) = 72LL;
      *(_QWORD *)(a1 + 384) = 72LL;
      *(_QWORD *)(a1 + 400) = 72LL;
      if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
      {
        updated = EtwpRealtimeRestoreState(a1);
        if ( updated < 0 )
          goto LABEL_36;
        if ( *(_DWORD *)(a1 + 424) )
          updated = EtwpRealtimeUpdateReferenceTime(a1, (__int128 *)(a1 + 304));
        if ( updated < 0 )
        {
LABEL_36:
          EtwpRealtimeZeroTruncateLogfile(a1);
          EtwpRealtimeResetReferenceTime(a1);
          *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
          *(_DWORD *)(a1 + 448) = 3;
          *(_DWORD *)(a1 + 424) = 0;
          *(_QWORD *)(a1 + 408) = 0LL;
          EtwpSendSessionNotification(a1, 4LL, 3221225730LL);
          updated = 0;
        }
      }
    }
    goto LABEL_23;
  }
  updated = -1073741801;
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)updated;
}
