/*
 * XREFs of ?PairedUnBind@CompositionSurfaceObject@@UEAAJ_N@Z @ 0x140064EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedUnBind(CompositionSurfaceObject *this, char a2)
{
  __int64 v4; // rdx
  int v5; // edi
  int SessionTokenManager; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v5 >= 0 )
  {
    LOBYTE(v4) = a2;
    v5 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    if ( v5 >= 0 && !a2 )
    {
      v9 = 0LL;
      SessionTokenManager = DxgkGetSessionTokenManager(&v9);
      v7 = v9;
      v5 = SessionTokenManager;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 88LL))(v9, (char *)this - 32);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return (unsigned int)v5;
}
