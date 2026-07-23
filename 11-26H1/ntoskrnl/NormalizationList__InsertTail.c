/*
 * XREFs of NormalizationList__InsertTail @ 0x1406293EC
 * Callers:
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall NormalizationList__InsertTail(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)SshpBlockerCollections.Padding[1];
  if ( *(struct _KTHREAD **)SshpBlockerCollections.Padding[1] != (struct _KTHREAD *)SshpBlockerCollections.Padding )
    __fastfail(3u);
  *a1 = SshpBlockerCollections.Padding;
  a1[1] = result;
  *result = (unsigned __int64)a1;
  SshpBlockerCollections.Padding[1] = (unsigned __int64)a1;
  return result;
}
