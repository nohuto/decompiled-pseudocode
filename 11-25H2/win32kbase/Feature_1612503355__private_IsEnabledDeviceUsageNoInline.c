/*
 * XREFs of Feature_1612503355__private_IsEnabledDeviceUsageNoInline @ 0x1401C61AC
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Feature_1612503355__private_IsEnabledFallback @ 0x1401C61E4 (Feature_1612503355__private_IsEnabledFallback.c)
 */

__int64 Feature_1612503355__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1612503355__private_featureState & 0x10) != 0 )
    return Feature_1612503355__private_featureState & 1;
  else
    return Feature_1612503355__private_IsEnabledFallback((unsigned int)Feature_1612503355__private_featureState, 3LL);
}
