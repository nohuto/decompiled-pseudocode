/*
 * XREFs of ?ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ @ 0x1802A6D70
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::ResetBuffers(CLegacyStereoSwapChain *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  int v8; // eax

  v1 = (__int64 *)((char *)this + 512);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 64);
  v3 = CLegacySwapChain::ResetBuffers(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB158, 2u, v3, 0xD4u, 0LL);
  }
  else
  {
    v5 = *((_QWORD *)this + 37);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 208LL))(v5, 1LL);
      v6 = *((_QWORD *)this + 37);
      v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 136LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      v8 = v7(v6, 1LL, v1);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB158, 2u, v8, 0xDDu, 0LL);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v1 + 208LL))(*v1, 2LL);
    }
  }
  return v4;
}
