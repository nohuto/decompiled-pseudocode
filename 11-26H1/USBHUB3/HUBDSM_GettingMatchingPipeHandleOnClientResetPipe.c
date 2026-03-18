/*
 * XREFs of HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x140022EE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x140018B48 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 */

__int64 __fastcall HUBDSM_GettingMatchingPipeHandleOnClientResetPipe(__int64 a1)
{
  return HUBPDO_FindAndStoreMatchingInternalPipeHandle(*(_QWORD *)(a1 + 960));
}
