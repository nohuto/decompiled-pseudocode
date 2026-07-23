/*
 * XREFs of AlpcpLogWaitForReply @ 0x14077D0E0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B4A34C (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogWaitForReply(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  LODWORD(v5) = 3;
  v4 = v1;
  DWORD2(v5) = v2;
  return AlpcpInvokeLogCallbacks(&v4, 32LL);
}
