/*
 * XREFs of PsIsThreadAttachedToSpecificSilo @ 0x14042D770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsIsThreadAttachedToSpecificSilo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 1688);
  if ( v2 == -3 )
    return 0;
  if ( a2 )
    *a2 = v2;
  return 1;
}
