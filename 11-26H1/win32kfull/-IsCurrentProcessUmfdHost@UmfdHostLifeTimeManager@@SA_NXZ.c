/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
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

  v3 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24240LL);
  GreAcquirePushLockShared(v3);
  v7 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
  v9 = *(_QWORD *)(v7 + 24176) == PsGetCurrentProcess(v8);
  if ( v3 )
    GreReleasePushLockShared(v3);
  return v9;
}
