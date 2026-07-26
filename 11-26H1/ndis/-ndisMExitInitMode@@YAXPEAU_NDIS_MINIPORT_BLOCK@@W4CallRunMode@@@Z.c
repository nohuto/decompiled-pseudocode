/*
 * XREFs of ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0
 * Callers:
 *     ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076200 (-ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14013AA90 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169C00 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400457F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisCancelTimer @ 0x140052630 (NdisCancelTimer.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081550 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140091354 (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1401379C0 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137EA0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140158860 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159690 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159A50 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159E20 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015A130 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015A5C0 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015A7E0 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015AB80 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015AF20 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015B1C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B690 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B8E0 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015BC80 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 */

void __fastcall ndisMExitInitMode(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  char v3; // r13
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  unsigned __int64 v5; // rdi
  struct Ndis::BindStack *v6; // rdx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  __int64 m_numElements; // r12
  __int64 v11; // r15
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v12; // r14
  NDIS_BIND_PROTOCOL_LINK *value; // rbx
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rax
  unsigned int m_unbindReasons; // edx
  bool v16; // cf
  unsigned __int16 *p_Length; // rdx
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // rdx
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // r8
  struct Ndis::BindStack *v22; // rdx
  struct Ndis::BindStack *v23; // rdx
  struct Ndis::BindStack *v24; // rdx
  struct Ndis::BindStack *v25; // rdx
  struct Ndis::BindStack *v26; // r8
  struct Ndis::BindStack *v27; // rdx
  unsigned int *v28; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx
  __int64 v30; // rax
  bool v31; // zf
  char v32[8]; // [rsp+30h] [rbp-48h]
  BOOLEAN v33; // [rsp+80h] [rbp+8h] BYREF
  enum CallRunMode v34; // [rsp+88h] [rbp+10h]

  v34 = a2;
  if ( !a1->InitModeNotNeededAnymore )
  {
    a1->InitModeNotNeededAnymore = 1;
    v33 = 0;
    NdisCancelTimer(&a1->InitModeTimeoutTimer, &v33);
    if ( v33 )
    {
      KeSetEvent(&a1->InitModeTimeoutTimerQueuedEvent, 0, 0);
      ndisDereferenceMiniport(a1, 0x17u);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    v3 = 0;
    a1->BindEngine.m_isDirty = 1;
    do
    {
      m_miniport = a1->BindEngine.m_miniport;
      v5 = 0LL;
      v3 |= a1->BindEngine.m_isDirty;
      a1->BindEngine.m_isDirty = 0;
      if ( ndisMDoesMiniportNeedCoNdisNdProxy(m_miniport) )
        ndisBindEnumerateProtocolDrivers(
          (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_,
          (__int64)m_miniport);
      Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&m_miniport->Bindings, v6);
      Ndis::BindRules::ReStartTemporaryPause(m_miniport, v7);
      Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&m_miniport->Bindings, v8);
      m_numElements = m_miniport->Bindings.Protocols.m_numElements;
      while ( v5 != m_numElements )
      {
        if ( v5 >= m_miniport->Bindings.Protocols.m_numElements )
          __fastfail(5u);
        v11 = qword_14011F6D8;
        v12 = &m_miniport->Bindings.Protocols._p[v5];
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v11 + 16, 0LL);
        value = v12->__ptr_.__value_;
        RunningDriver = v12->__ptr_.__value_->BindDriver._p->_t.RunningDriver;
        if ( RunningDriver )
        {
          m_unbindReasons = value->BindState.m_unbindReasons;
          if ( (RunningDriver->Flags & 0x10000000) == 0 || LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
          {
            value->BindState.m_unbindReasons = m_unbindReasons & 0xFFDFFFFF;
            if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFDFFFFF) != 0) || !value->BindState.Miniport )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v32 = m_unbindReasons & 0xFFDFFFFF;
                WPP_RECORDER_SF_Ld(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0x1Cu,
                  0xEu,
                  (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                  m_unbindReasons,
                  *(_QWORD *)v32);
              }
              v16 = (unsigned __int8)byte_14011EAD3 < 4u;
              value->BindState.Miniport->BindEngine.m_isDirty = 1;
              if ( !v16 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v12->__ptr_.__value_->BindState.Miniport,
                  0x1Cu,
                  0x13u,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  &v12->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
                  v12->__ptr_.__value_->BindState.Miniport);
            }
          }
          else
          {
            value->BindState.m_unbindReasons = m_unbindReasons | 0x200000;
            if ( !m_unbindReasons || !value->BindState.Miniport )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v32 = m_unbindReasons | 0x200000;
                WPP_RECORDER_SF_Ld(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0x1Cu,
                  0xEu,
                  (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                  m_unbindReasons,
                  *(_QWORD *)v32);
              }
              v16 = (unsigned __int8)byte_14011EAD3 < 4u;
              value->BindState.Miniport->BindEngine.m_isDirty = 1;
              if ( !v16 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                p_Length = &v12->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)p_Length,
                  0x1Cu,
                  0x14u,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  p_Length,
                  v12->__ptr_.__value_->BindState.Miniport);
              }
            }
          }
        }
        ExReleasePushLockEx(v11 + 16, 0LL);
        KeLeaveCriticalRegion();
        ++v5;
      }
      Ndis::BindRules::UnbindIncompatibleDriversForMacChange(m_miniport, v9);
      Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&m_miniport->Bindings, v18);
      Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&m_miniport->Bindings, v19);
      Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&m_miniport->Bindings, v20);
      Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        m_miniport,
        (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
        v21);
      Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&m_miniport->Bindings, v22);
      Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&m_miniport->Bindings, v23);
      LOBYTE(v24) = m_miniport->InitMode != 0;
      Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&m_miniport->Bindings, v24);
      Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v25);
      Ndis::BindRules::PauseNeededForBind(m_miniport, (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings, v26);
      Ndis::BindRules::PauseMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v27);
    }
    while ( a1->BindEngine.m_isDirty );
    a1->BindEngine.m_isDirty = v3;
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, v34, 0);
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL
      && (mem::ReadNoFence<unsigned long,void>(v28) & 0x100) == 0 )
    {
      AoAc = a1->AoAc;
      if ( AoAc )
      {
        v30 = MEMORY[0xFFFFF78000000008];
        v31 = *((_BYTE *)AoAc + 1081) == 0;
        *((_QWORD *)AoAc + 55) = MEMORY[0xFFFFF78000000008];
        *((_QWORD *)AoAc + 104) = v30;
        if ( v31 )
          v30 = 0LL;
        *((_QWORD *)AoAc + 105) = v30;
        *((_BYTE *)AoAc + 452) = 1;
        if ( a1->AoAc )
        {
          ndisAoAcClearStop(a1, 9);
          if ( a1->AoAc )
          {
            if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 && a1->SelectiveSuspend && ndisPowerRefManagementState == 1 )
              ndisAoAcTakeInternalRef(a1);
          }
        }
      }
    }
  }
}
