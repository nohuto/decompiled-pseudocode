/*
 * XREFs of KeInitializeSystemSubNodeEnumerationContext @ 0x1403EDE78
 * Callers:
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405EAA58 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405EE394 (KiGetNextClockOwner.c)
 *     PoAllProcessorsDeepIdle @ 0x1406013E0 (PoAllProcessorsDeepIdle.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CC99F0 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x1403EE250 (KeEnumerateNextNodeInSystem.c)
 */

__int64 __fastcall KeInitializeSystemSubNodeEnumerationContext(_QWORD *a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = 0LL;
  *(_WORD *)a1 = a2;
  v4 = 0LL;
  KeEnumerateNextNodeInSystem(a1, &v4);
  result = v4;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)(v3 + 16) = 0LL;
  return result;
}
