/*
 * XREFs of ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x180045FFC
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180045EAC (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 * Callees:
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180085480 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18008B5C8 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnInputConfigChanged(SystemContextManager *this)
{
  struct InputConfigContextProvider *Instance; // rax
  int v3; // eax
  int v4[6]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 7) != *((_QWORD *)this + 8) )
  {
    v5 = 0;
    Instance = InputConfigContextProvider::GetInstance();
    if ( (int)InputConfigContextProvider::GetCurrentContext(Instance, v4) >= 0 )
    {
      if ( v5 != 1 )
        std::_Throw_bad_variant_access();
      v3 = SystemContextManager::ProcessInputConfigMessage(this, (const struct InputConfigContextMessage *)v4, 0LL);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
          (const char *)(unsigned int)v3,
          v4[0]);
    }
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(v4);
  }
}
