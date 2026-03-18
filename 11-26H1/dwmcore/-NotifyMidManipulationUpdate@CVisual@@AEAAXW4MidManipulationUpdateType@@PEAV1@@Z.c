/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E5044
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, CVisual *a3)
{
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v8; // rbx
  CInteraction *InteractionInternal; // rax
  struct CManipulationManager *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a3 + 101) & 0x10) == 0 )
  {
    if ( a2 != 1 )
      return;
    InteractionInternal = CVisual::GetInteractionInternal(a3);
    if ( !InteractionInternal || !(unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) )
      return;
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v6 = *(CComposition **)(a1 + 24);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  ManipulationManager = CComposition::GetManipulationManager(v6, &v10);
  v8 = v10;
  if ( ManipulationManager >= 0 )
    CManipulationManager::QueueMidManipulationUpdate(v10, a2, a3);
  if ( v8 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v8 + 16LL))(v8);
}
