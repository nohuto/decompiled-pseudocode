/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x140141080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x14013C494 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        struct KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v6; // r15
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  void *v9; // rbx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v10; // rsi
  char v11; // al
  _DEVICE_OBJECT *v12; // rcx
  int v13; // edx
  struct _DMA_ADAPTER *DmaAdapter; // r15
  int v15; // edi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v16; // rax
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rdx
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v23; // [rsp+48h] [rbp-51h]
  KLockThisExclusive v24; // [rsp+50h] [rbp-49h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+70h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v23 = a3;
  *a3 = 0LL;
  v6 = a3;
  KLockThisExclusive::KLockThisExclusive(&v24, a1);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v15 = -1073741811;
    goto LABEL_39;
  }
  v7 = *((_QWORD *)MiniportAdapterContext + 686);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_39;
  }
  PoolWithTag[2] = 0LL;
  v10 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  PoolWithTag[3] = 0LL;
  PoolWithTag[1] = 0LL;
  *PoolWithTag = 0LL;
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
  {
    v11 = *(_BYTE *)(v7 + 14);
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = v11;
    goto LABEL_8;
  }
  if ( a1[3].m_Lock.0 )
  {
    v15 = -1073741808;
LABEL_32:
    KALLOCATOR<1832993870,1>::operator delete(v9);
    goto LABEL_39;
  }
  v11 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
  if ( v11 != *(_BYTE *)(v7 + 14) )
  {
    v15 = -1073740007;
    goto LABEL_32;
  }
LABEL_8:
  if ( v11 )
  {
    v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
  }
  else
  {
    memset(&DeviceDescription, 0, sizeof(DeviceDescription));
    v12 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
    DeviceDescription.DmaAddressWidth = *(_DWORD *)(v7 + 20);
    NumberOfMapRegisters = 0;
    DeviceDescription.Version = 3;
    *(_WORD *)&DeviceDescription.Master = 257;
    DeviceDescription.InterfaceType = InterfaceTypeUndefined;
    DeviceDescription.MaximumLength = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v12, &DeviceDescription, &NumberOfMapRegisters);
    if ( !DmaAdapter )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          29,
          10,
          (struct _GUID *)&WPP_cfa9654755ff3e59552d1435f08b5860_Traceguids,
          (char)MiniportAdapterContext);
      }
      v15 = -1073741823;
      goto LABEL_32;
    }
    v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
    if ( !*(_BYTE *)&a1[3].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v15 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 11;
LABEL_30:
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            v18,
            (struct _GUID *)&WPP_cfa9654755ff3e59552d1435f08b5860_Traceguids,
            (char)MiniportAdapterContext,
            v15);
          goto LABEL_31;
        }
        goto LABEL_31;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
      {
        v15 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)-1LL);
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 12;
            goto LABEL_30;
          }
LABEL_31:
          DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
          goto LABEL_32;
        }
        v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
      }
      else
      {
        v19 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 8LL) + 264LL))();
        v15 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)v19);
        v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 13;
            goto LABEL_30;
          }
          goto LABEL_31;
        }
      }
    }
    v16[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)DmaAdapter;
    v6 = v23;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
  v15 = 0;
  if ( *Value != v10 )
    __fastfail(3u);
  *v16 = v10;
  v16[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v16;
  a1[2].m_Lock.Value = (unsigned __int64)v16;
  v16[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
  *v6 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v16;
LABEL_39:
  KLockHolder::~KLockHolder(&v24);
  return (unsigned int)v15;
}
