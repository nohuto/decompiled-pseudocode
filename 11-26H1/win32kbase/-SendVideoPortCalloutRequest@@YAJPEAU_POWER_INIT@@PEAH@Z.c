/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x140166A38
 * Callers:
 *     VideoPortCallout @ 0x140091F00 (VideoPortCallout.c)
 * Callees:
 *     CSTPush @ 0x140166B10 (CSTPush.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  _QWORD v8[120]; // [rsp+20h] [rbp-3D8h] BYREF

  if ( (unsigned int)CSTPush(4LL, a1) )
  {
    memset(v8, 0, 0x3B8uLL);
    v8[5] = 0LL;
    v8[0] = 0x303B80390LL;
    LODWORD(v8[6]) = 197636;
    *a2 = 1;
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    return LpcRequestPort(*(_QWORD *)(UserSessionState + 71272), v8);
  }
  else
  {
    *a2 = 0;
    return 3221225495LL;
  }
}
