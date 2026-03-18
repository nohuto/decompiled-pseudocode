/*
 * XREFs of ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1401F4E24
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1401583D8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall DrvCheckGraphicsDeviceForSmoothRotation(struct tagGRAPHICS_DEVICE *a1)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rsi
  int v5; // r8d
  __int16 v6; // dx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 i; // rbx
  __int16 v11; // dx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v13 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v6 = *(_DWORD *)(v4 + 1216) ? -1 : *(_WORD *)(W32GetUserSessionState(v3, v2, v5) + 68744);
  if ( !(unsigned int)GetPrimaryAttachFlags(a1, v6, &v14, &v13) || !v13 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 1184); i; i = *(_QWORD *)(i + 128) )
  {
    if ( a1 != (struct tagGRAPHICS_DEVICE *)i )
    {
      v11 = *(_DWORD *)(v4 + 1216) ? -1 : *(_WORD *)(W32GetUserSessionState(v8, v7, v9) + 68744);
      if ( (unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v11, &v14, &v13) && v13 )
        return 0LL;
    }
  }
  return 1LL;
}
