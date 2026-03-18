/*
 * XREFs of imp_WdfTimerStop @ 0x140009810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1400489BC (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfTimerStop(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer, unsigned int Wait)
{
  char v3; // di
  char v4; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _KTIMER *v8; // rcx
  unsigned __int8 v9; // si
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  FxVerifierDownlevelOption v17; // r9d
  unsigned __int8 v18; // r14
  _FX_DRIVER_GLOBALS *v19; // rcx
  unsigned __int8 v20; // r8
  __int64 v21; // rcx
  KIRQL CurrentIrql; // al
  const void *v23; // rax
  FxVerifierLock *v24; // rcx
  FxVerifierLock *v25; // rcx
  const void *v26; // r10
  const void *v27; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  struct _KTHREAD *flags; // [rsp+38h] [rbp-28h]
  FxTimer **p_pFxTimer; // [rsp+50h] [rbp-10h] BYREF
  __int16 v31; // [rsp+58h] [rbp-8h]
  __int16 v32; // [rsp+5Ah] [rbp-6h]
  int v33; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+38h] BYREF
  FxTimer *pFxTimer; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = Wait;
  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  LOWORD(v6) = 0;
  v7 = ~Timer & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Timer & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)v7;
    v7 -= v6;
  }
  if ( *(_WORD *)(v7 + 8) == 4136 )
  {
    pFxTimer = (FxTimer *)v7;
  }
  else
  {
    v32 = v6;
    pFxTimer = 0LL;
    v33 = 0;
    v13 = *(_QWORD *)v7;
    p_pFxTimer = &pFxTimer;
    v31 = 4136;
    if ( (*(int (__fastcall **)(unsigned __int64, FxTimer ***))(v13 + 40))(v7, &p_pFxTimer) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v7 + 16),
        v14,
        Wait,
        v15,
        traceGuid,
        (const void *)Timer,
        0x1028u,
        (const void *)v7,
        *(unsigned __int16 *)(v7 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v7 + 16), WDF_INVALID_HANDLE, Timer, 0x1028uLL);
    }
    v7 = (unsigned __int64)pFxTimer;
  }
  if ( !v4 )
  {
LABEL_7:
    PreviousIrql = 0;
    if ( v4 )
    {
      if ( pFxTimer->m_CallbackThread == KeGetCurrentThread() )
      {
        if ( pFxTimer->m_ObjectSize )
          v23 = (const void *)((unsigned __int64)pFxTimer ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v23 = 0LL;
        WPP_IFR_SF_qq(
          pFxTimer->m_Globals,
          2u,
          0x12u,
          0x11u,
          WPP_FxTimer_cpp_Traceguids,
          v23,
          pFxTimer->m_CallbackThread);
      }
      else
      {
        if ( !pFxTimer->m_Globals->FxVerifierOn || !KeGetCurrentIrql() )
        {
          if ( *(char *)(v7 + 24) < 0 && (v25 = *(FxVerifierLock **)(v7 - 40)) != 0LL )
          {
            FxVerifierLock::Lock(v25, &PreviousIrql, Wait);
            v18 = PreviousIrql;
          }
          else
          {
            v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 112));
            PreviousIrql = v18;
          }
          if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(*(_FX_DRIVER_GLOBALS **)(v7 + 16), v16, 9u, v17) )
          {
            v26 = *(const void **)(v7 + 336);
            if ( v26 )
            {
              flags = KeGetCurrentThread();
              v27 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v7 + 10) )
                v27 = 0LL;
              WPP_IFR_SF_qqq(v19, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v27, v26, flags);
              FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v7 + 16));
            }
          }
          *(_BYTE *)(v7 + 345) = 0;
          *(_QWORD *)(v7 + 336) = KeGetCurrentThread();
          do
          {
            *(_BYTE *)(v7 + 344) = 0;
            FxNonPagedObject::Unlock((FxNonPagedObject *)v7, v18);
            v9 = MxTimer::Stop((MxTimer *)(v7 + 120));
            KeFlushQueuedDpcs();
            v21 = *(_QWORD *)(v7 + 320);
            if ( v21 )
              FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)(v21 + 152));
            if ( *(char *)(v7 + 24) < 0 && (v24 = *(FxVerifierLock **)(v7 - 40)) != 0LL )
            {
              FxVerifierLock::Lock(v24, &PreviousIrql, v20);
              v18 = PreviousIrql;
            }
            else
            {
              v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 112));
              PreviousIrql = v18;
            }
          }
          while ( !v9 && *(_BYTE *)(v7 + 344) );
          *(_QWORD *)(v7 + 336) = 0LL;
          *(_BYTE *)(v7 + 344) = 0;
          if ( *(_BYTE *)(v7 + 345) )
          {
            v9 = 1;
            *(_BYTE *)(v7 + 345) = 0;
          }
          FxNonPagedObject::Unlock((FxNonPagedObject *)v7, v18);
          return v9;
        }
        CurrentIrql = KeGetCurrentIrql();
        WPP_IFR_SF_D(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 2u, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
      }
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v7 + 16));
      return v3;
    }
    v8 = (_KTIMER *)(v7 + 136);
    v9 = 1;
    if ( !*(_BYTE *)(v7 + 124) )
      return KeCancelTimer(v8);
    v12 = *(_QWORD *)&v8->Header.Lock;
    if ( !v12 )
      return v9;
    return ExCancelTimer(v12, 0LL);
  }
  if ( FxVerifierCheckIrqlLevel(*(_FX_DRIVER_GLOBALS **)(v7 + 16), 0) >= 0 )
  {
    v7 = (unsigned __int64)pFxTimer;
    goto LABEL_7;
  }
  return 0;
}
