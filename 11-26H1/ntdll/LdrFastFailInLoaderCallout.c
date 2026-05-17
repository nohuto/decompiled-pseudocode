/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180109A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( LdrpProcessInitialized < 2 || (void *)qword_1801C58B8 == result->ClientId.UniqueThread )
    __fastfail(0x17u);
  return result;
}
