/*
 * XREFs of HvcallInitInputControl @ 0x1404866D0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140794608 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140794834 (HvlpLpCpuid.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140794978 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
