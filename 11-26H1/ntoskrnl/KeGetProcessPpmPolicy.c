/*
 * XREFs of KeGetProcessPpmPolicy @ 0x140467410
 * Callers:
 *     PspSetProcessBamPpmPolicy @ 0x1407F64F0 (PspSetProcessBamPpmPolicy.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessPpmPolicy(__int64 a1)
{
  return (*(_DWORD *)(a1 + 136) >> 7) & 0xF;
}
