/*
 * XREFs of TtmiTerminalMonitorControl @ 0x1407F1F88
 * Callers:
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmiLogEnterProximity @ 0x1407EF1F0 (TtmiLogEnterProximity.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
 *     TtmpExitProximity @ 0x1407F2298 (TtmpExitProximity.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiTerminalMonitorControl(__int64 a1, __int64 a2, int a3, int a4)
{
  char v6; // r8
  unsigned int v8; // edi
  int v9; // r9d
  int v10; // eax
  int v12; // eax
  int v13; // ecx

  v6 = 0;
  v8 = 0;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        TtmiLogError("TtmiTerminalMonitorControl", 1496LL, 0xFFFFFFFFLL, 3221225485LL);
        return v8;
      }
      v10 = *(_DWORD *)(a2 + 276);
      if ( v10 == 3 || v10 == 2 )
        return 255;
    }
    else if ( a3 == 22 )
    {
      TtmpExitProximity(a1, a2, 0LL);
      return v8;
    }
    v6 = 1;
LABEL_8:
    TtmiSetPendingOnOffRequest(a1, (_DWORD *)a2, v6, a3, 1129145683);
    return v8;
  }
  if ( a3 != 22 )
    goto LABEL_8;
  v12 = *(_DWORD *)(a2 + 36);
  if ( (v12 & 8) == 0 )
  {
    v13 = ++*(_DWORD *)(a2 + 268);
    *(_DWORD *)(a2 + 36) = v12 | 8;
    *(_QWORD *)(a2 + 256) = -1LL;
    TtmiLogEnterProximity(v13);
    *(_DWORD *)(a2 + 36) |= 4u;
    TtmiScheduleSessionWorker(a1, 2);
  }
  return v8;
}
