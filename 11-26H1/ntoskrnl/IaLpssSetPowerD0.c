/*
 * XREFs of IaLpssSetPowerD0 @ 0x140721950
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1407216F8 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x140721874 (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x140721918 (IaLpssReadResetRegister.c)
 *     IaLpssWriteClockParams @ 0x140721A98 (IaLpssWriteClockParams.c)
 *     IaLpssWriteResetRegister @ 0x140721B34 (IaLpssWriteResetRegister.c)
 *     Uart16550InitializePortCommon @ 0x140721C54 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall IaLpssSetPowerD0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int ClockParams; // eax
  int v7; // r9d
  int v8; // r8d
  int v9; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v3 = IaLpssPciSetPower(0);
    if ( !v3 )
    {
      if ( (IaLpssReadResetRegister((_QWORD *)a1, v2) & 7) != 0 )
      {
        return 2;
      }
      else
      {
        v4 = LODWORD(WheapPfaLock.Padding[2]);
        if ( LODWORD(WheapPfaLock.Padding[2]) )
        {
          LODWORD(v4) = LODWORD(WheapPfaLock.Padding[2]) | 0x80000000;
          IaLpssWriteClockParams(a1, v4);
          ClockParams = IaLpssReadClockParams((_QWORD *)a1, v5);
          IaLpssWriteClockParams(a1, ClockParams & 0x7FFFFFFF);
        }
        LOBYTE(v4) = 7;
        IaLpssWriteResetRegister(a1, v4);
        LOBYTE(v7) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v8) = 1;
        return (unsigned __int8)Uart16550InitializePortCommon(v9, a1, v8, v7, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v3;
}
