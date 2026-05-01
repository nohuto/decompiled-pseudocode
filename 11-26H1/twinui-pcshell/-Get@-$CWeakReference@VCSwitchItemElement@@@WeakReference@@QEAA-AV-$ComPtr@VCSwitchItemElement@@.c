/*
 * XREFs of ?Get@?$CWeakReference@VCSwitchItemElement@@@WeakReference@@QEAA?AV?$ComPtr@VCSwitchItemElement@@@WRL@Microsoft@@XZ @ 0x1804BFCE8
 * Callers:
 *     ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x1804C0150 (ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall WeakReference::CWeakReference<CSwitchItemElement>::Get(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
