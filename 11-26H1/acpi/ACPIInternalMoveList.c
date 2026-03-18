/*
 * XREFs of ACPIInternalMoveList @ 0x140039EE8
 * Callers:
 *     ACPIInitRemoveDeviceExtension @ 0x14001C148 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     ACPITableLoadCallBack @ 0x1400510E0 (ACPITableLoadCallBack.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInternalMoveList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v3 = *(_QWORD **)(a2 + 8);
    result = (_QWORD *)a1[1];
    *result = a2;
    *(_QWORD *)(a2 + 8) = result;
    v2[1] = v3;
    *v3 = v2;
    a1[1] = a1;
    *a1 = a1;
  }
  return result;
}
