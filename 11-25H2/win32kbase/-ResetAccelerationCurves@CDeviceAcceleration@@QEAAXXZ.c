/*
 * XREFs of ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x14012B798
 * Callers:
 *     ResetAccelerationCurves @ 0x14012B760 (ResetAccelerationCurves.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F7410 (--0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F7A80 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD **v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD **v10; // rdx
  _QWORD *i; // rdi
  _QWORD **v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  tagDomLock *v15; // rbx
  char *v16; // rcx
  struct CInputSpaceRegion *v17; // rax
  tagDomLock *v18[3]; // [rsp+20h] [rbp-58h] BYREF
  tagDomLock *v19; // [rsp+38h] [rbp-40h] BYREF
  tagDomLock *v20; // [rsp+88h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(this, a2);
  CEResourceLockExclusive::CEResourceLockExclusive(
    (CEResourceLockExclusive *)&v20,
    (struct CEResourceLock *)(UserSessionState + 18640));
  v6 = *(_QWORD ***)(W32GetUserSessionState(v5, v4) + 18632);
  v9 = W32GetUserSessionState(v8, v7);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v19, (struct CEResourceLock *)(v9 + 18640));
  v10 = (_QWORD **)*v6;
  for ( i = (_QWORD *)**v6; ; i = (_QWORD *)*i )
  {
    v12 = 0LL;
    if ( v10 != v6 )
      v12 = v10 + 2;
    if ( !v12 )
      break;
    v13 = 1456LL;
    if ( v10 != v6 )
      v13 = (__int64)(v10 + 184);
    v14 = W32GetUserSessionState(v12, v10);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v18, (struct CEResourceLock *)(v14 + 18640));
    v15 = *(tagDomLock **)v13;
    v18[1] = (tagDomLock *)v13;
    while ( 1 )
    {
      v16 = 0LL;
      v18[2] = v15;
      if ( v15 != (tagDomLock *)v13 )
        v16 = (char *)v15 + 16;
      if ( !v16 )
        break;
      v17 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v18);
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, __int64))this)(
        this,
        *((unsigned __int16 *)v17 + 10),
        (__int64)v17 + 200);
      v15 = *(tagDomLock **)v15;
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v18[0]);
    v10 = (_QWORD **)i;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v19);
  tagDomLock::UnLockExclusive((PERESOURCE *)v20);
}
