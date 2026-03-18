/*
 * XREFs of ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A88D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRemotingSwapChain::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx

  v2 = (__int64 *)(this + 16);
  v3 = *(_QWORD *)(this + 16);
  v4 = (_QWORD *)(this - 48);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v3 + 80LL))(
      *(_QWORD *)(this + 16),
      this & -(__int64)(this != 48));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, const struct IDeviceResource *))(*v4 + 32LL))(v4, a2);
  (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  v6 = (__int64)(v4[4] - v4[3]) >> 3;
  while ( (_DWORD)v6 )
  {
    LODWORD(v6) = v6 - 1;
    v7 = *(void (__fastcall ****)(_QWORD, __int64))(v4[3] + 8LL * (unsigned int)v6);
    (**v7)(v7, v5);
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
}
