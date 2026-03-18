/*
 * XREFs of DrvGetWDDMAdapterInfo @ 0x140148E40
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140148E9C (DrvGetAdapterInfoFromGraphicsDevice.c)
 */

__int64 __fastcall DrvGetWDDMAdapterInfo(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  if ( a1
    && (a2 || (*(_DWORD *)(a1 + 40) & 0x400) == 0)
    && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
    && (v4 = *(_QWORD *)(a1 + 2568)) != 0
    && v4 != -4
    && (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
  {
    return DrvGetAdapterInfoFromGraphicsDevice(v4, a3, a4);
  }
  else
  {
    return 0LL;
  }
}
