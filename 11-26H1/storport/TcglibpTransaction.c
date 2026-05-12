/*
 * XREFs of TcglibpTransaction @ 0x140136A88
 * Callers:
 *     TcglibStartTransaction @ 0x140131F98 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x140132028 (TcglibStopTransaction.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x140134228 (TcglibpReinitRequestResources.c)
 *     InitTcgParser @ 0x140136C14 (InitTcgParser.c)
 *     ParseTcgTransactionStatus @ 0x1401374CC (ParseTcgTransactionStatus.c)
 *     GenTCGHeaders @ 0x140138330 (GenTCGHeaders.c)
 */

__int64 __fastcall TcglibpTransaction(__int64 a1, __int64 a2, char a3, char a4)
{
  int *v4; // rbp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  int CommandPayload; // edi
  __int64 v11; // r11
  __int64 v12; // r10
  bool v13; // cl
  __int64 v14; // r8
  const char *v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(int **)a1;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 48);
  v19 = 0LL;
  v18 = 0;
  CommandPayload = TcglibEalGetCommandPayload(v4, v6, &v19, &v18);
  if ( CommandPayload >= 0 )
  {
    v12 = v19;
    v13 = !a3 && a4 != 0;
    *(_BYTE *)(v19 + 56) = -(a3 != 0) - 4;
    *(_BYTE *)(v12 + 57) = v13;
    CommandPayload = GenTCGHeaders(v12, v18, v11, 2, *(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 4));
    if ( CommandPayload >= 0 )
    {
      CommandPayload = TcglibpExecuteCommand(v4, v6, v14, 0);
      if ( CommandPayload >= 0 )
      {
        v15 = "StartTransaction";
        if ( !a3 )
          v15 = "EndTransaction";
        TcglibEalLogCommand(v4, v15, 0, 0, 0LL, 0LL);
        CommandPayload = TcglibpExecuteCommand(v4, v7, v16, 1);
        if ( CommandPayload >= 0 )
        {
          TcglibEalGetCommandPayload(v4, v7, &v19, &v18);
          if ( !(unsigned int)InitTcgParser(a1, v19, v18) )
            CommandPayload = ParseTcgTransactionStatus(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
  TcglibpReinitRequestResources(v4, v6, v7);
  return (unsigned int)CommandPayload;
}
