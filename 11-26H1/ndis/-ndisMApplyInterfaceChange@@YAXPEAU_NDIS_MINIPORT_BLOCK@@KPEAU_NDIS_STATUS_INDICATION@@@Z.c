/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401676B0
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F7B4 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400452E0 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400824B0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140146AB8 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x140146B44 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  unsigned int *p_InterlockedFlags; // rbp
  KPushLock *p_m_lock; // r14
  Ndis::BindState *p_Miniport; // rsi
  unsigned int m_pauseReasons; // ecx
  Ndis::BindState *v10; // rdi
  int v11; // edx
  int v12; // r8d
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  int v16; // edx
  char v17[8]; // [rsp+30h] [rbp-D8h]
  char v18[160]; // [rsp+40h] [rbp-C8h] BYREF

  p_InterlockedFlags = &a1->InterlockedFlags;
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop(a1, 0xBu);
  KeEnterCriticalRegion();
  p_m_lock = &a1->BindEngine.m_lock;
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  p_Miniport = &a1->Bindings.Miniport;
  m_pauseReasons = a1->Bindings.Miniport.m_pauseReasons;
  a1->Bindings.Miniport.m_pauseReasons = m_pauseReasons | 0x200;
  if ( !m_pauseReasons || !p_Miniport->Miniport )
  {
    v10 = &a1->Bindings.Miniport;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xFu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        m_pauseReasons,
        m_pauseReasons | 0x200);
      p_InterlockedFlags = &a1->InterlockedFlags;
      p_m_lock = &a1->BindEngine.m_lock;
      v10 = &a1->Bindings.Miniport;
    }
    p_Miniport->Miniport->BindEngine.m_isDirty = 1;
    memset(v18, 0, sizeof(v18));
    p_Miniport = v10;
    if ( (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          0x1Cu,
          0xB4u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          *(unsigned __int16 **)&v18[8],
          *(_QWORD *)v18);
    }
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  ndisPowerSaveClearStop((__int64)a1, 11LL);
  ndisMRawIndicateStatusEx((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a1, a3, v12);
  if ( a3->StatusCode == 1073873072 )
  {
    ndisIfUpdateCurrentMacAddressAndNotify(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)a3->StatusBuffer);
  }
  else if ( a3->StatusCode == 1073873073 )
  {
    IfBlock = a1->IfBlock;
    v14 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v14;
    ndisIfUpdateL2MtuSizeAndNotify(IfBlock, v14);
  }
  _InterlockedOr((volatile signed __int32 *)p_InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)p_InterlockedFlags, ~a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v15 = p_Miniport->m_pauseReasons;
  p_Miniport->m_pauseReasons = v15 & 0xFFFFFDFF;
  if ( (v15 != 0) != ((v15 & 0xFFFFFDFF) != 0) || !p_Miniport->Miniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v17 = v15 & 0xFFFFFDFF;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xFu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        v15,
        *(_QWORD *)v17);
    }
    p_Miniport->Miniport->BindEngine.m_isDirty = 1;
    memset(v18, 0, sizeof(v18));
    if ( (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          0x1Cu,
          0xB5u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          *(unsigned __int16 **)&v18[8],
          *(_QWORD *)v18);
    }
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}
