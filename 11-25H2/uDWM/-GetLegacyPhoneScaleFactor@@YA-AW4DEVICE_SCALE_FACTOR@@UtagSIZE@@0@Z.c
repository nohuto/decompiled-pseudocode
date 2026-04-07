/*
 * XREFs of ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800EA4E4
 * Callers:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18005316C (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180053274 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180098048 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1800EA408 (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 */

__int64 __fastcall GetLegacyPhoneScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  enum DEVICE_SCALE_FACTOR v4; // esi
  int v5; // eax

  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
    v4 = (unsigned int)CalcBucketedScaleFactor(a1, a2);
  v5 = CalcBucketedScaleFactor(a1, a2);
  ScalingCompatCalculationTelemetry(0, v5, v4);
  return (unsigned int)v4;
}
