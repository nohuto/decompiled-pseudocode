/*
 * XREFs of RIMSetSystemInputMode @ 0x14011F8FC
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016959C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     ?SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14011F948 (-SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     _lambda_94dd59a04c39bb1513797c78502b3509_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401E74D8 (_lambda_94dd59a04c39bb1513797c78502b3509_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMSetSystemInputMode(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
  {
    InputTraceLogging::RIM::SetSystemInputMode(v3);
    v2 = lambda_94dd59a04c39bb1513797c78502b3509_::operator_void____cdecl___RawInputManagerObject___void___();
    RIMSyncWalkRimObjList(1LL, &v3, v2);
  }
  return 0LL;
}
