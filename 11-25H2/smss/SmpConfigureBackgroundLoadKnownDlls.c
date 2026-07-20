/*
 * XREFs of SmpConfigureBackgroundLoadKnownDlls @ 0x140013B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureBackgroundLoadKnownDlls(__int64 a1, int a2, int *a3, int a4)
{
  if ( a2 == 4 && a4 == 4 )
    SmpLoadKnownDllsFlags = *a3;
  return 0LL;
}
