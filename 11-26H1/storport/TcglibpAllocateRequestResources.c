/*
 * XREFs of TcglibpAllocateRequestResources @ 0x140133C68
 * Callers:
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1401320B8 (TcglibTPerReset.c)
 *     TcglibpGetTPerProperties @ 0x140136630 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140136980 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalAllocateIfRecvCommand @ 0x14008C960 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x14008CC34 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalFreeCommand @ 0x14008D1C4 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpAllocateRequestResources(_DWORD *a1, char a2, __int16 a3, int a4, __int64 *a5, __int64 *a6)
{
  int IfSendCommand; // esi

  *a5 = 0LL;
  *a6 = 0LL;
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)a1, a2, a3, a4, a5);
  if ( IfSendCommand < 0
    || (IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)a1, a2, a3, a4, a6), IfSendCommand < 0) )
  {
    if ( *a5 )
    {
      TcglibEalFreeCommand(a1, *a5);
      *a5 = 0LL;
    }
    if ( *a6 )
    {
      TcglibEalFreeCommand(a1, *a6);
      *a6 = 0LL;
    }
  }
  return (unsigned int)IfSendCommand;
}
