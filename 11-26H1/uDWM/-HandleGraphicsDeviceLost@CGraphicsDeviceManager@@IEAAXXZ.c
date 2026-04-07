/*
 * XREFs of ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180054480
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180053FCC (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGraphicsDeviceManager::HandleGraphicsDeviceLost(CGraphicsDeviceManager *this)
{
  char *v1; // rsi
  char *i; // rdi
  void (__fastcall ***v4)(_QWORD); // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9

  v1 = (char *)this + 96;
  *((_BYTE *)this + 120) = 1;
  for ( i = (char *)*((_QWORD *)this + 12); i != v1; i = *(char **)i )
  {
    v4 = (void (__fastcall ***)(_QWORD))((unsigned __int64)(i - 8) & -(__int64)(i != 0LL));
    (**v4)(v4);
  }
  *((_BYTE *)this + 120) = 0;
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(this, v5, v6, v7);
}
