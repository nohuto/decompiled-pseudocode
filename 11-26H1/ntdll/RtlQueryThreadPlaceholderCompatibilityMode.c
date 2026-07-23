/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x1800E1C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -2;
}
