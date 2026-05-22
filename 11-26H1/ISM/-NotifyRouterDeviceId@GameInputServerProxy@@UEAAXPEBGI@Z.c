/*
 * XREFs of ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x180068120
 * Callers:
 *     <none>
 * Callees:
 *     wcscpy_s @ 0x18009ABD8 (wcscpy_s.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x18010EC80 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputServerProxy::NotifyRouterDeviceId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  rsize_t v9; // rsi
  unsigned __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rbx
  const struct std::nothrow_t *v13; // rdx
  void *v14; // rcx
  GameInputServerProxy **Ptr; // rcx
  PVOID v16; // rcx

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[4] = 0;
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v3 + 1;
  v10 = 2 * (v3 + 1);
  if ( !is_mul_ok(v3 + 1, 2uLL) )
    v10 = -1LL;
  v11 = (wchar_t *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v8 || !v11 )
    __fastfail(7u);
  wcscpy_s(v11, v9, a2);
  v8[4] = a3;
  v14 = (void *)*((_QWORD *)v8 + 3);
  *((_QWORD *)v8 + 3) = v12;
  if ( v14 )
    operator delete(v14, v13);
  AcquireSRWLockExclusive(this + 27);
  Ptr = (GameInputServerProxy **)this[25].Ptr;
  if ( *Ptr != (GameInputServerProxy *)&this[24] )
    __fastfail(3u);
  *((_QWORD *)v8 + 1) = Ptr;
  *(_QWORD *)v8 = this + 24;
  *Ptr = (GameInputServerProxy *)v8;
  ++LODWORD(this[26].Ptr);
  this[25].Ptr = v8;
  ReleaseSRWLockExclusive(this + 27);
  if ( TryAcquireSRWLockShared(this + 4) )
  {
    v16 = this[5].Ptr;
    if ( v16 )
      (*(void (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, a2, a3);
    ReleaseSRWLockShared(this + 4);
  }
}
