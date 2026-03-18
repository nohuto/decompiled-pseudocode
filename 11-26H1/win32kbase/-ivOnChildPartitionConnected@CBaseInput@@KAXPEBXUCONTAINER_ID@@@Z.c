/*
 * XREFs of ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x14021F510
 * Callers:
 *     <none>
 * Callees:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021F408 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivOnChildPartitionConnected(int a1, unsigned int a2, int a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 48LL * a1 + 3136);
  if ( v4 )
    CBaseInput::ivInitialSendPnpForChildPartition(v4, a2);
}
