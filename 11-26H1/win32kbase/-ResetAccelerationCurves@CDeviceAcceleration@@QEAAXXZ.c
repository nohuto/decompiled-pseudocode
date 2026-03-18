/*
 * XREFs of ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x14008E404
 * Callers:
 *     ResetAccelerationCurves @ 0x14008E3D0 (ResetAccelerationCurves.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD **v7; // r14
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r15
  int v12; // edx
  int v13; // r8d
  _QWORD **v14; // rbx
  _QWORD *i; // rdi
  _QWORD **v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rsi
  _QWORD *j; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 UserSessionState; // [rsp+70h] [rbp+18h]

  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  v7 = *(_QWORD ***)(W32GetUserSessionState(v5, v4, v6) + 18680);
  v11 = W32GetUserSessionState(v9, v8, v10);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v11 + 18688));
  v14 = (_QWORD **)*v7;
  for ( i = (_QWORD *)**v7; ; i = (_QWORD *)*i )
  {
    v16 = 0LL;
    if ( v14 != v7 )
      v16 = v14 + 2;
    if ( !v16 )
      break;
    v17 = W32GetUserSessionState((_DWORD)v16, v12, v13);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v17 + 18688));
    v18 = 1456LL;
    if ( v14 != v7 )
      v18 = (__int64)(v14 + 184);
    for ( j = *(_QWORD **)v18; ; j = (_QWORD *)*j )
    {
      v20 = 0LL;
      if ( j != (_QWORD *)v18 )
        v20 = j + 2;
      if ( !v20 )
        break;
      if ( !CInputConfig::LockExclusivelyHeld() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 139LL);
      v21 = 200LL;
      v22 = 20LL;
      if ( j != (_QWORD *)v18 )
      {
        v21 = (__int64)(j + 27);
        v22 = (__int64)j + 36;
      }
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, __int64))this)(this, *(unsigned __int16 *)v22, v21);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v17 + 18688));
    v14 = (_QWORD **)i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v11 + 18688));
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
}
