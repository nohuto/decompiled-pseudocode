/*
 * XREFs of GreMultiUserCleanupSession @ 0x140189BA0
 * Callers:
 *     CleanupRemoteHandles @ 0x1401899E0 (CleanupRemoteHandles.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall GreMultiUserCleanupSession(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v5 = (char *)a1[7];
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    a1[7] = 0LL;
  }
}
