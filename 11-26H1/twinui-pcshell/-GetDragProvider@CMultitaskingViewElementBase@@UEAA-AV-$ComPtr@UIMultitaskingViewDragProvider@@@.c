/*
 * XREFs of ?GetDragProvider@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewDragProvider@@@WRL@Microsoft@@XZ @ 0x1804C2100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetDragProvider(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 424LL))(v2);
  }
  else
  {
    *a2 = (__int64)CMultitaskingViewElementBase::s_nullDragProvider;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  }
  return a2;
}
