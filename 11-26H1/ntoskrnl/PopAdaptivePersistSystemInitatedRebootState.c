/*
 * XREFs of PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x1407D27B0 (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407DDB8C (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdClose @ 0x1409D0070 (PopBcdClose.c)
 *     BcdSetElementData @ 0x1409D30A4 (BcdSetElementData.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     PopBcdOpen @ 0x140B52A6C (PopBcdOpen.c)
 */

__int64 __fastcall PopAdaptivePersistSystemInitatedRebootState(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int SystemInitiatedRebootTargetBootEntry; // ebx
  int v5; // eax
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v2 = -1LL;
  v11 = 0LL;
  v3 = -1LL;
  v10 = -1LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( ExpPlatformBinaryLock.WaitBlockFill4[8] )
  {
    v5 = PopBcdOpen(&v10);
    v2 = v10;
    SystemInitiatedRebootTargetBootEntry = v5;
    if ( v5 >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(v10, &v8);
      if ( SystemInitiatedRebootTargetBootEntry >= 0 )
      {
        v6 = BcdOpenObject(v2, &v8, &v9);
        v3 = v9;
        SystemInitiatedRebootTargetBootEntry = v6;
        if ( v6 >= 0 )
        {
          v11 = *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[16];
          SystemInitiatedRebootTargetBootEntry = BcdSetElementData(v9, 620757338LL, &v11, 8LL, v8, *((_QWORD *)&v8 + 1));
        }
      }
    }
  }
  else
  {
    SystemInitiatedRebootTargetBootEntry = 279;
  }
  LOBYTE(a2) = (v11 & 8) != 0;
  PopDiagTraceAdaptiveBootOverridePrepared(v11 & 7, a2, (unsigned int)SystemInitiatedRebootTargetBootEntry);
  if ( v3 != -1 )
    BcdCloseObject((HANDLE)v3);
  if ( v2 != -1 )
    PopBcdClose(v2);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}
