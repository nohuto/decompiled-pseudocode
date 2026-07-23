/*
 * XREFs of KeInitializeSystemSubNodeEnumerationContext @ 0x1404529A8
 * Callers:
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405ED3C8 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 *     PoAllProcessorsDeepIdle @ 0x140603E90 (PoAllProcessorsDeepIdle.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
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
