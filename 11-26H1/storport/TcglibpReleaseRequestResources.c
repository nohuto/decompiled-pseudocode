/*
 * XREFs of TcglibpReleaseRequestResources @ 0x1401342A0
 * Callers:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1401320B8 (TcglibTPerReset.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x140136630 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140136980 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalFreeCommand @ 0x14008D1C4 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpReleaseRequestResources(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a2;
  if ( v5 )
  {
    result = TcglibEalFreeCommand(a1, v5);
    *a2 = 0LL;
  }
  if ( *a3 )
  {
    result = TcglibEalFreeCommand(a1, *a3);
    *a3 = 0LL;
  }
  return result;
}
