/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x1407D581C (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407E21BC (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdClose @ 0x1409A1050 (PopBcdClose.c)
 *     BcdSetElementData @ 0x1409A4084 (BcdSetElementData.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     PopBcdOpen @ 0x140B5530C (PopBcdOpen.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  NTSTATUS SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  NTSTATUS v6; // eax
  GUID Identifier; // [rsp+20h] [rbp-10h] BYREF
  HANDLE BcdObjectHandle; // [rsp+50h] [rbp+20h] BYREF
  HANDLE BcdStoreHandle; // [rsp+58h] [rbp+28h] BYREF
  __int64 Buffer; // [rsp+60h] [rbp+30h] BYREF

  v2 = -1LL;
  Buffer = 0LL;
  v3 = -1LL;
  BcdStoreHandle = (HANDLE)-1LL;
  Identifier = 0LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( ExpPlatformBinaryLock.WaitBlockFill4[8] )
  {
    v5 = PopBcdOpen(&BcdStoreHandle);
    v2 = (__int64)BcdStoreHandle;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(
                                               BcdStoreHandle,
                                               &Identifier);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject((HANDLE)v2, &Identifier, &BcdObjectHandle);
        v3 = (__int64)BcdObjectHandle;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          Buffer = *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[16];
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(BcdObjectHandle, 0x2500015Au, &Buffer, 8u);
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (Buffer & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(Buffer & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject((HANDLE)v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}
