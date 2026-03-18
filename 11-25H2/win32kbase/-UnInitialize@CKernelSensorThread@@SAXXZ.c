/*
 * XREFs of ?UnInitialize@CKernelSensorThread@@SAXXZ @ 0x1401A1C78
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CKernelSensorThread::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3104) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(W32GetUserSessionState(v3, v2) + 3104);
    if ( v5 )
      (**v5)(v5, 1LL);
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 3104) = 0LL;
  }
}
