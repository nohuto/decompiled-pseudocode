/*
 * XREFs of CempRpcBindToServer @ 0x1800034E0
 * Callers:
 *     HamPlmNotifyNewSession @ 0x180001210 (HamPlmNotifyNewSession.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x180001E30 (HamGetInterruptiveUIStateForAumid.c)
 *     HamHostIdFind @ 0x180001F50 (HamHostIdFind.c)
 *     RmGameModeRegisterProcess @ 0x180002160 (RmGameModeRegisterProcess.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180002CB0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002DE0 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x1800111C0 (RmGameModeGetLargestValidResourceRequest.c)
 *     HamHostIdRetrieveDynamicId @ 0x180011610 (HamHostIdRetrieveDynamicId.c)
 *     CreateResourceManagerProxy @ 0x1800124D8 (CreateResourceManagerProxy.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x180014320 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x1800143E0 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x1800144A0 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x180014560 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x180014620 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x180014720 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcessById @ 0x180014820 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x180014910 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x1800149D0 (RmGameModeUnregisterProcessById.c)
 *     HamGetPackageInterruptiveUIState @ 0x180018FB0 (HamGetPackageInterruptiveUIState.c)
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x1800194C0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamCloseActivityForDesktopBridge @ 0x18001A210 (HamCloseActivityForDesktopBridge.c)
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  int v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+5Ch] [rbp-3Dh]
  __int128 v12; // [rsp+60h] [rbp-39h]
  __int128 v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+80h] [rbp-19h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  *(_QWORD *)&Options.ComTimeout = 5LL;
  Options.Version = 1;
  Binding = 0LL;
  memset(&Template, 0, sizeof(Template));
  v14 = 0LL;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v9;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Flags = 1;
  v9 = 5LL;
  v12 = 0LL;
  v10 = 1;
  v13 = 0LL;
  v11 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 <= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v4 = RpcBindingBind(0LL, Binding, IfSpec);
  v5 = v4;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = Binding;
    return result;
  }
  if ( v4 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v4 | 0xC0070000;
LABEL_8:
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
