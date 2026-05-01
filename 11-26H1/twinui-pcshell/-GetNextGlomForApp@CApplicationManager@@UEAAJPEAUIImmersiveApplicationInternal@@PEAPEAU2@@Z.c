/*
 * XREFs of ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x1802E21F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::GetNextGlomForApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  unsigned __int64 v4; // rbp
  unsigned int v7; // edi
  unsigned __int64 i; // rbx
  __int64 *v9; // rbx

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 50);
  v7 = -2147023728;
  for ( i = 0LL; i < v4; ++i )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD))(*(_QWORD *)a2 + 168LL))(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 49) + 8 * i)) )
    {
      v9 = (__int64 *)(*((_QWORD *)this + 49) + 8 * i);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      v7 = 0;
      *a3 = (struct IImmersiveApplicationInternal *)*v9;
      return v7;
    }
  }
  return v7;
}
