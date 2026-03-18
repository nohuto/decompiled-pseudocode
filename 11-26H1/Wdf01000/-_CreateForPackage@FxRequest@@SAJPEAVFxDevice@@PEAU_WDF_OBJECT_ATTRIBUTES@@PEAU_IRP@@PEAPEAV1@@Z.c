/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x14000B170
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1400A1874 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x14000D1D0 (FxAllocateFromNPagedLookasideList.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1400375F8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x14008285C (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     FxLiveDump @ 0x140083910 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083E48 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FX_POOL *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        FX_POOL *Irp,
        FxRequest **Request)
{
  FxPkgPnp *m_Lock; // rax
  signed int v5; // esi
  _FX_DRIVER_GLOBALS *Flink; // r13
  _WDF_OBJECT_ATTRIBUTES *p_Blink; // r15
  FX_POOL_TRACKER *v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rdx
  FX_POOL_TRACKER *v13; // rbx
  FX_POOL_TRACKER *v14; // rdi
  FX_POOL **p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FX_POOL *v18; // rax
  FX_POOL *v19; // rdx
  _LIST_ENTRY *Blink; // rcx
  int Flink_low; // r8d
  int v22; // eax
  FX_POOL *v23; // rax
  __int16 v24; // cx
  unsigned __int16 *flags; // rdi
  unsigned __int64 ParentObject; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void (__fastcall *v30)(void *); // rcx
  void (__fastcall *v31)(void *); // rcx
  _LIST_ENTRY *v32; // rdi
  signed int _a1; // ebp
  _WDF_BUGCHECK_CODES v34; // edx
  _FX_DRIVER_GLOBALS *v35; // rcx
  const char *v36; // r15
  KIRQL v37; // r12
  KIRQL v38; // r15
  _LIST_ENTRY *v39; // rdx
  _LIST_ENTRY *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _LIST_ENTRY *v45; // rdi
  FX_POOL *NonPagedBytes; // rax
  KIRQL v48; // r13
  KIRQL v49; // r12
  unsigned __int16 **v50; // rdx
  unsigned __int16 *v51; // rax
  __int64 v52; // rax
  unsigned __int8 v53; // dl
  unsigned int v54; // r8d
  unsigned __int16 v55; // r9
  KIRQL v56; // al
  KIRQL v57; // al
  _FX_DRIVER_GLOBALS *v58; // rdx
  signed int v59; // ebp
  _WDF_BUGCHECK_CODES v60; // edx
  _FX_DRIVER_GLOBALS *v61; // rcx
  const char *DriverName; // r15
  KIRQL v63; // dl
  KIRQL v64; // dl
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxVerifierLock **p_VerifierLock; // [rsp+50h] [rbp-48h] BYREF
  __int16 v67; // [rsp+58h] [rbp-40h]
  __int16 v68; // [rsp+5Ah] [rbp-3Eh]
  int v69; // [rsp+5Ch] [rbp-3Ch]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+A0h] [rbp+8h] BYREF
  FxRequest **v72; // [rsp+B8h] [rbp+20h]

  v72 = Request;
  m_Lock = (FxPkgPnp *)Device[4].NonPagedLock.m_Lock;
  v5 = 0;
  Flink = (_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink;
  *Request = 0LL;
  p_Blink = RequestAttributes;
  if ( m_Lock && m_Lock->m_Type == 4354 && BYTE3(m_Lock[1].m_DisposeSingleEntry.Next) )
  {
    v13 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&Device[2].NonPagedAllocations);
    if ( v13 )
      goto LABEL_5;
    v11 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Device[3].NonPagedHead.Flink)(
                               *((unsigned int *)&Device[3].NonPagedLock.m_DbgFlagIsInitialized + 1),
                               HIDWORD(Device[3].NonPagedLock.m_Lock),
                               LODWORD(Device[3].NonPagedLock.m_Lock));
  }
  else
  {
    v11 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&Device[2].NonPagedAllocations,
                               (unsigned __int64)RequestAttributes);
  }
  v13 = v11;
LABEL_5:
  if ( !v13 )
    goto LABEL_106;
  if ( Flink->FxPoolTrackingOn )
  {
    v14 = v13 + 1;
    FxPoolInsertNonPagedAllocateTracker(
      &Flink->FxPoolFrameworks,
      v13,
      (unsigned __int64)Device[3].PagedHead.Flink,
      Flink->Tag,
      retaddr);
  }
  else
  {
    v14 = v13;
  }
  v14->Link.Flink = &v13->Link;
  p_Pool = &v14->Pool;
  v14->Link.Blink = &Flink->Linkage;
  if ( !RequestAttributes )
    p_Blink = (_WDF_OBJECT_ATTRIBUTES *)&Device[3].PagedHead.Blink;
  if ( Flink->FxVerifierHandle )
  {
    *(_OWORD *)p_Pool = 0LL;
    *(_OWORD *)&v14->Size = 0LL;
    *(_OWORD *)&v14->CallersAddress = 0LL;
    LODWORD(v14->CallersAddress) = 1146058822;
    p_Pool = (FX_POOL **)&v14[1];
  }
  p_Pool[47] = 0LL;
  p_Pool[48] = 0LL;
  p_Pool[49] = 0LL;
  p_Pool[50] = 0LL;
  p_Pool[51] = 0LL;
  p_Pool[46] = (FX_POOL *)p_Pool;
  if ( p_Blink )
  {
    ContextTypeInfo = p_Blink->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = p_Blink->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(p_Pool + 52, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    p_Pool[50] = (FX_POOL *)p_Blink->ContextTypeInfo;
  }
  if ( !p_Pool )
  {
LABEL_106:
    WPP_IFR_SF_D(
      (_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink,
      2u,
      0x10u,
      0xAu,
      WPP_FxRequest_cpp_Traceguids,
      0xC000009A);
    return 3221225626LL;
  }
  p_Pool[2] = (FX_POOL *)Device->NonPagedHead.Flink;
  *p_Pool = (FX_POOL *)FxObject::`vftable';
  *((_DWORD *)p_Pool + 2) = 24121352;
  p_Pool[7] = 0LL;
  *((_BYTE *)p_Pool + 48) = 1;
  *((_DWORD *)p_Pool + 3) = 1;
  *((_DWORD *)p_Pool + 6) = 0x10000;
  p_Pool[8] = 0LL;
  p_Pool[5] = (FX_POOL *)(p_Pool + 4);
  p_Pool[4] = (FX_POOL *)(p_Pool + 4);
  p_Pool[10] = (FX_POOL *)(p_Pool + 9);
  p_Pool[9] = (FX_POOL *)(p_Pool + 9);
  v18 = p_Pool[2];
  p_Pool[11] = 0LL;
  p_Pool[12] = 0LL;
  if ( *(&v18[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
    FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v12, 0);
  *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
  p_Pool[14] = 0LL;
  *((_BYTE *)p_Pool + 104) = 1;
  if ( *((char *)p_Pool + 24) < 0 )
  {
    v58 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
    if ( v58->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v58, (FxObject *)p_Pool);
      *(p_Pool - 5) = (FX_POOL *)VerifierLock;
    }
  }
  p_Pool[19] = Irp;
  p_Pool[23] = 0LL;
  p_Pool[24] = 0LL;
  *((_BYTE *)p_Pool + 214) = Irp == 0LL;
  *((_WORD *)p_Pool + 106) = 0;
  *((_BYTE *)p_Pool + 238) = 1;
  p_Pool[20] = 0LL;
  p_Pool[25] = 0LL;
  *((_BYTE *)p_Pool + 215) = 0;
  *((_BYTE *)p_Pool + 236) = 0;
  p_Pool[21] = 0LL;
  p_Pool[22] = 0LL;
  p_Pool[16] = (FX_POOL *)(p_Pool + 15);
  p_Pool[15] = (FX_POOL *)(p_Pool + 15);
  p_Pool[18] = 0LL;
  p_Pool[27] = (FX_POOL *)216;
  p_Pool[28] = 0LL;
  *((_DWORD *)p_Pool + 52) = 0;
  p_Pool[30] = 0LL;
  *((_DWORD *)p_Pool + 58) = 232;
  *((_BYTE *)p_Pool + 237) = 0;
  p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
  p_Pool[33] = 0LL;
  p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
  p_Pool[35] = 0LL;
  p_Pool[31] = 0LL;
  *((_BYTE *)p_Pool + 353) = 0;
  p_Pool[37] = (FX_POOL *)(p_Pool + 36);
  p_Pool[36] = (FX_POOL *)(p_Pool + 36);
  p_Pool[39] = (FX_POOL *)(p_Pool + 38);
  p_Pool[38] = (FX_POOL *)(p_Pool + 38);
  p_Pool[41] = (FX_POOL *)(p_Pool + 40);
  p_Pool[40] = (FX_POOL *)(p_Pool + 40);
  *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
  *((_BYTE *)p_Pool + 352) = 0;
  *((_WORD *)p_Pool + 177) = 0;
  p_Pool[42] = 0LL;
  p_Pool[43] = 0LL;
  p_Pool[12] = (FX_POOL *)Device->PagedHead.Flink;
  if ( Irp )
  {
    v19 = p_Pool[19];
    Blink = v19[1].NonPagedHead.Blink;
    Flink_low = LOBYTE(Blink->Flink);
    if ( Flink_low != 15 )
    {
      if ( Flink_low == 3 || Flink_low == 4 )
      {
        if ( HIDWORD(Device[1].PagedLock.m_Lock.Owner) == 1 )
        {
          if ( v19->PagedLock.m_Lock.Event.Header.Type )
            goto LABEL_32;
          NonPagedBytes = (FX_POOL *)v19->NonPagedBytes;
        }
        else
        {
          if ( HIDWORD(Device[1].PagedLock.m_Lock.Owner) != 2 )
            goto LABEL_32;
          NonPagedBytes = (FX_POOL *)v19->NonPagedHead.Blink;
        }
        p_Pool[33] = NonPagedBytes;
        goto LABEL_28;
      }
      if ( Flink_low != 14 )
        goto LABEL_32;
    }
    v22 = (__int64)Blink[1].Blink & 3;
    if ( v22 == 3 )
    {
      if ( (_BYTE)Flink_low != 15 && v19->PagedLock.m_Lock.Event.Header.Type )
        goto LABEL_32;
      p_Pool[33] = (FX_POOL *)Blink[2].Flink;
      v23 = (FX_POOL *)v19->NonPagedBytes;
    }
    else
    {
      if ( v22 )
      {
        if ( (unsigned int)(v22 - 1) <= 1 )
          p_Pool[33] = (FX_POOL *)v19->NonPagedHead.Blink;
        goto LABEL_28;
      }
      p_Pool[33] = (FX_POOL *)v19->NonPagedHead.Blink;
      v23 = (FX_POOL *)v19->NonPagedHead.Blink;
    }
    p_Pool[35] = v23;
LABEL_28:
    if ( p_Pool[33] )
      *((_BYTE *)p_Pool + 235) |= 1u;
    if ( p_Pool[35] )
      *((_BYTE *)p_Pool + 235) |= 2u;
  }
LABEL_32:
  v24 = *((_WORD *)p_Pool + 5);
  if ( !BYTE1(Device->NonPagedHead.Flink[21].Blink) )
  {
    if ( !v24 )
    {
      v5 = -1073741816;
      goto LABEL_80;
    }
    if ( RequestAttributes && RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
    {
      v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
      *((_WORD *)p_Pool + 12) |= 0x11u;
      KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v57);
    }
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
    if ( *((_WORD *)p_Pool + 13) == 1 )
    {
      if ( p_Pool[8] )
      {
        v63 = v37;
LABEL_135:
        KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v63);
        v5 = -1071644147;
        goto LABEL_80;
      }
      v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention);
      if ( WORD1(Device->NonPagedHead.Blink) == 1 )
      {
        v39 = *(_LIST_ENTRY **)&Device->PagedLock.m_Lock.Count;
        v40 = (_LIST_ENTRY *)(p_Pool + 9);
        if ( (MxPagedLockNoDynam *)v39->Flink == &Device->PagedLock )
        {
          v40->Flink = (_LIST_ENTRY *)&Device->PagedLock;
          p_Pool[10] = (FX_POOL *)v39;
          v39->Flink = v40;
          *(_QWORD *)&Device->PagedLock.m_Lock.Count = v40;
          if ( !p_Pool[12] )
            p_Pool[12] = (FX_POOL *)Device->PagedHead.Flink;
          KeReleaseSpinLock((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention, v38);
          p_Pool[8] = Device;
          KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v37);
          if ( RequestAttributes )
          {
            v41 = *((unsigned __int16 *)p_Pool + 5);
            if ( (_WORD)v41 )
              v42 = (__int64)p_Pool + v41;
            else
              v42 = 0LL;
            EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
            if ( EvtDestroyCallback )
              *(_QWORD *)(v42 + 24) = EvtDestroyCallback;
            EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
            if ( EvtCleanupCallback )
            {
              *(_QWORD *)(v42 + 16) = EvtCleanupCallback;
              *((_WORD *)p_Pool + 12) |= 0x400u;
            }
          }
          *((_WORD *)p_Pool + 12) |= 8u;
          v45 = p_Pool[2][2].NonPagedHead.Flink;
          if ( !v45 || LODWORD(v45->Flink) )
            goto LABEL_80;
          if ( *((_WORD *)p_Pool + 4) == 4098 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)&v45[1].Flink + 1) >= 2 )
              _InterlockedAdd((volatile signed __int32 *)&v45->Blink + 1, (unsigned int)v45->Blink);
          }
          else if ( *((_WORD *)p_Pool + 4) == 4104 && *((_BYTE *)p_Pool + 213) != 2 )
          {
            goto LABEL_80;
          }
          *((_WORD *)p_Pool + 12) |= 0x40u;
          v59 = _InterlockedIncrement((volatile signed __int32 *)&v45[1]);
          if ( v59 >= SHIDWORD(v45->Blink)
            && !KeGetCurrentIrql()
            && !_InterlockedCompareExchange((volatile signed __int32 *)v45, 1, 0) )
          {
            WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)p_Pool[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v59);
            if ( BYTE4(v45->Flink) )
              DbgBreakPoint();
            v61 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
            DriverName = v61->Public.DriverName;
            FxLiveDump(v61, v60, (unsigned __int64)v61->Public.DriverName, v59);
            if ( v59 >= SHIDWORD(v45->Blink) )
              MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, v59, 0);
          }
          goto LABEL_80;
        }
LABEL_141:
        __fastfail(3u);
      }
      FxObject::TraceDroppedEvent((FxObject *)Device, FxObjectDroppedEventAddChildObjectInternal);
      KeReleaseSpinLock((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention, v38);
    }
    else
    {
      FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
    }
    v64 = v37;
LABEL_137:
    KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v64);
    v5 = -1073741738;
    goto LABEL_80;
  }
  VerifierLock = 0LL;
  flags = 0LL;
  if ( !v24 )
  {
    v5 = -1073741816;
    goto LABEL_80;
  }
  if ( RequestAttributes )
  {
    if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
    {
      v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
      *((_WORD *)p_Pool + 12) |= 0x11u;
      KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v56);
      flags = (unsigned __int16 *)VerifierLock;
    }
    ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      LOWORD(v27) = 0;
      flags = (unsigned __int16 *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (ParentObject & 1) != 0 )
      {
        v27 = *flags;
        flags = (unsigned __int16 *)((char *)flags - v27);
      }
      if ( flags[4] == 4096 )
      {
        VerifierLock = (FxVerifierLock *)flags;
      }
      else
      {
        v68 = v27;
        p_VerifierLock = &VerifierLock;
        v69 = 0;
        v52 = *(_QWORD *)flags;
        v67 = 4096;
        if ( (*(int (__fastcall **)(unsigned __int16 *, FxVerifierLock ***))(v52 + 40))(flags, &p_VerifierLock) < 0 )
        {
          WPP_IFR_SF_qDqD(
            *((_FX_DRIVER_GLOBALS **)flags + 2),
            v53,
            v54,
            v55,
            traceGuid,
            (const void *)ParentObject,
            0x1000u,
            flags,
            flags[4]);
          FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
        }
        flags = (unsigned __int16 *)VerifierLock;
      }
    }
  }
  if ( !flags )
    goto LABEL_43;
  v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
  if ( *((_WORD *)p_Pool + 13) != 1 )
  {
    FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
    v64 = v48;
    goto LABEL_137;
  }
  if ( p_Pool[8] )
  {
    v63 = v48;
    goto LABEL_135;
  }
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)flags + 7);
  if ( flags[13] != 1 )
  {
    FxObject::TraceDroppedEvent((FxObject *)flags, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock((PKSPIN_LOCK)flags + 7, v49);
    v64 = v48;
    goto LABEL_137;
  }
  v50 = (unsigned __int16 **)*((_QWORD *)flags + 5);
  v51 = (unsigned __int16 *)(p_Pool + 9);
  if ( *v50 != flags + 16 )
    goto LABEL_141;
  *(_QWORD *)v51 = flags + 16;
  p_Pool[10] = (FX_POOL *)v50;
  *v50 = v51;
  *((_QWORD *)flags + 5) = v51;
  if ( !p_Pool[12] )
    p_Pool[12] = (FX_POOL *)*((_QWORD *)flags + 12);
  KeReleaseSpinLock((PKSPIN_LOCK)flags + 7, v49);
  p_Pool[8] = (FX_POOL *)flags;
  KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v48);
LABEL_43:
  if ( RequestAttributes )
  {
    v28 = *((unsigned __int16 *)p_Pool + 5);
    if ( (_WORD)v28 )
      v29 = (__int64)p_Pool + v28;
    else
      v29 = 0LL;
    v30 = RequestAttributes->EvtDestroyCallback;
    if ( v30 )
      *(_QWORD *)(v29 + 24) = v30;
    v31 = RequestAttributes->EvtCleanupCallback;
    if ( v31 )
    {
      *(_QWORD *)(v29 + 16) = v31;
      *((_WORD *)p_Pool + 12) |= 0x400u;
    }
  }
  *((_WORD *)p_Pool + 12) |= 8u;
  v32 = p_Pool[2][2].NonPagedHead.Flink;
  if ( !v32 || LODWORD(v32->Flink) )
    goto LABEL_80;
  if ( *((_WORD *)p_Pool + 4) == 4098 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&v32[1].Flink + 1) >= 2 )
      _InterlockedAdd((volatile signed __int32 *)&v32->Blink + 1, (unsigned int)v32->Blink);
    goto LABEL_55;
  }
  if ( *((_WORD *)p_Pool + 4) != 4104 || *((_BYTE *)p_Pool + 213) == 2 )
  {
LABEL_55:
    *((_WORD *)p_Pool + 12) |= 0x40u;
    _a1 = _InterlockedIncrement((volatile signed __int32 *)&v32[1]);
    if ( _a1 >= SHIDWORD(v32->Blink)
      && !KeGetCurrentIrql()
      && !_InterlockedCompareExchange((volatile signed __int32 *)v32, 1, 0) )
    {
      WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)p_Pool[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
      if ( BYTE4(v32->Flink) )
        DbgBreakPoint();
      v35 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
      v36 = v35->Public.DriverName;
      FxLiveDump(v35, v34, (unsigned __int64)v35->Public.DriverName, _a1);
      if ( _a1 >= SHIDWORD(v32->Blink) )
        MicrosoftTelemetryAssertTriggeredArgsKM(v36, _a1, 0);
    }
  }
LABEL_80:
  if ( v5 < 0 )
  {
    WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v5);
    FxObject::DeleteFromFailedCreate((FxObject *)p_Pool);
  }
  else
  {
    *v72 = (FxRequest *)p_Pool;
  }
  return (unsigned int)v5;
}
