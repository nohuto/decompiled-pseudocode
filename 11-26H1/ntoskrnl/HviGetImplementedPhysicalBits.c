/*
 * XREFs of HviGetImplementedPhysicalBits @ 0x1406E0AF0
 * Callers:
 *     RtlGetCpuMaxPhysicalBits @ 0x140C04F34 (RtlGetCpuMaxPhysicalBits.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall HviGetImplementedPhysicalBits(int *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  HviGetEnlightenmentInformation(&v3);
  if ( (BYTE8(v3) & 0x7F) == 0 )
    return 0;
  *a1 = BYTE8(v3) & 0x7F;
  return 1;
}
