/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x140533280
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408E8048 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1064);
}
