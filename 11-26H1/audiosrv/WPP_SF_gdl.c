/*
 * XREFs of WPP_SF_gdl @ 0x180122B68
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180121240 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gdl(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, 37LL, &v5);
}
