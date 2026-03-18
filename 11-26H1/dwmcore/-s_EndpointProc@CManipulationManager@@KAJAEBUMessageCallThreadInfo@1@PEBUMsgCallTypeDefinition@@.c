/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1801B162C
 * Callers:
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1801B1550 (-s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1801B15C0 (-s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         &IManipulation_Receive<CManipulationManager>::Type,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A,
         213LL);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1C9u, 0LL);
  return v5;
}
