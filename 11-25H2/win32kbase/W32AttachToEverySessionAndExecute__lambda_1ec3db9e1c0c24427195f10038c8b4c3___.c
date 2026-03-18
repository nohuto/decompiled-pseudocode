/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x140113720
 * Callers:
 *     McGenControlCallbackV2 @ 0x1401135C0 (McGenControlCallbackV2.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_4c1584255ce3bbd473a704df5986d405_::operator() @ 0x1401B74EC (_lambda_4c1584255ce3bbd473a704df5986d405_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int MaxSessionCount; // r14d

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v4 = lambda_4c1584255ce3bbd473a704df5986d405_::operator()(v3, 0LL, CurrentWin32kSessionId, a1);
  v5 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_4c1584255ce3bbd473a704df5986d405_::operator()(v6, v5++, (unsigned int)CurrentWin32kSessionId, a1);
    while ( v5 < MaxSessionCount );
  }
  return v4;
}
