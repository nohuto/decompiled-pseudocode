/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1405318A4
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140C0C460 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  int v2[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+2Ch] [rbp-2Ch]
  int v4; // [rsp+3Ch] [rbp-1Ch]

  if ( LOBYTE(stru_140E36558.ReadyTime) )
  {
    v4 = 0;
    v2[0] = 2;
    v2[2] = 6;
    v2[1] = (a2 != 0) + 6;
    v3 = 0LL;
    MiWalkAllWorkingSets(a1, v2);
  }
}
