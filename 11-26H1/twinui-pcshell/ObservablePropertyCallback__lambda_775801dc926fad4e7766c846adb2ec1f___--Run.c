/*
 * XREFs of ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x1804C0150
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CWeakReference@VCSwitchItemElement@@@WeakReference@@QEAA?AV?$ComPtr@VCSwitchItemElement@@@WRL@Microsoft@@XZ @ 0x1804BFCE8 (-Get@-$CWeakReference@VCSwitchItemElement@@@WeakReference@@QEAA-AV-$ComPtr@VCSwitchItemElement@@.c)
 *     ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x1804C0EB0 (-_RenderLabel@CSwitchItemElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run(__int64 a1)
{
  CSwitchItemElement *v1; // rbx
  CSwitchItemElement *v2; // [rsp+30h] [rbp+8h] BYREF

  WeakReference::CWeakReference<CSwitchItemElement>::Get(*(_QWORD *)(a1 + 16), &v2);
  v1 = v2;
  if ( v2 )
    CSwitchItemElement::_RenderLabel(v2);
  if ( v1 )
    (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v1 + 16LL))(v1);
}
