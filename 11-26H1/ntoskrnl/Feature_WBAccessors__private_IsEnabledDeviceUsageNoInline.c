/*
 * XREFs of Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x140500988
 * Callers:
 *     sub_14052A0B0 @ 0x14052A0B0 (sub_14052A0B0.c)
 *     sub_14052EE64 @ 0x14052EE64 (sub_14052EE64.c)
 *     sub_1407764BC @ 0x1407764BC (sub_1407764BC.c)
 *     sub_14088046C @ 0x14088046C (sub_14088046C.c)
 *     sub_140880550 @ 0x140880550 (sub_140880550.c)
 *     sub_1409ECA74 @ 0x1409ECA74 (sub_1409ECA74.c)
 *     sub_1409ECE3C @ 0x1409ECE3C (sub_1409ECE3C.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409EF9C0 @ 0x1409EF9C0 (sub_1409EF9C0.c)
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 *     sub_140B6C624 @ 0x140B6C624 (sub_140B6C624.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledFallback @ 0x140532EB8 (Feature_WBAccessors__private_IsEnabledFallback.c)
 */

__int64 Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WBAccessors__private_featureState & 0x10) != 0 )
    return Feature_WBAccessors__private_featureState & 1;
  else
    return Feature_WBAccessors__private_IsEnabledFallback((unsigned int)Feature_WBAccessors__private_featureState, 3LL);
}
