/*
 * XREFs of WbGetWowTrapFrame @ 0x14088677C
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 * Callees:
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbGetWowTrapFrame(_DWORD *a1, __int64 a2)
{
  __int16 ProcessMachine; // si
  int v5; // ecx
  __int64 v6; // r8
  int ContextThread; // edx

  ProcessMachine = PsWow64GetProcessMachine(KeGetCurrentThread()->ApcState.Process);
  if ( ProcessMachine == 332 )
  {
    v5 = 65537;
    v6 = 716LL;
  }
  else
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
    v5 = 2097153;
    v6 = 416LL;
  }
  a1[12] = v5;
  ContextThread = PspWow64GetContextThread(KeGetCurrentThread(), a1 + 12, v6, 0LL);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      *(_QWORD *)(a2 + 8) = (unsigned int)a1[58];
      *(_QWORD *)a2 = (unsigned int)a1[61];
      *(_DWORD *)(a2 + 16) = a1[60];
    }
    else
    {
      *(_QWORD *)(a2 + 8) = (unsigned int)a1[28];
      *(_QWORD *)a2 = (unsigned int)a1[26];
      *(_DWORD *)(a2 + 16) = a1[29];
    }
  }
  return (unsigned int)ContextThread;
}
