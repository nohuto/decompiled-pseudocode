/*
 * XREFs of AlpcpLogUnwait @ 0x14077A678
 * Callers:
 *     AlpcpSignalAndWait @ 0x140264830 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x140466280 (AlpcpWaitForSingleObject.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140A87DC4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B485BC (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  DWORD2(v4) = a1;
  LODWORD(v4) = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks(&v3, 32LL);
}
