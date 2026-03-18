/*
 * XREFs of ?PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z @ 0x1401C27FC
 * Callers:
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x14019A604 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall PoolLeakCaptureLiveDump(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned int CurrentWin32kSessionId; // eax
  unsigned int *v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp-10h]
  int v8; // [rsp+5Ch] [rbp-Ch]

  v8 = 0;
  v3 = 8;
  v6 = a2;
  if ( a3 <= 8 )
    v3 = a3;
  v7 = 4 * v3;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  DbgkWerCaptureLiveKernelDump(
    L"win32k.sys",
    171LL,
    CurrentWin32kSessionId,
    0LL,
    0LL,
    a1,
    &v6,
    PoolLeakLiveDumpCallback,
    0);
}
