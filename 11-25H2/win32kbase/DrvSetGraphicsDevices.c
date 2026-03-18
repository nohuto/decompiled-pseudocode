/*
 * XREFs of DrvSetGraphicsDevices @ 0x14006A580
 * Callers:
 *     <none>
 * Callees:
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400696EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(size_t *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  StringCchCopyW(*(unsigned __int16 **)(v2 + 2896), *(unsigned int *)(v2 + 2904), a1);
  if ( UserIsConsoleConnection(v4, v3) )
  {
    *(_DWORD *)(v2 + 1180) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 1176) = 0;
    *(_DWORD *)(v2 + 1256) = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1LL);
  v6 = *(_QWORD *)(v2 + 1768);
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1573024));
  return result;
}
