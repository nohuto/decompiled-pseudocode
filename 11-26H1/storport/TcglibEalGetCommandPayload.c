/*
 * XREFs of TcglibEalGetCommandPayload @ 0x14008D290
 * Callers:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1401320B8 (TcglibTPerReset.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x140134E98 (TcglibpGetProtocolList.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x140136A88 (TcglibpTransaction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibEalGetCommandPayload(_DWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *a3 = *(_QWORD *)(a2 + 64);
      *a4 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      *a3 = *(_QWORD *)(a2 + 24);
      *a4 = *(_DWORD *)(a2 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
