/*
 * XREFs of TcglibpOpenSessionWithRetry @ 0x140136870
 * Callers:
 *     TcglibOpenSession @ 0x140131260 (TcglibOpenSession.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 */

__int64 __fastcall TcglibpOpenSessionWithRetry(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // si
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax

  v6 = 0;
  while ( 1 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)a2 = 1;
    *(_WORD *)(a2 + 24) = *(_WORD *)(a1 + 28);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 16) = a3;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)a2 = 2;
    v7 = TcglibpOpenSession((int **)a1, a2);
    v8 = v7;
    if ( v7 >= 0 )
      break;
    v9 = TcglibpCheckError(a1, (volatile __int32 *)a2, v7);
    *(_QWORD *)(a1 + 16) = 0LL;
    v8 = v9;
    if ( v9 == -1073741309 )
      goto LABEL_6;
    if ( v9 == -2147483631 )
    {
      TcglibEalLogError(*(int **)a1, "TcglibpOpenSession-failed with device busy", a3, v6 == 0, 0LL, 0LL);
      TcglibStackReset(a1, a2);
LABEL_6:
      if ( v6 )
        return v8;
      v6 = 1;
    }
    else if ( !v6 )
    {
      return v8;
    }
  }
  _InterlockedIncrement(&OpenSessionCount);
  return v8;
}
