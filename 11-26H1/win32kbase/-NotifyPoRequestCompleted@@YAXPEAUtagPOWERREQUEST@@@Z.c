/*
 * XREFs of ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401123CC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401D53E0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall NotifyPoRequestCompleted(struct tagPOWERREQUEST *a1)
{
  int v1; // eax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  v1 = *((_DWORD *)a1 + 22);
  if ( v1 != 32 )
  {
    InputBuffer = 96LL;
    v4 = v1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    *((_DWORD *)a1 + 22) = 32;
  }
}
