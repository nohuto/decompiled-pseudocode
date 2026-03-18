/*
 * XREFs of RIMSetTestModeStatus @ 0x1401FE0D0
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1401FF700 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1, int a2, int a3)
{
  *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 169) = a1 != 0;
  if ( !a1 )
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(void *, __int64))lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_);
  return 0LL;
}
