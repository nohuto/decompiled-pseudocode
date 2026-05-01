/*
 * XREFs of ?RmpSystemGetThreadId@@YAKPEAX@Z @ 0x180068504
 * Callers:
 *     ?HampProcessQueryFirstThreadId@@YAJPEAX00@Z @ 0x1800797C0 (-HampProcessQueryFirstThreadId@@YAJPEAX00@Z.c)
 *     ?HampProcessBoostPriorityThreadCallback@@YAJPEAX00@Z @ 0x180079C90 (-HampProcessBoostPriorityThreadCallback@@YAJPEAX00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemGetThreadId(void *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+40h] [rbp-28h]
  __int128 v4; // [rsp+50h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NtQueryInformationThread(a1, ThreadBasicInformation, &v2, 0x30u, 0LL);
  return DWORD2(v3);
}
