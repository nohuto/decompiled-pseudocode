/*
 * XREFs of SmpConfigureProtectionMode @ 0x140014120
 * Callers:
 *     <none>
 * Callees:
 *     SmpCreateSecurityDescriptors @ 0x14000B8C0 (SmpCreateSecurityDescriptors.c)
 */

__int64 __fastcall SmpConfigureProtectionMode(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax

  v4 = 1;
  if ( a4 == 4 )
    v4 = *a3;
  SmpProtectionMode = v4;
  SmpCreateSecurityDescriptors(0);
  return 0LL;
}
