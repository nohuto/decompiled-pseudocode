/*
 * XREFs of ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7E0
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005E4C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  _QWORD *v1; // rbx
  char v2; // di
  _QWORD *v3; // rsi

  v1 = (_QWORD *)*((_QWORD *)this + 20);
  v2 = 0;
  v3 = &v1[*((_QWORD *)this + 21)];
  while ( v1 != v3 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 3
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 216LL))(*v1) == 1 )
    {
      return 1;
    }
    ++v1;
  }
  return v2;
}
