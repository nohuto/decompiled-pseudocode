/*
 * XREFs of sub_140073780 @ 0x140073780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140073780(void *a1, __int64 a2, struct _MDL *a3)
{
  ExFreePoolWithTag(a1, 0);
  if ( a3 )
    IoFreeMdl(a3);
}
