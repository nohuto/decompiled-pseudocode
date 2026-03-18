/*
 * XREFs of KeGetProcessPpmPolicy @ 0x14046DC90
 * Callers:
 *     PspSetProcessBamPpmPolicy @ 0x1407F0990 (PspSetProcessBamPpmPolicy.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessPpmPolicy(__int64 a1)
{
  return (*(_DWORD *)(a1 + 136) >> 7) & 0xF;
}
