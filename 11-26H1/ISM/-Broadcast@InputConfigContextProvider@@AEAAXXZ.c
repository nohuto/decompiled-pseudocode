/*
 * XREFs of ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180045EAC
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180046170 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AA230 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x180045FFC (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18004607C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0AEAUInputConfigContextMessage@@$0A@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@AEAUInputConfigContextMessage@@@Z @ 0x18010C26C (--$-0AEAUInputConfigContextMessage@@$0A@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputConfigContextProvider::Broadcast(InputConfigContextProvider *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  __int64 *i; // rbx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  SystemContextManager *v7; // rdi
  char *v8; // rbx
  _DWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _BYTE v11[24]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9[1] = 0;
  v2 = *((_QWORD *)this + 33);
  v3 = *((_QWORD *)this + 32);
  v9[0] = -1431655765 * ((v2 - v3) >> 3);
  if ( v3 == v2 )
    v3 = 0LL;
  v10 = v3;
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
    v11,
    v9);
  for ( i = (__int64 *)*((_QWORD *)this + 4);
        ;
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)i[2] + 24LL))(i[2], v11) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)this + 4) )
      break;
  }
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v7 = (SystemContextManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                  + 31)
                                                                                + 8LL)
                                                                    + 40LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                             + 31) + 8LL);
    v8 = (char *)v7 + 16;
    if ( v7 )
      (**(void (__fastcall ***)(char *))v8)(v8);
    SystemContextManager::OnInputConfigChanged(v7);
    if ( v7 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v12 != -1LL && v12 && v12 != 1LL )
  {
    if ( v12 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v11);
    }
    else if ( v12 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v11);
    }
  }
}
