/*
 * XREFs of DrvSetGraphicsDevices @ 0x14018F7D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400B40C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(char *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  StringCchCopyW(*(char **)(v2 + 2976), *(unsigned int *)(v2 + 2984), a1);
  if ( UserIsConsoleConnection(v4, v3, v5, v6) )
  {
    *(_DWORD *)(v2 + 1268) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 1264) = 0;
    *(_DWORD *)(v2 + 1344) = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1LL, v7, v8, v9);
  v11 = *(_QWORD *)(v2 + 1856);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 1573024));
  return result;
}
