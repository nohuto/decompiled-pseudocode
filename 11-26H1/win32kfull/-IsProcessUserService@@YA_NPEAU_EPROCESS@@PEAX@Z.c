/*
 * XREFs of ?IsProcessUserService@@YA_NPEAU_EPROCESS@@PEAX@Z @ 0x140153B18
 * Callers:
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsProcessUserService(struct _EPROCESS *a1, void *a2)
{
  bool v2; // bl
  PACCESS_TOKEN v4; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
  }
  else
  {
    v4 = PsReferencePrimaryToken(a1);
    if ( !v4 )
      return v2;
  }
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, L"WIN://SCMUserService");
  v2 = (unsigned __int8)SeSecurityAttributePresent(v4, &DestinationString) != 0;
  if ( !a2 )
    ObfDereferenceObject(v4);
  return v2;
}
