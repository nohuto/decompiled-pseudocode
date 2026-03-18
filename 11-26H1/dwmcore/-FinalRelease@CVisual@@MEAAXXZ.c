/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x1800E5880
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::FinalRelease(CVisual *this)
{
  _DWORD *v1; // rdx
  __int64 v3; // rax
  _BYTE *v4; // r8
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  CComposition *v9; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v11; // rbx
  _DWORD *v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  CInteraction *InteractionInternal; // rax
  struct CManipulationManager *v21; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x2000000) == 0 )
    return;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 7 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_27;
    }
    goto LABEL_4;
  }
LABEL_27:
  if ( (unsigned int)v5 < (unsigned int)v3 )
  {
LABEL_4:
    v6 = (__int64 *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  v7 = *v6;
  if ( !v7 )
    return;
  ReleaseInterface<ID2D1Geometry>((__int64 *)(v7 + 120));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xx_EventWriteTransfer(v8, &INTERACTION_VISUAL_UPDATE, v7, 0LL);
  if ( (*((_BYTE *)this + 101) & 0x10) == 0 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(this);
    if ( !InteractionInternal || !(unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) )
      goto LABEL_13;
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v9 = (CComposition *)*((_QWORD *)this + 3);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  ManipulationManager = CComposition::GetManipulationManager(v9, &v21);
  v11 = v21;
  if ( ManipulationManager >= 0 )
    CManipulationManager::QueueMidManipulationUpdate((__int64)v21, 1u, (__int64)this);
  if ( v11 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_13:
  v12 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v12 & 0x2000000) == 0 )
    goto LABEL_19;
  v13 = (unsigned int)v12[1];
  v14 = v12 + 2;
  v15 = 0LL;
  if ( (_DWORD)v13 )
  {
    while ( *v14 != 7 )
    {
      v15 = (unsigned int)(v15 + 1);
      ++v14;
      if ( (unsigned int)v15 >= (unsigned int)v13 )
        goto LABEL_30;
    }
    goto LABEL_16;
  }
LABEL_30:
  if ( (unsigned int)v15 < (unsigned int)v13 )
  {
LABEL_16:
    v16 = (__int64 *)((char *)&v12[2 * v15] + ((v13 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_17;
  }
  v16 = 0LL;
LABEL_17:
  v17 = *v16;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_19:
  v18 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v18 & 0x2000000) != 0 )
  {
    v19 = 0LL;
    *v18 &= ~0x2000000u;
    if ( v18[1] )
    {
      while ( *((_BYTE *)v18 + v19 + 8) != 7 )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= v18[1] )
          return;
      }
      *((_BYTE *)v18 + v19 + 8) = 0;
    }
  }
}
