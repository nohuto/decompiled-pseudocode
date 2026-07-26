/*
 * XREFs of NdisEnumerateFilterModules @ 0x14000B080
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  NDIS_STATUS v5; // ebx
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  Rtl::KString *v7; // r12
  NDIS_HANDLE v8; // r13
  ULONG v9; // edi
  ULONG v10; // r14d
  ULONG v11; // r15d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  Ndis::BindEngine *p_BindEngine; // r14
  KIRQL v14; // al
  struct _NDIS_MINIPORT_BLOCK *HighestFilter; // rcx
  int v16; // edx
  struct _NDIS_MINIPORT_BLOCK *v18; // rbp
  unsigned __int8 v19; // r13
  _NDIS_FILTER_BLOCK *v20; // rdi
  KIRQL v21; // cl
  struct _NDIS_MINIPORT_BLOCK *v22; // rax
  ULONG v23; // esi
  _NDIS_BIND_PATHS *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _NDIS_FILTER_BLOCK *v27; // r8
  Rtl::KString v28; // xmm0
  Rtl::KString *value; // rax
  struct _NDIS_MINIPORT_BLOCK *v30; // rdi
  unsigned int v31; // eax
  int v32; // eax
  _NDIS_FILTER_BLOCK *v33; // rdx
  Rtl::KString *v34; // rax
  Rtl::KString *v35; // rdx
  unsigned int v36; // eax
  char *v37; // r12
  __int64 Length; // rcx
  __m128i v39; // xmm0
  __m128i *v40; // rax
  unsigned int v41; // eax
  _NDIS_FILTER_BLOCK *v42; // rdx
  unsigned __int16 *v43; // rax
  const void **v44; // rdx
  unsigned __int8 v45[4]; // [rsp+40h] [rbp-78h] BYREF
  ULONG v46; // [rsp+44h] [rbp-74h]
  unsigned int v47; // [rsp+48h] [rbp-70h]
  struct _NDIS_MINIPORT_BLOCK *v48; // [rsp+50h] [rbp-68h] BYREF
  _NDIS_FILTER_BLOCK *i; // [rsp+58h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v50; // [rsp+60h] [rbp-58h]
  char v51; // [rsp+C0h] [rbp+8h]
  char *v52; // [rsp+C8h] [rbp+10h]

  v52 = (char *)InterfaceBuffer;
  v51 = (char)NdisHandle;
  v5 = 0;
  v6 = 0LL;
  v48 = 0LL;
  v47 = 0;
  v7 = (Rtl::KString *)((char *)InterfaceBuffer + InterfaceBufferLength);
  i = 0LL;
  v8 = NdisHandle;
  v9 = InterfaceBufferLength;
  v10 = InterfaceBufferLength;
  v46 = InterfaceBufferLength;
  v45[0] = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InterfaceBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InterfaceBuffer,
      13,
      41,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)NdisHandle);
  }
  switch ( *(_BYTE *)v8 )
  {
    case 5:
      v26 = *((_QWORD *)v8 + 2);
      v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v8 + 4);
      if ( *(_BYTE *)(v26 + 100) > 6u || *(_BYTE *)(v26 + 100) == 6 && *(_BYTE *)(v26 + 101) >= 0x1Eu )
        goto LABEL_47;
      break;
    case 0x11:
      v6 = (struct _NDIS_MINIPORT_BLOCK *)v8;
      if ( *((_BYTE *)v8 + 32) > 6u || *((_BYTE *)v8 + 32) == 6 && *((_BYTE *)v8 + 33) >= 0x1Eu )
        goto LABEL_47;
      break;
    case 0x12:
      v25 = *((_QWORD *)v8 + 3);
      v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v8 + 2);
      if ( *(_BYTE *)(v25 + 56) > 6u || *(_BYTE *)(v25 + 56) == 6 && *(_BYTE *)(v25 + 57) >= 0x1Eu )
LABEL_47:
        v45[0] = 2;
      break;
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = 80;
  if ( !v6 )
  {
    v5 = -1073741811;
    goto LABEL_43;
  }
  if ( v9 >= 0x50 )
  {
    v10 = v9 - 80;
    v46 = v9 - 80;
    *(_QWORD *)v52 = 5243264LL;
    *((_DWORD *)v52 + 3) = 16;
    *((_DWORD *)v52 + 2) = 0;
    i = (_NDIS_FILTER_BLOCK *)(v52 + 16);
  }
  BindPaths = v6->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v48, 0, MPREF_LWF_ENUMAPI);
    if ( v48 )
    {
      v18 = v48;
      v19 = v45[0];
      v20 = i;
      v50 = v48;
      v46 = v48->BindPaths->Number - 1;
      do
      {
        if ( !v18->BindPaths )
          v46 = 0;
        Ndis::BindEngine::BeginPolicyUpdates(&v18->BindEngine);
        v21 = KeAcquireSpinLockRaiseToDpc(&v18->Lock);
        v45[0] = v21;
        v18->MiniportThread = KeGetCurrentThread();
        for ( i = v18->HighestFilter; i; i = i->LowerFilter )
        {
          v18->MiniportThread = 0LL;
          KeReleaseSpinLock(&v18->Lock, v21);
          v27 = i;
          v28 = 0LL;
          value = i->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( value )
            v28 = *value;
          v31 = v28.MaximumLength + i->FilterInstanceName.__ptr_.__value_->MaximumLength + 64;
          v11 += v31;
          v47 = v31;
          if ( v10 >= v31 )
          {
            v20->Header.Type = 0x80;
            v20->Header.Revision = v19;
            v20->Header.Size = 80;
            HIDWORD(v20->NextFilter) = (v27->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
            LODWORD(v20->NextFilter) = 2 - ((v27->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
            LODWORD(v20->FilterDriver) = v27->IfIndex;
            v20->FilterModuleContext = (void *)v27->IfBlock->NetLuid.Value;
            *((_DWORD *)&v20->Header + 1) = 2;
            *(Rtl::KString *)&v20->Miniport = v28;
            if ( v19 >= 2u )
            {
              v32 = 2;
              if ( !v27->Characteristics.SendNetBufferListsHandler )
              {
                *((_DWORD *)&v20->Header + 1) = 6;
                v32 = 6;
              }
              if ( !v27->Characteristics.ReturnNetBufferListsHandler )
                *((_DWORD *)&v20->Header + 1) = v32 | 8;
            }
            WORD1(v20->FilterFriendlyName) = v27->FilterInstanceName.__ptr_.__value_->MaximumLength;
            LOWORD(v20->FilterFriendlyName) = v27->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v7 = (Rtl::KString *)((char *)v7 - v27->FilterInstanceName.__ptr_.__value_->MaximumLength);
            *(_QWORD *)&v20->Flags = v7;
            memmove(
              v7,
              v27->FilterInstanceName.__ptr_.__value_->Buffer,
              v27->FilterInstanceName.__ptr_.__value_->MaximumLength);
            v33 = i;
            v34 = i->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            if ( v34 )
            {
              v7 = (Rtl::KString *)((char *)v7 - v34->MaximumLength);
              LOWORD(v20->Miniport) = WORD1(v20->Miniport);
              v20->FilterInstanceName.__ptr_.__value_ = v7;
              v35 = v33->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
              memmove(v7, v35->Buffer, v35->MaximumLength);
            }
            ++*((_DWORD *)v52 + 2);
            v20 = (_NDIS_FILTER_BLOCK *)((char *)v20 + 64);
            v10 -= v47;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v18, v45);
          v21 = v45[0];
        }
        v18->MiniportThread = 0LL;
        KeReleaseSpinLock(&v18->Lock, v21);
        Ndis::BindEngine::EndPolicyUpdates(&v18->BindEngine);
        Ndis::BindEngine::ApplyBindChanges(&v18->BindEngine, RunAsynchronous, 0);
        if ( (v18->PnPFlags & 0x8000000) != 0 )
        {
          v36 = v18->FilterClass.__ptr_.__value_->Length + v18->MiniportName.Length + 80;
          v11 += v36;
          v47 = v36;
          if ( v10 >= v36 )
          {
            v20->Header = (_NDIS_OBJECT_HEADER)5243264;
            HIDWORD(v20->NextFilter) = 1;
            LODWORD(v20->NextFilter) = 2;
            LODWORD(v20->FilterDriver) = v18->IfIndex;
            v20->FilterModuleContext = (void *)v18->NetLuid.Value;
            *((_DWORD *)&v20->Header + 1) = 1;
            *(Rtl::KString *)&v20->Miniport = *v18->FilterClass.__ptr_.__value_;
            WORD1(v20->FilterFriendlyName) = v18->MiniportName.Length;
            LOWORD(v20->FilterFriendlyName) = v18->MiniportName.Length;
            v37 = (char *)v7 - v18->MiniportName.Length;
            *(_QWORD *)&v20->Flags = v37;
            memmove(v37, v18->MiniportName.Buffer, v18->MiniportName.Length);
            Length = v18->FilterClass.__ptr_.__value_->Length;
            v7 = (Rtl::KString *)&v37[-Length];
            if ( (_WORD)Length )
            {
              v20->FilterInstanceName.__ptr_.__value_ = v7;
              memmove(v7, v18->FilterClass.__ptr_.__value_->Buffer, v18->FilterClass.__ptr_.__value_->Length);
            }
            ++*((_DWORD *)v52 + 2);
            v20 = (_NDIS_FILTER_BLOCK *)((char *)v20 + 64);
            v10 -= v47;
          }
        }
        v22 = v50;
        if ( v18 != v50 )
        {
          ndisDereferenceMiniport(v18, MPREF_LWF_ENUMAPI);
          v22 = v50;
        }
        v23 = v46;
        if ( !v46 )
          break;
        v24 = v22->BindPaths;
        --v46;
        ndisReferenceMiniportByName(&v24->Paths[v23 - 1], &v48, 1u, MPREF_LWF_ENUMAPI);
        v18 = v48;
      }
      while ( v48 );
      ndisDereferenceMiniport(v50, MPREF_LWF_ENUMAPI);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v9 = InterfaceBufferLength;
      LOBYTE(v8) = v51;
      goto LABEL_12;
    }
    v5 = -1073676282;
LABEL_43:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_15;
  }
  p_BindEngine = &v6->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&v6->BindEngine);
  v14 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
  HighestFilter = (struct _NDIS_MINIPORT_BLOCK *)v6->HighestFilter;
  v45[0] = v14;
  v50 = HighestFilter;
  if ( HighestFilter )
  {
    LODWORD(v8) = v46;
    v30 = v50;
    i = (_NDIS_FILTER_BLOCK *)((char *)i + 2);
    do
    {
      v6->MiniportThread = 0LL;
      KeReleaseSpinLock(&v6->Lock, v14);
      v39 = 0LL;
      v40 = (__m128i *)*((_QWORD *)v30->BaseMiniport->WakeUpDpcTimer.Dpc.DpcData + 6);
      if ( v40 )
        v39 = *v40;
      v41 = v47 + (unsigned __int16)_mm_cvtsi128_si32(v39) + *v30->Reserved4.Buffer + 80;
      v11 += v41;
      v47 = v41;
      if ( (unsigned int)v8 >= v41 )
      {
        v42 = i;
        *(_DWORD *)((char *)&i[-1].Triage.__ptr_.__value_ + 6) = 5243264;
        *(_DWORD *)((char *)&v42->NextFilter + 2) = (*((_DWORD *)v30->BaseMiniport->WakeUpDpcTimer.Dpc.DpcData + 10) & 1)
                                                  + 1;
        *(_NDIS_OBJECT_HEADER *)((char *)&v42->Header + 6) = (_NDIS_OBJECT_HEADER)(2
                                                                                 - ((*((_DWORD *)v30->BaseMiniport->WakeUpDpcTimer.Dpc.DpcData
                                                                                     + 10) & 2) != 0));
        *(_DWORD *)((char *)&v42->NextFilter + 6) = v30->SavedNextSendNetBufferListsHandler;
        *(_NDIS_FILTER_DRIVER_BLOCK **)((char *)&v42->FilterDriver + 6) = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)v30->StatusHandler + 164);
        *(_DWORD *)&v42->Header.Size = 2;
        *(__m128i *)((char *)&v42->FilterModuleContext + 6) = v39;
        LOWORD(v42->FilterFriendlyName) = *v30->Reserved4.Buffer;
        HIWORD(v42->FilterInstanceName.__ptr_.__value_) = *v30->Reserved4.Buffer;
        v7 = (Rtl::KString *)((char *)v7 - *v30->Reserved4.Buffer);
        *(_UNICODE_STRING **)((char *)&v42->FilterFriendlyName + 6) = (_UNICODE_STRING *)v7;
        memmove(v7, *((const void **)v30->Reserved4.Buffer + 1), *v30->Reserved4.Buffer);
        v43 = (unsigned __int16 *)*((_QWORD *)v30->BaseMiniport->WakeUpDpcTimer.Dpc.DpcData + 6);
        if ( v43 )
        {
          v7 = (Rtl::KString *)((char *)v7 - *v43);
          *(_NDIS_MINIPORT_BLOCK **)((char *)&i->Miniport + 6) = (_NDIS_MINIPORT_BLOCK *)v7;
          v44 = (const void **)*((_QWORD *)v30->BaseMiniport->WakeUpDpcTimer.Dpc.DpcData + 6);
          memmove(v7, v44[1], *(unsigned __int16 *)v44);
        }
        i = (_NDIS_FILTER_BLOCK *)((char *)i + 64);
        ++*((_DWORD *)v52 + 2);
        LODWORD(v8) = (_DWORD)v8 - v47;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, v45);
      v30 = (struct _NDIS_MINIPORT_BLOCK *)v30->Interrupt;
      v14 = v45[0];
    }
    while ( v30 );
    v9 = InterfaceBufferLength;
    v46 = (unsigned int)v8;
    p_BindEngine = &v6->BindEngine;
    LOBYTE(v8) = v51;
  }
  v6->MiniportThread = 0LL;
  KeReleaseSpinLock(&v6->Lock, v14);
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  v10 = v46;
LABEL_12:
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v11 > v9 )
    v5 = -1073676266;
  *BytesNeeded = v11;
  *BytesWritten = v9 - v10;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      13,
      42,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)v8,
      v5);
  }
  return v5;
}
