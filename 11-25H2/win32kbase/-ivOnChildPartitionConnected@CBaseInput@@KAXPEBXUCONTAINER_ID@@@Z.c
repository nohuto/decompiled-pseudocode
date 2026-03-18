/*
 * XREFs of ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x14021ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021AA94 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivOnChildPartitionConnected(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = a2;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 48LL * (int)a1 + 3136);
  if ( v3 )
    CBaseInput::ivInitialSendPnpForChildPartition(v3, v2);
}
