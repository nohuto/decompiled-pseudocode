/*
 * XREFs of sub_14005D4F0 @ 0x14005D4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005D4F0(__int64 a1)
{
  struct _TP_TIMER *v1; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    return sub_14005D538(a1);
  v1 = *(struct _TP_TIMER **)(a1 + 56);
  pftDueTime = (struct _FILETIME)4000000LL;
  SetThreadpoolTimer(v1, &pftDueTime, 0, 0);
  return 0LL;
}
