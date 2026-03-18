/*
 * XREFs of ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402EE6B0
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1401B5FB8 (GreGetDIBitsInternal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

bool __fastcall CursorApiRouter::GetCursorColorPixels(__int64 a1, const struct tagBITMAP *a2, int a3, unsigned int *a4)
{
  unsigned int bmHeight; // esi
  __int64 bmWidth; // rdi
  unsigned __int64 v7; // rax
  __int64 UserSessionState; // rax
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-88h]
  int v13[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v14; // [rsp+64h] [rbp-54h]
  __int128 v15; // [rsp+6Ch] [rbp-4Ch]
  __int64 v16; // [rsp+7Ch] [rbp-3Ch]

  bmHeight = a2->bmHeight;
  bmWidth = (unsigned int)a2->bmWidth;
  v7 = bmWidth * bmHeight;
  if ( v7 <= 0xFFFFFFFF && (_DWORD)v7 == a3 )
  {
    v13[1] = a2->bmWidth;
    v13[2] = -bmHeight;
    v14 = 2097153LL;
    v15 = 0LL;
    v16 = 0LL;
    UserSessionState = W32GetUserSessionState(0xFFFFFFFFLL, a2);
    return (unsigned int)GreGetDIBitsInternal(
                           *(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 56LL),
                           a1,
                           v10,
                           bmHeight,
                           (__int64)a4,
                           (unsigned int *)v13,
                           v12,
                           bmHeight * (((32 * (int)bmWidth) >> 3) & 0xFFFFFFFC),
                           0x28u) != 0;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1287);
    return 0;
  }
}
