/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$51 @ 0x1806EA2EC
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_51(
        wil *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD); // rbx
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 168);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 80LL);
  v4 = wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, 0LL);
  return 0LL;
}
