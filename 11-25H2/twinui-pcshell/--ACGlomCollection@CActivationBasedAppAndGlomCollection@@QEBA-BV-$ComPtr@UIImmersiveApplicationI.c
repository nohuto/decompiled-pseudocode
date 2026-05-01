/*
 * XREFs of ??ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA?BV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180213BC4
 * Callers:
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x1801396D0 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CActivationBasedAppAndGlomCollection::CGlomCollection::operator[](
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  *a2 = *(_QWORD *)(*a1 + 8 * a3);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
