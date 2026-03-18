/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x140006560 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x14009C4A0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004A10 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140005E2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x140007164 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x140007314 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpe.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x1400076A8 (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1400078C0 (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x140007914 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r12d
  signed int TargetDeviceRelations; // ebx
  _UNICODE_STRING v7; // xmm6
  FxIoTargetRemoteOpenParams *p_m_OpenParams; // r15
  void *v9; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  void *v11; // rax
  unsigned int Tag; // ecx
  void *v13; // rax
  void *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // r10
  unsigned __int8 v16; // r8
  void *m_TargetNotifyHandle; // rcx
  __int32 v18; // r12d
  __int32 v19; // r12d
  char v20; // r12
  __int64 *AllocationSize; // rax
  _LARGE_INTEGER *v22; // rax
  _LARGE_INTEGER *p_AllocationSize; // rcx
  unsigned __int8 v24; // r12
  unsigned __int8 v25; // si
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // r8
  __int64 v28; // rdx
  __int64 v30; // rax
  unsigned __int16 v31; // r9
  const void *v32; // rcx
  FxIoTargetRemote_vtbl *v33; // rax
  FxIoTarget *v34; // rcx
  int v35; // eax
  _FX_DRIVER_GLOBALS *v36; // rcx
  const void *v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int16 v39; // r9
  FxVerifierLock *v40; // rcx
  FxVerifierLock *v41; // rcx
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  _FILE_OBJECT *TargetFileObject; // rcx
  unsigned __int64 EaBufferLength; // rdx
  _FX_DRIVER_GLOBALS **v46; // rbx
  unsigned __int16 m_ObjectSize; // dx
  const void *v48; // rdi
  int v49; // eax
  _FX_DRIVER_GLOBALS *v50; // rcx
  const void *v51; // rdx
  const void *v52; // rcx
  unsigned __int64 v53; // rdx
  const void *v54; // rdx
  bool v55; // zf
  const void *_a1; // [rsp+30h] [rbp-A1h]
  int _a2; // [rsp+38h] [rbp-99h]
  char v58; // [rsp+48h] [rbp-89h]
  unsigned int v59; // [rsp+50h] [rbp-81h]
  void *v60; // [rsp+58h] [rbp-79h] BYREF
  _BYTE pended[40]; // [rsp+60h] [rbp-71h] OVERLAPPED BYREF
  _FX_DRIVER_GLOBALS **p_m_Globals; // [rsp+88h] [rbp-49h] BYREF
  _BYTE params[80]; // [rsp+90h] [rbp-41h] OVERLAPPED BYREF
  void *retaddr; // [rsp+130h] [rbp+5Fh]
  char v65; // [rsp+140h] [rbp+6Fh]
  unsigned __int16 Length; // [rsp+140h] [rbp+6Fh]
  unsigned __int8 irql; // [rsp+148h] [rbp+77h] BYREF
  unsigned __int8 close; // [rsp+150h] [rbp+7Fh] BYREF

  memset(&params[8], 0, 0x48uLL);
  Type = OpenParams->Type;
  TargetDeviceRelations = 0;
  irql = 0;
  v58 = 0;
  v7 = 0LL;
  close = 0;
  memset(&pended[8], 0, 32);
  if ( Type != WdfIoTargetOpenReopen )
  {
    v65 = 0;
    p_m_OpenParams = (FxIoTargetRemoteOpenParams *)&params[8];
    v59 = 0;
    v9 = 0LL;
    if ( Type == WdfIoTargetOpenByName )
    {
      m_Globals = this->m_Globals;
      p_m_Globals = &this->m_Globals;
      Length = OpenParams->TargetDeviceName.Length;
      if ( (unsigned __int16)(Length + 2) < Length )
      {
        TargetDeviceRelations = -1073741675;
        v60 = *(void **)&pended[32];
        v31 = 10;
      }
      else
      {
        v11 = 0LL;
        if ( Length == 0xFFFE )
        {
          v13 = *(void **)&pended[32];
          v60 = *(void **)&pended[32];
LABEL_11:
          memmove(v13, OpenParams->TargetDeviceName.Buffer, Length);
          v14 = 0LL;
          *(_WORD *)&pended[24] = Length;
          *((_WORD *)v60 + ((unsigned __int64)Length >> 1)) = 0;
          TargetDeviceRelations = 0;
          v9 = 0LL;
          v65 = 0;
          v59 = 0;
          if ( OpenParams->EaBuffer )
          {
            EaBufferLength = OpenParams->EaBufferLength;
            v65 = 0;
            v59 = 0;
            if ( (_DWORD)EaBufferLength )
            {
              v46 = p_m_Globals;
              p_m_Globals = 0LL;
              *(_QWORD *)params = 256LL;
              if ( (*v46)->FxPoolTrackingOn )
                v14 = retaddr;
              v9 = FxPoolAllocator(
                     *v46,
                     &(*v46)->FxPoolFrameworks,
                     (FxPoolTypeOrPoolFlags *)&p_m_Globals,
                     EaBufferLength,
                     (*v46)->Tag,
                     v14);
              if ( !v9 )
              {
                m_ObjectSize = this->m_ObjectSize;
                v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !m_ObjectSize )
                  v48 = 0LL;
                WPP_IFR_SF_q(*v46, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v48);
                TargetDeviceRelations = -1073741670;
                goto LABEL_48;
              }
              v59 = OpenParams->EaBufferLength;
              memmove(v9, OpenParams->EaBuffer, v59);
              TargetDeviceRelations = 0;
              v65 = 0;
            }
          }
          v7 = *(_UNICODE_STRING *)&pended[24];
LABEL_13:
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v40 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
          {
            FxVerifierLock::Lock(v40, &irql, v4);
          }
          else
          {
            irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          }
          v15 = this->m_Globals;
          if ( this->m_State == WdfIoTargetDeleted )
          {
            _a2 = 5;
            v53 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
            v39 = 17;
            if ( !this->m_ObjectSize )
              v53 = 0LL;
            _a1 = (const void *)v53;
          }
          else
          {
            if ( this->m_OpenState == 1 )
            {
              if ( v15->FxVerboseOn )
              {
                v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v54 = 0LL;
                WPP_IFR_SF_q(v15, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v54);
              }
              KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
              this->m_OpenState = 2;
LABEL_19:
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v42 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
              {
                FxVerifierLock::Unlock(v42, irql, v16);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
              }
              if ( TargetDeviceRelations < 0 )
              {
LABEL_48:
                if ( v60 )
                  FxPoolFree(v60);
                if ( v9 )
                  FxPoolFree(v9);
                return (unsigned int)TargetDeviceRelations;
              }
              m_TargetNotifyHandle = this->m_TargetNotifyHandle;
              if ( m_TargetNotifyHandle )
                IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
              this->m_TargetNotifyHandle = 0LL;
              if ( !v65 )
                FxIoTargetRemoteOpenParams::Clear(&this->m_OpenParams);
              v18 = Type - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( !v19 )
                {
                  v20 = v65;
                  if ( !v65 )
                  {
                    p_m_OpenParams->EaBufferLength = v59;
                    p_m_OpenParams->OpenType = WdfIoTargetOpenByName;
                    p_m_OpenParams->EaBuffer = v9;
                    p_m_OpenParams->TargetDeviceName = v7;
                    p_m_OpenParams->DesiredAccess = OpenParams->DesiredAccess;
                    p_m_OpenParams->FileAttributes = OpenParams->FileAttributes;
                    p_m_OpenParams->ShareAccess = OpenParams->ShareAccess;
                    p_m_OpenParams->CreateDisposition = OpenParams->CreateDisposition;
                    p_m_OpenParams->CreateOptions = OpenParams->CreateOptions;
                    AllocationSize = OpenParams->AllocationSize;
                    if ( AllocationSize )
                    {
                      p_m_OpenParams->AllocationSize.QuadPart = *AllocationSize;
                      p_m_OpenParams->AllocationSizePointer = &p_m_OpenParams->AllocationSize;
                    }
                    else
                    {
                      p_m_OpenParams->AllocationSizePointer = 0LL;
                    }
                  }
                  TargetDeviceRelations = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, p_m_OpenParams);
                  if ( TargetDeviceRelations < 0 )
                  {
                    v58 = 1;
                    close = 1;
                  }
                  else if ( !v65 )
                  {
                    this->m_OpenParams.EaBufferLength = v59;
                    this->m_OpenParams.OpenType = WdfIoTargetOpenByName;
                    this->m_OpenParams.EaBuffer = v9;
                    this->m_OpenParams.TargetDeviceName = v7;
                    this->m_OpenParams.DesiredAccess = OpenParams->DesiredAccess;
                    this->m_OpenParams.FileAttributes = OpenParams->FileAttributes;
                    this->m_OpenParams.ShareAccess = OpenParams->ShareAccess;
                    this->m_OpenParams.CreateDisposition = OpenParams->CreateDisposition;
                    this->m_OpenParams.CreateOptions = OpenParams->CreateOptions;
                    v22 = (_LARGE_INTEGER *)OpenParams->AllocationSize;
                    if ( v22 )
                    {
                      p_AllocationSize = &this->m_OpenParams.AllocationSize;
                      this->m_OpenParams.AllocationSize = *v22;
                    }
                    else
                    {
                      p_AllocationSize = 0LL;
                    }
                    this->m_OpenParams.AllocationSizePointer = p_AllocationSize;
                    v9 = 0LL;
                    v60 = (void *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
                  }
                  goto LABEL_36;
                }
                v55 = v19 == 2;
                v20 = v65;
                if ( !v55 )
                {
LABEL_36:
                  *(_QWORD *)&pended[16] = &pended[8];
                  *(_QWORD *)&pended[8] = &pended[8];
                  if ( TargetDeviceRelations < 0 )
                  {
                    v24 = v58;
                  }
                  else
                  {
                    TargetDeviceRelations = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
                    if ( TargetDeviceRelations < 0 || !this->m_TargetFileObject )
                      goto LABEL_39;
                    if ( !v20 )
                    {
                      this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
                      this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
                      this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
                    }
                    v49 = FxIoTargetRemote::RegisterForPnpNotification(this);
                    TargetDeviceRelations = v49;
                    if ( v49 < 0 )
                    {
                      v50 = this->m_Globals;
                      if ( v50->FxVerboseOn )
                      {
                        v51 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                        if ( !this->m_ObjectSize )
                          v51 = 0LL;
                        WPP_IFR_SF_qd(v50, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v51, v49);
                      }
                      v24 = close;
                      TargetDeviceRelations = 0;
                      this->m_EvtQueryRemove.m_Method = 0LL;
                      this->m_EvtRemoveCanceled.m_Method = 0LL;
                      this->m_EvtRemoveComplete.m_Method = 0LL;
                    }
                    else
                    {
LABEL_39:
                      v24 = close;
                    }
                  }
                  if ( SLOBYTE(this->m_ObjectFlags) < 0
                    && (v41 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
                  {
                    FxVerifierLock::Lock(v41, &irql, 0);
                    v25 = irql;
                  }
                  else
                  {
                    v25 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
                  }
                  if ( TargetDeviceRelations >= 0 )
                  {
                    this->m_TargetStackSize = this->m_TargetDevice->StackSize;
                    this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
                    v33 = this->__vftable;
                    this->m_OpenState = 3;
                    v35 = v33->GotoStartState(v34, (_LIST_ENTRY *)&pended[8], 0);
                    TargetDeviceRelations = v35;
                    if ( v35 < 0 )
                    {
                      v36 = this->m_Globals;
                      if ( v36->FxVerboseOn )
                      {
                        v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                        if ( !this->m_ObjectSize )
                          v37 = 0LL;
                        WPP_IFR_SF_qd(v36, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v37, v35);
                      }
                      v24 = 1;
                    }
                  }
                  else
                  {
                    this->m_OpenState = 1;
                  }
                  KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
                  if ( SLOBYTE(this->m_ObjectFlags) < 0
                    && (v43 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
                  {
                    FxVerifierLock::Unlock(v43, v25, v26);
                  }
                  else
                  {
                    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v25);
                  }
$Done:
                  if ( TargetDeviceRelations < 0 )
                  {
                    if ( v24 )
                      FxIoTargetRemote::Close(this, 2, v27);
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v28 = *(_QWORD *)&pended[8];
                      if ( *(_BYTE **)&pended[8] == &pended[8] )
                        break;
                      if ( *(_BYTE **)(*(_QWORD *)&pended[8] + 8LL) != &pended[8]
                        || (v30 = **(_QWORD **)&pended[8],
                            *(_QWORD *)(**(_QWORD **)&pended[8] + 8LL) != *(_QWORD *)&pended[8]) )
                      {
                        __fastfail(3u);
                      }
                      *(_QWORD *)&pended[8] = **(_QWORD **)&pended[8];
                      *(_QWORD *)(v30 + 8) = &pended[8];
                      FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)(v28 - 120));
                    }
                  }
                  goto LABEL_48;
                }
              }
              else
              {
                this->m_TargetDevice = OpenParams->TargetDeviceObject;
                TargetFileObject = OpenParams->TargetFileObject;
                this->m_TargetFileObject = TargetFileObject;
                this->m_TargetHandle = 0LL;
                if ( TargetFileObject )
                  ObfReferenceObject(TargetFileObject);
                v20 = v65;
              }
              TargetDeviceRelations = 0;
              goto LABEL_36;
            }
            _a2 = this->m_OpenState;
            v38 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
            v39 = 18;
            if ( !this->m_ObjectSize )
              v38 = 0LL;
            _a1 = (const void *)v38;
          }
          WPP_IFR_SF_qd(v15, 2u, 0xEu, v39, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, _a2);
          TargetDeviceRelations = -1073741436;
          goto LABEL_19;
        }
        if ( *(_QWORD *)&pended[32] )
        {
          FxPoolFree(*(void **)&pended[32]);
          v11 = 0LL;
          *(_QWORD *)&pended[24] = 0LL;
        }
        Tag = m_Globals->Tag;
        v60 = 0LL;
        *(_QWORD *)pended = 256LL;
        if ( m_Globals->FxPoolTrackingOn )
          v11 = retaddr;
        v13 = FxPoolAllocator(
                m_Globals,
                &m_Globals->FxPoolFrameworks,
                (FxPoolTypeOrPoolFlags *)&v60,
                (unsigned __int16)(Length + 2),
                Tag,
                v11);
        v60 = v13;
        *(_QWORD *)&pended[32] = v13;
        if ( v13 )
        {
          *(_WORD *)&pended[26] = Length + 2;
          goto LABEL_11;
        }
        TargetDeviceRelations = -1073741670;
        v31 = 11;
      }
      WPP_IFR_SF_D(m_Globals, 2u, 2u, v31, WPP_stringutil_cpp_Traceguids, TargetDeviceRelations);
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v32);
      v24 = 0;
      v27 = 0;
      v9 = 0LL;
      goto $Done;
    }
LABEL_103:
    v60 = (void *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_13;
  }
  if ( this->m_OpenParams.OpenType == WdfIoTargetOpenByName )
  {
    p_m_OpenParams = &this->m_OpenParams;
    v65 = 1;
    Type = this->m_OpenParams.OpenType;
    v9 = 0LL;
    v59 = 0;
    goto LABEL_103;
  }
  v52 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v52 = 0LL;
  TargetDeviceRelations = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, v52, -1073741808);
  return (unsigned int)TargetDeviceRelations;
}
