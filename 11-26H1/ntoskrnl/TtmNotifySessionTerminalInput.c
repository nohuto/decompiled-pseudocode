/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x140B697BC
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1407EC080 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionTerminalInput(unsigned int a1, int a2, __int64 a3)
{
  char v4; // di
  int v5; // eax
  _DWORD *i; // rdx
  _QWORD *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = a3;
  v5 = TtmpAcquireSessionById((void **)&v7, a1, a3);
  if ( v5 >= 0 )
  {
    for ( i = (_DWORD *)v7[5]; i != (_DWORD *)(v7 + 5); i = *(_DWORD **)i )
    {
      if ( i[7] == a2 )
      {
        TtmiResetTerminalTimeouts((int)v7, (__int64)i, 4, 1950962771, v4);
        break;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 4174, v5, -1);
  }
}
