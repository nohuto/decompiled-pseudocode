/*
 * XREFs of HvcallInitInputControl @ 0x14048CB90
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140791AD8 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140791D04 (HvlpLpCpuid.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
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
