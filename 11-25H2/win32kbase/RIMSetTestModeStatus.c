/*
 * XREFs of RIMSetTestModeStatus @ 0x1401D6BE0
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1401D8660 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(__int64 a1, __int64 a2)
{
  int v2; // edi

  v2 = a1;
  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 169) = (_DWORD)a1 != 0;
  if ( !v2 )
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(void *, __int64))lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_);
  return 0LL;
}
