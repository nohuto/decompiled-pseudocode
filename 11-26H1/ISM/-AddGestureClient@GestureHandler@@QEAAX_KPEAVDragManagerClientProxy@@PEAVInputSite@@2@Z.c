/*
 * XREFs of ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180149700
 * Callers:
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18015CF00 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180144988 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801491DC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 *     ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x180149434 (--0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::AddGestureClient(
        GestureHandler *this,
        __int64 a2,
        struct DragManagerClientProxy *a3,
        struct InputSite *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+41h] [rbp-Fh]
  __int16 v11; // [rsp+45h] [rbp-Bh]
  char v12; // [rsp+47h] [rbp-9h]

  v4 = (__int64 *)((char *)this + 112);
  v5 = a2;
  v6 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
  v7 = 0LL;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v7);
  v8 = 0LL;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v8);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v4[1] == v4[2] )
  {
    std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
      v4,
      v4[1],
      (__int64)&v5);
  }
  else
  {
    GestureHandler::GestureClient::GestureClient((_QWORD *)v4[1], &v5);
    v4[1] += 40LL;
  }
  GestureHandler::GestureClient::~GestureClient((GestureHandler::GestureClient *)&v5);
}
