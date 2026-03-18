/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401CB604
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14015DE94 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140118CB0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int16 v5; // dx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int16 v9; // dx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v11 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v5 = *(_DWORD *)(v4 + 1128) ? -1 : *(_WORD *)(W32GetUserSessionState(v3, v2) + 68752);
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v5, &v12, &v11) || !v11 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 1096); i; i = *(_QWORD *)(i + 128) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v9 = *(_DWORD *)(v4 + 1128) ? -1 : *(_WORD *)(W32GetUserSessionState(v7, v6) + 68752);
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v9, &v12, &v11) && v11 )
        return 0LL;
    }
  }
  return 1LL;
}
