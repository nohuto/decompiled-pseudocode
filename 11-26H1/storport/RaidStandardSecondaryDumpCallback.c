/*
 * XREFs of RaidStandardSecondaryDumpCallback @ 0x1400C4A20
 * Callers:
 *     <none>
 * Callees:
 *     FillBufferWithDriverTelemetryDump @ 0x1400C4754 (FillBufferWithDriverTelemetryDump.c)
 */

void __fastcall RaidStandardSecondaryDumpCallback(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  char *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !BootDriveExtension || !*(_DWORD *)(*(_QWORD *)(BootDriveExtension + 24) + 4996LL) )
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
    return;
  }
  v5 = *(_QWORD *)&ReasonSpecificData[2].Data1;
  if ( v5 )
  {
    v8 = *(char **)&ReasonSpecificData->Data1;
    if ( *(_QWORD *)&ReasonSpecificData->Data1 != v5 )
      return;
    v9 = *(_DWORD *)ReasonSpecificData->Data4;
    v7 = FillBufferWithDriverTelemetryDump(Reason, v8, &v9);
    goto LABEL_9;
  }
  v9 = 0;
  v6 = FillBufferWithDriverTelemetryDump(Reason, 0LL, &v9);
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 >= 0 )
    {
      *(_DWORD *)ReasonSpecificData[2].Data4 = v9;
      ReasonSpecificData[1] = GUID_DEVICEDUMP_DRIVER_STORAGE_PORT;
    }
  }
}
