/*
 * XREFs of Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178
 * Callers:
 *     sub_14052C5D0 @ 0x14052C5D0 (sub_14052C5D0.c)
 *     sub_140531384 @ 0x140531384 (sub_140531384.c)
 *     sub_140779364 @ 0x140779364 (sub_140779364.c)
 *     sub_14088686C @ 0x14088686C (sub_14088686C.c)
 *     sub_140886950 @ 0x140886950 (sub_140886950.c)
 *     sub_1409E9244 @ 0x1409E9244 (sub_1409E9244.c)
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409EC190 @ 0x1409EC190 (sub_1409EC190.c)
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 *     sub_140B6F720 @ 0x140B6F720 (sub_140B6F720.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledFallback @ 0x140535354 (Feature_WBAccessors__private_IsEnabledFallback.c)
 */

__int64 Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WBAccessors__private_featureState & 0x10) != 0 )
    return Feature_WBAccessors__private_featureState & 1;
  else
    return Feature_WBAccessors__private_IsEnabledFallback((unsigned int)Feature_WBAccessors__private_featureState, 3LL);
}
