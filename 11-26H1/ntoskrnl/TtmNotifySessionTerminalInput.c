/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x140B6C74C
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1407F1BE4 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionTerminalInput(int a1, int a2, char a3)
{
  int v5; // eax
  _DWORD *i; // rdx
  _QWORD *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = TtmpAcquireSessionById((void **)&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = (_DWORD *)v7[5]; i != (_DWORD *)(v7 + 5); i = *(_DWORD **)i )
    {
      if ( i[7] == a2 )
      {
        TtmiResetTerminalTimeouts((int)v7, (__int64)i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 4174, v5, -1);
  }
}
