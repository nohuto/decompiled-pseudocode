/*
 * XREFs of ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801A6698
 * Callers:
 *     ?OnRemoved@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013CFF0 (-OnRemoved@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18004607C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18007DFAC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@@Z @ 0x18013DAA4 (-erase@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA-AV-$.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18013EBD8 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x180140ED8 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A62C0 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectRemoved(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2,
        __int64 a3,
        const char *a4)
{
  __int64 i; // rcx
  char v7; // al
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SystemContextManager *v15; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 11); ; i += 176LL )
  {
    if ( i == *((_QWORD *)this + 12) )
    {
      v7 = 1;
      goto LABEL_6;
    }
    if ( operator==(i, (__int64)a2) )
      break;
  }
  v7 = 0;
LABEL_6:
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      a4);
  std::vector<DisplayOcclusionRect>::erase((__int64)this + 88, &v15, i);
  v8 = DisplayOcclusionContextProvider::Broadcast(this);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v9);
    if ( !*(_DWORD *)ISMScenarios::s_instance )
    {
      InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
      wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
        &v15,
        v13);
      SystemContextManager::OnOcclusionRectRemoved(v15, a2);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)&v15);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v8);
    return v10;
  }
}
