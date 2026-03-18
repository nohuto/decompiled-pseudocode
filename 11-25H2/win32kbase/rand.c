/*
 * XREFs of rand @ 0x1401A3574
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1400BF7F4 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_14029F210 = 214013 * dword_14029F210 + 2531011;
  return (dword_14029F210 >> 16) & 0x7FFF;
}
