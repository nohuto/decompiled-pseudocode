/*
 * XREFs of KeAbInitialize @ 0x1405F9D90
 * Callers:
 *     KiInitSystem @ 0x140CCFE5C (KiInitSystem.c)
 * Callees:
 *     Feature_ScalableAutoBoost__private_IsEnabledDeviceUsageNoInline @ 0x1405F9D0C (Feature_ScalableAutoBoost__private_IsEnabledDeviceUsageNoInline.c)
 *     KeAbInitializeDpc @ 0x1405F9E20 (KeAbInitializeDpc.c)
 */

__int64 KeAbInitialize()
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v1; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r8

  IsEnabledDeviceUsageNoInline = Feature_ScalableAutoBoost__private_IsEnabledDeviceUsageNoInline();
  v1 = 1024LL;
  KiAbpGlobalState = (IsEnabledDeviceUsageNoInline != 0) | KiAbpGlobalState & 0xFFFFFFFE;
  v2 = &unk_140E16400;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    do
    {
      *v2 = 0LL;
      v3 = v2 + 1;
      v4 = 3LL;
      do
      {
        *v3 = 0LL;
        v3[1] = 0LL;
        v3 += 2;
        --v4;
      }
      while ( v4 );
      v2 += 8;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    do
    {
      *v2 = 0LL;
      v2[1] = 0LL;
      v2[2] = 0LL;
      v2 += 8;
      --v1;
    }
    while ( v1 );
  }
  return KeAbInitializeDpc(KeGetCurrentPrcb(), 0LL);
}
