/*
 * XREFs of ?CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z @ 0x1401CACC8
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagQ::CheckTransferState(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = a3;
  v6 = *(_QWORD *)(a3 + *(_QWORD *)(a2 + 464));
  if ( !v6 || *(_QWORD *)(v6 + 16) != a2 )
    return 0LL;
  if ( *(_QWORD *)(a3 + a1) )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    if ( a4 )
    {
      v10 = *(_QWORD *)(v5 + *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928));
      if ( v10 )
      {
        if ( v6 != v10 )
          return 1LL;
      }
    }
  }
  return 2LL;
}
