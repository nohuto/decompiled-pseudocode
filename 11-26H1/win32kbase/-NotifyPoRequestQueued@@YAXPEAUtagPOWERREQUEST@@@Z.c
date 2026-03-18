/*
 * XREFs of ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x140111F88
 * Callers:
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall NotifyPoRequestQueued(struct tagPOWERREQUEST *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v3 = *((_QWORD *)a1 + 10);
  InputBuffer = 95LL;
  if ( v3 )
    v6 = *(_DWORD *)(v3 + 16);
  else
    v6 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 3032) + 17;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0) >= 0 )
    *((_DWORD *)a1 + 22) = v6;
}
