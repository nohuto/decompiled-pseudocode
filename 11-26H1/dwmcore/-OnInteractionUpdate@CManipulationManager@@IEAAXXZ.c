/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8
 * Callers:
 *     _CGlobalManipulationManager::ManipulationThreadMain_::_30_::_lambda_2_::_lambda_invoker_cdecl_ @ 0x1801917D0 (_CGlobalManipulationManager--ManipulationThreadMain_--_30_--_lambda_2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180093A18 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180093A80 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800AA240 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800E62B0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x180191B00 (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801A2ED0 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A4AF4 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1801A4D4C (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1801B0A7C (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801D59AC (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ?OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z @ 0x180225F54 (-OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180226000 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z @ 0x180226F70 (-FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  int *v2; // r13
  RTL_SRWLOCK *v3; // rcx
  char v4; // r14
  __int64 v5; // rdx
  const struct CInteraction **v6; // rax
  const struct CInteraction **v7; // rbx
  int v8; // r9d
  CVisual *v9; // r15
  struct CInteraction *v10; // rsi
  __int64 v11; // rdx
  struct CInteraction *InteractionInternal; // rax
  struct CDesktopTree *v13; // rcx
  __int64 *v14; // r14
  __int64 v15; // rax
  void (__fastcall *v16)(__int64 *, struct _LUID, struct CDesktopTree **); // r12
  int v17; // edx
  int v18; // edx
  int v19; // edx
  const struct CInteraction *v20; // rcx
  const struct CInteraction *v21; // rcx
  int v23; // [rsp+38h] [rbp-69h] BYREF
  struct CDesktopTree *v24; // [rsp+40h] [rbp-61h] BYREF
  int v25; // [rsp+48h] [rbp-59h] BYREF
  struct _LUID v26; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v27[56]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v28[56]; // [rsp+90h] [rbp-11h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v28, "GestureTargetingUpdate", 0LL);
  v2 = &v23;
  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 5696LL);
  v23 = 0;
  CTreeLock::AcquireShared(v3);
  v4 = 0;
  v25 = 0;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v27,
      "GestureTargetingUpdateEvent",
      (const struct InputTraceLogging::PerfRegion *)v27);
    v6 = (const struct CInteraction **)CQueue<CManipulationManager::InteractionUpdate *>::Remove(
                                         &CManipulationManager::s_InteractionUpdateQueue,
                                         v5,
                                         v2);
    v7 = v6;
    v2 = 0LL;
    if ( !v6 )
      goto LABEL_32;
    InputTraceLogging::GestureTargeting::InteractionUpdate(v6);
    v9 = v7[1];
    v7[1] = 0LL;
    v10 = v7[2];
    v7[2] = 0LL;
    v11 = *(unsigned int *)v7;
    if ( (int)v11 <= 5 )
    {
      if ( (_DWORD)v11 == 5 )
      {
        CManipulationManager::OnCapturePointer(this, *((_DWORD *)v7 + 6), v10);
      }
      else
      {
        if ( (unsigned int)v11 >= 4 )
        {
          if ( (_DWORD)v11 == 4 )
          {
            v24 = 0LL;
            v26 = 0LL;
            InteractionInternal = CVisual::GetInteractionInternal(v9);
            CManipulationContext::FindDesktopTree(
              (CManipulationManager *)((char *)this + 160),
              InteractionInternal,
              &v26);
            v13 = v24;
            v14 = (__int64 *)*((_QWORD *)this + 2);
            v15 = *v14;
            v24 = 0LL;
            v16 = *(void (__fastcall **)(__int64 *, struct _LUID, struct CDesktopTree **))(v15 + 64);
            if ( v13 )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v16)(v14, v26, &v24);
            if ( v24 )
              CManipulationContext::OnVisualPropertyChange(v9, v24);
            v4 = 1;
            wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v24);
          }
          goto LABEL_27;
        }
        CManipulationContext::InvalidateMCs((char *)this + 160, v9, v10, (unsigned int)v11, &v25);
      }
LABEL_13:
      v4 = 1;
      goto LABEL_27;
    }
    v17 = v11 - 6;
    if ( !v17 )
    {
      CManipulationManager::OnCaptureManipulation(this, v10, *((_DWORD *)v7 + 6), (unsigned __int64)v7[4]);
      goto LABEL_27;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      CInteractionProcessor::SetInteractionConfiguration(
        (__int64)v10 + 360,
        *((_DWORD *)v7 + 10),
        *((_DWORD *)v7 + 11),
        v7[7],
        *((_DWORD *)v7 + 12));
      v21 = v7[7];
      if ( v21 )
        operator delete(v21);
      goto LABEL_27;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      LOBYTE(v8) = (_BYTE)v7[8] & 1;
      CInteractionProcessor::SetTemporaryConfiguration(
        (_DWORD)v10 + 360,
        *((_DWORD *)v7 + 11),
        *((_DWORD *)v7 + 10),
        v8,
        *(_DWORD *)v7[7]);
      v20 = v7[7];
      if ( v20 )
        operator delete(v20, 0LL);
      goto LABEL_27;
    }
    v11 = (unsigned int)(v19 - 1);
    if ( !(_DWORD)v11 )
    {
      LODWORD(v11) = ((_BYTE)v7[8] & 2) != 0;
      CInteractionProcessor::SetRailsEnabled((char *)v10 + 360, v11, *((unsigned int *)v7 + 11));
      goto LABEL_27;
    }
    if ( (_DWORD)v11 == 1 )
      goto LABEL_13;
LABEL_27:
    if ( v9 )
      CQueue<CResource *>::Insert((char *)this + 80, v11, v9);
    if ( v10 )
      CQueue<CResource *>::Insert((char *)this + 80, v11, v10);
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v7);
LABEL_32:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v27);
  }
  while ( v23-- );
  if ( v4 )
    CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 160));
  CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 5696LL));
  if ( *((_DWORD *)this + 24) )
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 2), 0, 0x4000u);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v28);
}
