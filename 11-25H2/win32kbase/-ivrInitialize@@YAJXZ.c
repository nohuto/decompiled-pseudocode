/*
 * XREFs of ?ivrInitialize@@YAJXZ @ 0x14021B40C
 * Callers:
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x14021B1F4 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x14021B83C (ivrLoadImage.c)
 */

__int64 ivrInitialize(void)
{
  __int64 Image; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  Image = ivrLoadImage();
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 19432) = Image;
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19432) )
    return 3221226092LL;
  UserSessionState = W32GetUserSessionState(v6, v5);
  ivrInitAllwin32knsDelayLoads(*(_QWORD **)(UserSessionState + 19432));
  return 0LL;
}
