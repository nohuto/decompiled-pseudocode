/*
 * XREFs of PipFreeBindingRequestEntry @ 0x1407A2A0C
 * Callers:
 *     PipFreeDependencyEdge @ 0x1405023B0 (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingRequestEntry(PVOID P)
{
  UNICODE_STRING *v2; // rcx

  if ( *((_DWORD *)P + 4) == 1 )
  {
    v2 = (UNICODE_STRING *)*((_QWORD *)P + 3);
    if ( v2 )
    {
      RtlFreeAnsiString(v2);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x53706E50u);
      *((_QWORD *)P + 3) = 0LL;
    }
  }
  ExFreePoolWithTag(P, 0x53706E50u);
}
