/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140146FEC
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     FinishStockFontInit @ 0x140146690 (FinishStockFontInit.c)
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(__int64 a1, __int64 a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool v9; // bl

  v3 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24256LL);
  GreAcquirePushLockShared(v3);
  v7 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
  v9 = *(_QWORD *)(v7 + 24192) == PsGetCurrentProcess(v8);
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v9;
}
