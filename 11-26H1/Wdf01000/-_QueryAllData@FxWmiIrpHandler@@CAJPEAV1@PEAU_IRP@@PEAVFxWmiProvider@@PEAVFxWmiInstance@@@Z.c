/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14003E040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qdD @ 0x140007548 (WPP_IFR_SF_qdD.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x14003E810 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 *     WPP_IFR_SF_dqd @ 0x14003E928 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        unsigned __int64 Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int _a3; // esi
  bool v8; // cf
  FxVerifierLock **p_WaitListHead; // rdi
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v11; // dl
  unsigned __int8 v12; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned int _a1; // r11d
  unsigned __int8 FxVerboseOn; // al
  _NAMED_PIPE_CREATE_PARAMETERS *v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // edi
  unsigned __int16 v20; // ax
  const void *_a2; // rbx
  unsigned int v23; // r15d
  unsigned int LowPart; // eax
  unsigned int v25; // r8d
  bool v26; // bp
  unsigned int v27; // r10d
  unsigned __int64 v28; // rdx
  FxWmiIrpHandler *v29; // rcx
  unsigned __int8 v30; // al
  _LIST_ENTRY *v31; // rdx
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  _LIST_ENTRY **p_Blink; // r9
  unsigned int v35; // edx
  FxTagTracker *v36; // rcx
  FxWmiIrpHandler *v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned int *v41; // r8
  unsigned int v42; // ecx
  int v43; // eax
  const void *v44; // rcx
  unsigned __int16 *v45; // rbp
  const void *v46; // rbx
  _FX_DRIVER_GLOBALS *v47; // rcx
  const void *v48; // rax
  const void *v49; // rax
  unsigned __int16 v50; // ax
  const void *v51; // rbx
  const void *v52; // rcx
  const void *v53; // rcx
  unsigned int *v54; // rcx
  __int64 v55; // rax
  const void *v56; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp-68h] BYREF
  bool v58; // [rsp+51h] [rbp-67h]
  unsigned int v59; // [rsp+54h] [rbp-64h]
  unsigned int v60; // [rsp+58h] [rbp-60h]
  int v61; // [rsp+5Ch] [rbp-5Ch]
  unsigned int tmpSize; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-54h]
  unsigned int v64; // [rsp+68h] [rbp-50h]
  _LIST_ENTRY **v65; // [rsp+70h] [rbp-48h]
  __int64 v66; // [rsp+78h] [rbp-40h]
  unsigned int *p_OutboundQuota; // [rsp+80h] [rbp-38h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  irql = 0;
  v64 = 0;
  _a3 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v19 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
  }
  p_WaitListHead = (FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead;
  if ( SLOBYTE(This->m_ObjectFlags) < 0 && *p_WaitListHead )
  {
    FxVerifierLock::Lock(*p_WaitListHead, &irql, Provider);
    v11 = irql;
    p_m_Lock = &This->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &This->m_NPLock.m_Lock;
    v11 = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
  }
  v61 = *(_DWORD *)(Provider + 152);
  if ( SLOBYTE(This->m_ObjectFlags) < 0 && *p_WaitListHead )
    FxVerifierLock::Unlock(*p_WaitListHead, v11, v12);
  else
    KeReleaseSpinLock(p_m_Lock, v11);
  m_Globals = This->m_Globals;
  _a1 = v61;
  FxVerboseOn = m_Globals->FxVerboseOn;
  if ( v61 )
  {
    if ( FxVerboseOn )
    {
      v52 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(Provider + 10) )
        v52 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v52, v61);
      _a1 = v61;
    }
    v16 = Parameters;
    v17 = 8LL * _a1;
    Parameters[1].ReadMode &= ~0x10u;
    v16[1].MaximumInstances = _a1;
    if ( v17 <= 0xFFFFFFFF )
    {
      v18 = v17 + 60;
      if ( v18 >= 0x3C )
      {
        v19 = 0;
        v23 = (v18 + 15) & 0xFFFFFFF0;
        if ( v23 >= v18 )
        {
          v16[1].CompletionMode = v23;
          LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          if ( v23 > LowPart )
          {
            v19 = -1073741789;
            p_OutboundQuota = 0LL;
            v66 = 0LL;
          }
          else
          {
            p_OutboundQuota = &v16[1].OutboundQuota;
            v66 = (__int64)v16 + v23;
          }
          v25 = *(_DWORD *)(Provider + 192);
          v26 = v23 > LowPart;
          v27 = LowPart - v23;
          if ( v23 > LowPart )
            v27 = 0;
          v60 = v27;
          if ( v25 )
          {
            v28 = (_a1 - 1) * (unsigned __int64)((v25 + 15) & 0xFFFFFFF0);
            if ( v28 > 0xFFFFFFFF || v25 + (unsigned int)v28 < (unsigned int)v28 )
            {
              v19 = -1073741675;
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
            v19 = 0;
            if ( v27 < v25 + (unsigned int)v28 )
            {
              _a3 = v25 + v28;
              v19 = -1073741789;
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
          }
          v59 = 0;
          if ( _a1 )
          {
            v58 = v23 > LowPart;
            do
            {
              v29 = *(FxWmiIrpHandler **)(Provider + 160);
              v63 = v23;
              irql = 0;
              if ( SLOBYTE(v29->m_ObjectFlags) < 0 && v29[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
              {
                FxVerifierLock::Lock(
                  (FxVerifierLock *)v29[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
                  &irql,
                  0);
                v30 = irql;
              }
              else
              {
                v30 = KeAcquireSpinLockRaiseToDpc(&v29->m_NPLock.m_Lock);
              }
              v31 = *(_LIST_ENTRY **)(Provider + 136);
              v32 = *(_DWORD *)(Provider + 152);
              v33 = 0;
              irql = v30;
              v65 = 0LL;
              while ( v33 < v32 )
              {
                if ( v33 == v59 )
                {
                  p_Blink = &v31[-8].Blink;
                  v65 = &v31[-8].Blink;
                  v35 = _InterlockedIncrement((volatile signed __int32 *)&v31[-7].Flink + 1);
                  if ( *((char *)p_Blink + 24) < 0 )
                  {
                    v36 = (FxTagTracker *)*(p_Blink - 6);
                    if ( v36 )
                      FxTagTracker::UpdateTagHistory(
                        v36,
                        Irp,
                        498,
                        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp",
                        TagAddRef,
                        v35);
                  }
                  break;
                }
                v31 = v31->Flink;
                ++v33;
              }
              v37 = *(FxWmiIrpHandler **)(Provider + 160);
              if ( SLOBYTE(v37->m_ObjectFlags) < 0 && v37[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
                FxVerifierLock::Unlock(
                  (FxVerifierLock *)v37[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
                  irql,
                  v32);
              else
                KeReleaseSpinLock(&v37->m_NPLock.m_Lock, irql);
              if ( !v65 )
                break;
              if ( ((unsigned __int8 (__fastcall *)(_LIST_ENTRY **, __int64, _QWORD))(*v65)[4].Flink)(v65, v38, 0LL) )
              {
                tmpSize = 0;
                v19 = ((__int64 (__fastcall *)(_LIST_ENTRY **, _QWORD, __int64, unsigned int *))(*v65)[4].Blink)(
                        v65,
                        v60,
                        v66,
                        &tmpSize);
                if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741789 )
                {
                  v39 = (tmpSize + 15) & 0xFFFFFFF0;
                  if ( v39 < tmpSize )
                  {
                    v19 = -1073741675;
                    if ( *((_WORD *)v65 + 5) )
                      v49 = (const void *)((unsigned __int64)v65 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v49 = 0LL;
                    WPP_IFR_SF_qdd(
                      This->m_Globals,
                      2u,
                      0xCu,
                      0x12u,
                      WPP_FxWmiIrpHandler_cpp_Traceguids,
                      v49,
                      tmpSize,
                      -1073741675);
                  }
                  else
                  {
                    v64 = v39 - tmpSize;
                    if ( v19 < 0 || v58 )
                    {
                      v58 = 1;
                    }
                    else
                    {
                      v40 = v59;
                      v41 = p_OutboundQuota;
                      p_OutboundQuota[2 * v59 + 1] = tmpSize;
                      v41[2 * v40] = v23;
                      v66 += v39;
                    }
                    if ( v39 > v60 )
                    {
                      v42 = v60 + v23;
                      v60 = 0;
                    }
                    else
                    {
                      v42 = v39 + v23;
                      v60 -= v39;
                    }
                    v43 = -1;
                    if ( v42 >= v23 )
                      v43 = v42;
                    v23 = v43;
                    if ( v42 < v63 )
                    {
                      v19 = v42 < v63 ? 0xC0000095 : 0;
                      v53 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(Provider + 10) )
                        v53 = 0LL;
                      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v53, v19);
                    }
                    else if ( v39 + _a3 >= _a3 )
                    {
                      _a3 += v39;
                    }
                    else
                    {
                      _a3 = -1;
                      v19 = -1073741675;
                      v44 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(Provider + 10) )
                        v44 = 0LL;
                      WPP_IFR_SF_qddd(
                        This->m_Globals,
                        v39,
                        0xCu,
                        0x14u,
                        WPP_FxWmiIrpHandler_cpp_Traceguids,
                        v44,
                        -1,
                        v39,
                        -1073741675);
                    }
                  }
                }
              }
              else
              {
                v54 = p_OutboundQuota;
                if ( p_OutboundQuota )
                {
                  v55 = v59;
                  p_OutboundQuota[2 * v59 + 1] = 0;
                  v54[2 * v55] = v23;
                }
              }
              ((void (__fastcall *)(_LIST_ENTRY **, _IRP *, __int64, const char *))(*v65)[1].Flink)(
                v65,
                Irp,
                1178LL,
                "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
              if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
                goto LABEL_68;
              ++v59;
            }
            while ( v59 < v61 );
            v26 = v58;
            v16 = Parameters;
          }
          if ( v19 != -1073741789 )
          {
            if ( v19 < 0 )
            {
LABEL_68:
              v45 = (unsigned __int16 *)(Provider + 10);
              v46 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
              v48 = v46;
              if ( !*v45 )
                v48 = 0LL;
              WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v48, v19);
              _a3 = 0;
              goto LABEL_60;
            }
            if ( !v26 )
            {
              v45 = (unsigned __int16 *)(Provider + 10);
              _a3 = v23 - v16[1].CompletionMode - v64;
              v46 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
LABEL_60:
              v47 = This->m_Globals;
              if ( v47->FxVerboseOn )
              {
                if ( !*v45 )
                  v46 = 0LL;
                WPP_IFR_SF_qdD(v47, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v46, v19, _a3);
              }
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
          }
          _a3 -= v64;
          v19 = -1073741789;
          v45 = (unsigned __int16 *)(Provider + 10);
          v46 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
          v56 = v46;
          if ( !*v45 )
            v56 = 0LL;
          WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v56, -1073741789, _a3);
          goto LABEL_60;
        }
      }
    }
    v19 = -1073741675;
    v20 = *(_WORD *)(Provider + 10);
    _a2 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20 )
      _a2 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, _a2, -1073741675);
    _a3 = 0;
  }
  else
  {
    v19 = -1073741162;
    if ( FxVerboseOn )
    {
      v50 = *(_WORD *)(Provider + 10);
      v51 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v50 )
        v51 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, v51, -1073741162);
    }
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
}
