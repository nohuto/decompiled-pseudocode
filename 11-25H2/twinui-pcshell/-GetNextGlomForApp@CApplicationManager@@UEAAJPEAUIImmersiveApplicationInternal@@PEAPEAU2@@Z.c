/*
 * XREFs of ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x1802E8400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::GetNextGlomForApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned int v8; // edi
  __int64 *v9; // rbx

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 50);
  v5 = 0LL;
  v8 = -2147023728;
  while ( v5 < v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD))(*(_QWORD *)a2 + 168LL))(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v5)) )
    {
      v9 = (__int64 *)(*((_QWORD *)this + 49) + 8 * v5);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      v8 = 0;
      *a3 = (struct IImmersiveApplicationInternal *)*v9;
      return v8;
    }
    ++v5;
  }
  return v8;
}
