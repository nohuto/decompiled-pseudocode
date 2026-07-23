/*
 * XREFs of FsRtlCheckFileSystemFilterCallbacksRegistered @ 0x1404F8620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlCheckFileSystemFilterCallbacksRegistered(__int64 a1)
{
  return a1 && *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL) != 0LL;
}
