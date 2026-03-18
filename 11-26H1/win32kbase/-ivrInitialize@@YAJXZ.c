/*
 * XREFs of ?ivrInitialize@@YAJXZ @ 0x14021F8E0
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1401C6420 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x14021FD7C (ivrLoadImage.c)
 */

__int64 ivrInitialize(void)
{
  __int64 Image; // rbx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax

  Image = ivrLoadImage();
  *(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 19464) = Image;
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19464) )
    return 3221226092LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  ivrInitAllwin32knsDelayLoads(*(_QWORD **)(UserSessionState + 19464));
  return 0LL;
}
