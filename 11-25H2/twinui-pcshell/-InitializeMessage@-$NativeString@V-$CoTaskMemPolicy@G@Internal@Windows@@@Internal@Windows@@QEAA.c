/*
 * XREFs of ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180510B08
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180510480 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1805265E4 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 * Callees:
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x180510094 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
        __int64 a1,
        const void *a2,
        ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_255728157cf8e92998065ff06efe801f_>(
           a1,
           a2,
           va);
}
