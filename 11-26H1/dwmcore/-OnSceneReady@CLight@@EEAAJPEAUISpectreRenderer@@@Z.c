/*
 * XREFs of ?OnSceneReady@CLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180264AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLight::OnSceneReady(CLight *this, struct ISpectreRenderer *a2)
{
  __int64 (__fastcall *v4)(struct ISpectreRenderer *, _QWORD, char *); // rsi
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, char *))(*(_QWORD *)a2 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 11) + 224LL))((char *)this - 88);
  v6 = v4(a2, v5, (char *)this + 16);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x167u, 0LL);
  return v7;
}
