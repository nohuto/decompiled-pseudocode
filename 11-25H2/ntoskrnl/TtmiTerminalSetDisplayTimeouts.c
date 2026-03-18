/*
 * XREFs of TtmiTerminalSetDisplayTimeouts @ 0x1407605E4
 * Callers:
 *     TtmpTerminal0PowerSettingCallback @ 0x14075B630 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14075C150 (TtmpDispatchSetDisplayTimeouts.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 *     TtmiLogTerminalDisplayTimeouts @ 0x14075F144 (TtmiLogTerminalDisplayTimeouts.c)
 */

void __fastcall TtmiTerminalSetDisplayTimeouts(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rax

  v5 = 10000000LL * (unsigned int)a4;
  v7 = 10000000LL * (unsigned int)a3;
  *(_QWORD *)(a2 + 72) = v5;
  *(_QWORD *)(a2 + 64) = v7;
  v8 = v7;
  if ( v7 && v5 && v7 >= v5 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    v8 = 0LL;
  }
  TtmiLogTerminalDisplayTimeouts(*a1, *(unsigned int *)(a2 + 28), a3, a4, v8, 10000000LL * (unsigned int)a4);
  *(_DWORD *)(a2 + 36) |= 4u;
  TtmiScheduleSessionWorker((__int64)a1, 2);
}
