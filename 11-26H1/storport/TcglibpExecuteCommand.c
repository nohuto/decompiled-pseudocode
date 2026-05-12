/*
 * XREFs of TcglibpExecuteCommand @ 0x140133F84
 * Callers:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1401320B8 (TcglibTPerReset.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x140136A88 (TcglibpTransaction.c)
 * Callees:
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalReuseCommand @ 0x14008D9CC (TcglibEalReuseCommand.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 */

__int64 __fastcall TcglibpExecuteCommand(_DWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  int v7; // esi
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  union _LARGE_INTEGER v11; // rbx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = a3;
  v15 = 0;
  v7 = 10000;
  v8 = 1;
  while ( 1 )
  {
    v9 = TcglibEalExecuteCommandSync((__int64)a1, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( !a4 || v9 != -2147483631 )
        return v10;
      goto LABEL_15;
    }
    if ( !a4 )
      return v10;
    Interval.QuadPart = 0LL;
    TcglibEalGetCommandPayload(a1, a2, &Interval, &v15);
    if ( v15 < 0x14 )
      break;
    v11 = Interval;
    v14 = *(_DWORD *)(Interval.QuadPart + 16);
    TcglibReverseBytes((char *)&v14, 4u);
    Interval.LowPart = *(_DWORD *)(v11.QuadPart + 8);
    TcglibReverseBytes((char *)&Interval, 4u);
    if ( v14 )
      return v10;
    if ( !Interval.LowPart )
      break;
    if ( Interval.LowPart > 1 )
      return (unsigned int)-2147483643;
    v10 = -2147483631;
    if ( --v7 )
    {
      TcglibEalReuseCommand(a1, a2);
      Interval.QuadPart = 0LL;
      if ( KeGetCurrentIrql() < 2u )
      {
        Interval.QuadPart = -10000LL * v8;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      else
      {
        KeStallExecutionProcessor(1000 * v8);
      }
      v8 = 5;
    }
    else
    {
LABEL_15:
      if ( !v7 )
        return v10;
    }
  }
  return (unsigned int)-1073741435;
}
