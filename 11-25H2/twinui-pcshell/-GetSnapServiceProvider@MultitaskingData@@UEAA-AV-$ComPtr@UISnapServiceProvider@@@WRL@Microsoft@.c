/*
 * XREFs of ?GetSnapServiceProvider@MultitaskingData@@UEAA?AV?$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@XZ @ 0x18049B450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetSnapServiceProvider(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
