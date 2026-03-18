/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801847C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::SetSyncRefreshCountWaitTarget(
        CLegacyRenderTarget *this,
        unsigned int a2,
        void **a3)
{
  __int64 *v5; // rcx
  void **v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  void *v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-18h]

  v5 = (__int64 *)*((_QWORD *)this + 4);
  if ( !v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x359u, 0LL);
    return 2291662854LL;
  }
  v7 = (void **)((char *)this + 32256);
  v8 = *((_QWORD *)this + 4032);
  if ( !v8 || v8 == -1 )
  {
    v9 = *v5;
    v14 = 0LL;
    v15 = 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *, void **))(v9 + 72))(v5, &v14);
    if ( v15 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 4032,
        v14);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x350u, 0LL);
      return (unsigned int)v10;
    }
    v7 = (void **)((char *)this + 32256);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4), a2);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x353u, 0LL);
  else
    *a3 = *v7;
  return v12;
}
