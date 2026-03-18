/*
 * XREFs of Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14033AE60
 * Callers:
 *     NtGdiEngDeletePalette @ 0x140263E10 (NtGdiEngDeletePalette.c)
 *     NtGdiEngDeleteSurface @ 0x140263EF0 (NtGdiEngDeleteSurface.c)
 * Callees:
 *     Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledFallback @ 0x14033AE98 (Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_EngCreateBitmapMemoryLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_EngCreateBitmapMemoryLeak__private_featureState & 1;
  else
    return Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_EngCreateBitmapMemoryLeak__private_featureState,
             3LL);
}
