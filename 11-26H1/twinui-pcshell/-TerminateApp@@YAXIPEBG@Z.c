/*
 * XREFs of ?TerminateApp@@YAXIPEBG@Z @ 0x180576708
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1805754E0 (-Run@-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z @ 0x180576584 (--$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z.c)
 */

void __fastcall TerminateApp(DWORD dwProcessId, const unsigned __int16 *a2)
{
  char *v2; // rax
  signed int LastError; // eax
  const unsigned __int16 *v4; // [rsp+38h] [rbp+10h] BYREF
  signed int v5; // [rsp+40h] [rbp+18h]
  void *v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  v5 = 0;
  v2 = (char *)OpenProcess(1u, 0, dwProcessId);
  v6 = v2;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !TerminateProcess(v2, 0xFFFFFFFF) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v5 = LastError;
  }
  AppUsageTelemetry::EnforceTerminateProcess<unsigned short const * &,long &>(&v4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v6);
}
