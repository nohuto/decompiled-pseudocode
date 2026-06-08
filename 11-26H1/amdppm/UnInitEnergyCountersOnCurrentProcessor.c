/*
 * XREFs of UnInitEnergyCountersOnCurrentProcessor @ 0x1400233B0
 * Callers:
 *     <none>
 * Callees:
 *     GetDevExtFromIndex @ 0x1400016A0 (GetDevExtFromIndex.c)
 */

__int64 UnInitEnergyCountersOnCurrentProcessor()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = *(_QWORD *)(GetDevExtFromIndex(KeGetPcr()->Prcb.Number) + 368);
  result = 0LL;
  *(_QWORD *)(v0 + 16) = 0LL;
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_QWORD *)(v0 + 24) = 0LL;
  *(_DWORD *)v0 = 0;
  *(_QWORD *)(v0 + 112) = 0LL;
  *(_QWORD *)(v0 + 128) = 0LL;
  *(_QWORD *)(v0 + 120) = 0LL;
  return result;
}
