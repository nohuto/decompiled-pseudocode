/*
 * XREFs of ??R_lambda_42dce70c870a3964e7319458b8bf7bca_@@QEBA@XZ @ 0x1805505DC
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180551300 (-Run@-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z @ 0x1805523C0 (--$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z.c)
 */

__int64 __fastcall _lambda_42dce70c870a3964e7319458b8bf7bca_::operator()(__int64 a1)
{
  _QWORD *v1; // rax
  DWORD v2; // r8d
  char *v3; // rax
  signed int LastError; // eax
  signed int v6; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v1 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 32) > 7uLL )
    v1 = (_QWORD *)*v1;
  v2 = *(_DWORD *)a1;
  v6 = 0;
  v7 = v1;
  v3 = (char *)OpenProcess(1u, 0, v2);
  v8 = v3;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !TerminateProcess(v3, 0xFFFFFFFF) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v6 = LastError;
  }
  AppUsageTelemetry::EnforceTerminateProcess<unsigned short const * &,long &>(&v7, &v6);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v8);
  return 0LL;
}
