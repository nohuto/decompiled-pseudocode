/*
 * XREFs of VfRemoveVerifierEntry @ 0x140C39AF0
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140C38DC4 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
