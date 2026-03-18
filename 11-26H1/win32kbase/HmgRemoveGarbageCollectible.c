/*
 * XREFs of HmgRemoveGarbageCollectible @ 0x1400358A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 */

__int64 __fastcall HmgRemoveGarbageCollectible(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  return HmgRemoveObjectImpl(a1, a2, 0LL, 1LL, 1, a3, a4);
}
