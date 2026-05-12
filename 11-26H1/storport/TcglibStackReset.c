/*
 * XREFs of TcglibStackReset @ 0x140131DA0
 * Callers:
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     TcglibEalGetCommandPayload @ 0x14008D290 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibEalReuseCommand @ 0x14008D9CC (TcglibEalReuseCommand.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     TcglibpReleaseRequestResources @ 0x1401342A0 (TcglibpReleaseRequestResources.c)
 */

__int64 __fastcall TcglibStackReset(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v5; // r12d
  int v6; // edx
  int v7; // r8d
  int RequestResources; // ebx
  __int16 v9; // ax
  _WORD *v10; // rbx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rbx
  _WORD *v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v2 = *(int **)a1;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v5 = 4;
  v24 = 0LL;
  TcglibpReleaseRequestResources(v2, a2 + 40, a2 + 48);
  v7 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v7 )
  {
    v7 = *(unsigned __int16 *)(a1 + 28);
    *(_WORD *)(a2 + 24) = v7;
  }
  LOBYTE(v6) = 2;
  RequestResources = TcglibpAllocateRequestResources(*(_QWORD *)a1, v6, v7, 512, (__int64)&v23, (__int64)&v24);
  if ( RequestResources >= 0 )
  {
    TcglibEalGetCommandPayload(v2, v23, &v19, &v22);
    if ( v22 >= 8 )
    {
      LOWORD(v21) = *(_WORD *)(a2 + 24);
      TcglibReverseBytes((char *)&v21, 2u);
      v9 = v21;
      v10 = v19;
      v21 = v11;
      *v19 = v9;
      TcglibReverseBytes((char *)&v21, 4u);
      v12 = v23;
      *((_DWORD *)v10 + 1) = v21;
      RequestResources = TcglibpExecuteCommand(v2, v12, v13, 0LL);
    }
    else
    {
      RequestResources = -1073741789;
    }
  }
  if ( RequestResources >= 0 )
  {
    v14 = v24;
    while ( 1 )
    {
      TcglibEalLogCommand(v2, "ResetStack", 0, 0, 0LL, 0LL);
      RequestResources = TcglibEalExecuteCommandSync((__int64)v2, v14, v15);
      if ( RequestResources < 0 )
        break;
      TcglibEalGetCommandPayload(v2, v14, &v20, &v22);
      if ( v22 < 0x10 )
        goto LABEL_19;
      v16 = v20;
      v21 = *(_DWORD *)(v20 + 4);
      TcglibReverseBytes((char *)&v21, 4u);
      if ( v21 != 2 )
        goto LABEL_19;
      LOWORD(v21) = *(_WORD *)(v16 + 10);
      TcglibReverseBytes((char *)&v21, 2u);
      if ( (_WORD)v21 == 4 )
      {
        v21 = *(_DWORD *)(v16 + 12);
        TcglibReverseBytes((char *)&v21, 4u);
        if ( !v21 )
        {
          RequestResources = 0;
LABEL_18:
          _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
          break;
        }
LABEL_19:
        RequestResources = -1073741435;
        break;
      }
      if ( (_WORD)v21 )
        goto LABEL_19;
      RequestResources = 259;
      TcglibEalReuseCommand(v2, v14);
      if ( !v5-- )
        goto LABEL_18;
    }
  }
  TcglibpReleaseRequestResources(v2, &v23, &v24);
  return (unsigned int)RequestResources;
}
