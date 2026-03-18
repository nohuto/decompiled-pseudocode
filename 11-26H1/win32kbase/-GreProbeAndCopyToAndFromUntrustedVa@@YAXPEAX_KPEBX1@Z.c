/*
 * XREFs of ?GreProbeAndCopyToAndFromUntrustedVa@@YAXPEAX_KPEBX1@Z @ 0x1401F3410
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyToUserFromUser @ 0x1402D20B8 (RtlCopyToUserFromUser.c)
 */

void __fastcall GreProbeAndCopyToAndFromUntrustedVa(void *a1, size_t a2, void *a3, size_t a4)
{
  if ( a4 >= a2 )
    a4 = a2;
  RtlCopyToUserFromUser(a1, a3, a4);
}
