/*
 * XREFs of ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402DB8BC
 * Callers:
 *     ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DBAF8 (-GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DC1B0 (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x14007C00C (GreGetDIBitsInternal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

bool __fastcall CursorApiRouter::GetCursorColorPixels(HSURF a1, const struct tagBITMAP *a2, int a3, unsigned int *a4)
{
  unsigned int bmWidth; // edi
  __int64 bmHeight; // rsi
  unsigned __int64 v7; // rax
  __int64 UserSessionState; // rax
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-88h]
  __int64 v13; // [rsp+58h] [rbp-60h] BYREF
  int v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+64h] [rbp-54h]
  __int128 v16; // [rsp+6Ch] [rbp-4Ch]
  __int64 v17; // [rsp+7Ch] [rbp-3Ch]

  bmWidth = a2->bmWidth;
  bmHeight = (unsigned int)a2->bmHeight;
  v7 = bmHeight * bmWidth;
  if ( v7 <= 0xFFFFFFFF && (_DWORD)v7 == a3 )
  {
    HIDWORD(v13) = a2->bmWidth;
    v14 = -(int)bmHeight;
    v15 = 2097153LL;
    v16 = 0LL;
    v17 = 0LL;
    UserSessionState = W32GetUserSessionState(0xFFFFFFFFLL, a2);
    return (unsigned int)GreGetDIBitsInternal(
                           *(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL),
                           a1,
                           v10,
                           (unsigned int)bmHeight,
                           (__int64)a4,
                           &v13,
                           v12,
                           (unsigned int)bmHeight * (((int)(32 * bmWidth) >> 3) & 0xFFFFFFFC),
                           40) != 0;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1257);
    return 0;
  }
}
