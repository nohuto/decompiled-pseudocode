/*
 * XREFs of ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x180185D24
 * Callers:
 *     ?OnDisconnected@DeviceDockClientProxy@@MEAAJXZ @ 0x180186A90 (-OnDisconnected@DeviceDockClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x180185CD8 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceDockServer::UnregisterDeviceDockClient(
        DeviceDockServer *this,
        struct BamoDeviceDockClientProxy *a2)
{
  const char *v4; // r9
  struct BamoDeviceDockClientProxy **v5; // rsi
  struct BamoDeviceDockClientProxy **i; // rbx
  char v7; // al
  struct BamoDeviceDockClientProxy *v8; // rax
  __int64 v9; // rcx
  struct BamoDeviceDockClientProxy *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::DeviceDock::UnregisterClient(a2);
  v5 = (struct BamoDeviceDockClientProxy **)*((_QWORD *)this + 8);
  for ( i = (struct BamoDeviceDockClientProxy **)*((_QWORD *)this + 7); ; ++i )
  {
    if ( i == v5 )
    {
      v7 = 1;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v7 = 0;
LABEL_6:
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  while ( ++i != v5 )
  {
    v8 = *i;
    *i = 0LL;
    v9 = (__int64)*(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 8) - 8LL));
  *((_QWORD *)this + 8) -= 8LL;
  v10 = (struct BamoDeviceDockClientProxy *)*((_QWORD *)this + 10);
  if ( v10 == a2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(struct BamoDeviceDockClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return 0LL;
}
