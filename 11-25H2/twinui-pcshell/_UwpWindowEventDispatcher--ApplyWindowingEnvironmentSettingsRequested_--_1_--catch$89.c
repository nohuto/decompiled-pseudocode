/*
 * XREFs of _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$89 @ 0x1806ABF87
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_89(
        wil *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD); // rbx
  unsigned int v5; // eax

  v3 = *(_QWORD *)(a2 + 304);
  v4 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL);
  v5 = wil::ResultFromCaughtException(a1);
  v4(v3, v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 152) + 56LL))(*(_QWORD *)(a2 + 152), 0LL);
  return 0LL;
}
