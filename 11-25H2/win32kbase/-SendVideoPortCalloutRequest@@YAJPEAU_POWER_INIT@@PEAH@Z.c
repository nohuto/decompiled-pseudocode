/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x14012AF58
 * Callers:
 *     VideoPortCallout @ 0x1401241D0 (VideoPortCallout.c)
 * Callees:
 *     CSTPush @ 0x14012B030 (CSTPush.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  _QWORD v7[120]; // [rsp+20h] [rbp-3D8h] BYREF

  if ( (unsigned int)CSTPush(4LL, a1) )
  {
    memset(v7, 0, 0x3B8uLL);
    v7[5] = 0LL;
    v7[0] = 0x303B80390LL;
    LODWORD(v7[6]) = 197636;
    *a2 = 1;
    UserSessionState = W32GetUserSessionState(v4, v3);
    return LpcRequestPort(*(_QWORD *)(UserSessionState + 71288), v7);
  }
  else
  {
    *a2 = 0;
    return 3221225495LL;
  }
}
