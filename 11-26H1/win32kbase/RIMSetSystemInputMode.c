/*
 * XREFs of RIMSetSystemInputMode @ 0x1400E9970
 * Callers:
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E97D0 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E99B8 (-SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetSystemInputMode(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( !*(_BYTE *)W32GetUserGdiSessionState() )
  {
    InputTraceLogging::RIM::SetSystemInputMode(v2);
    RIMSyncWalkRimObjList(1LL, &v2, lambda_94dd59a04c39bb1513797c78502b3509_::_lambda_invoker_cdecl_);
  }
  return 0LL;
}
