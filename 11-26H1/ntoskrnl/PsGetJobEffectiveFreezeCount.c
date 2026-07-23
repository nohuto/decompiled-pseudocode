/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x140535700
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1064);
}
