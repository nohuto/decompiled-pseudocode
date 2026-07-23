/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1407C4BF4
 * Callers:
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B4A34C (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  DWORD2(v4) = a1;
  LODWORD(v4) = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks(&v3, 28LL);
}
