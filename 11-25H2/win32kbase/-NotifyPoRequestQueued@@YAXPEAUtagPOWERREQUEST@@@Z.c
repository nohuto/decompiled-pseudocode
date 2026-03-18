/*
 * XREFs of ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400EA2DC
 * Callers:
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall NotifyPoRequestQueued(struct tagPOWERREQUEST *a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]

  InputBuffer[1] = 0;
  v3 = *((_QWORD *)a1 + 10);
  InputBuffer[0] = 95;
  if ( v3 )
    v5 = *(_DWORD *)(v3 + 16);
  else
    v5 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 3032) + 17;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0) >= 0 )
    *((_DWORD *)a1 + 22) = v5;
}
