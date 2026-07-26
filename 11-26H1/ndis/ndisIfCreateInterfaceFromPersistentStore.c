/*
 * XREFs of ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14001AA20 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008C830 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Release@kspin_lock_saved_irql@details@wil@@SAXAEBU123@@Z @ 0x1400CE240 (-Release@kspin_lock_saved_irql@details@wil@@SAXAEBU123@@Z.c)
 *     WPP_RECORDER_SF_I @ 0x1400CEF34 (WPP_RECORDER_SF_I_ea_1400CEF34.c)
 *     WPP_RECORDER_SF_IL @ 0x1400CEFDC (WPP_RECORDER_SF_IL.c)
 *     WPP_RECORDER_SF_Ii @ 0x1400CF0A0 (WPP_RECORDER_SF_Ii.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1400CF46C (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140168CE0 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // esi
  KIRQL v5; // al
  _DEVICE_OBJECT *v6; // rcx
  void **p_DeviceContext; // rbx
  KIRQL v8; // r10
  _LIST_ENTRY *v9; // rax
  int v10; // edx
  int v11; // r8d
  union _NET_LUID_LH v12; // rbx
  __int64 v13; // rdi
  int v14; // edx
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  KIRQL v19; // al
  __int64 v20; // rbx
  _DWORD *v21; // r14
  KIRQL v22; // r12
  __int64 v23; // rdi
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  SIZE_T v26; // rax
  int v27; // r9d
  struct wil::details::kspin_lock_saved_irql v28; // xmm0
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  bool v32; // di
  KIRQL v33; // al
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  KIRQL v35; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v36; // rcx
  unsigned int v37; // r9d
  struct _NDIS_IF_COMPARTMENT_BLOCK *v38; // rdi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v39; // rdx
  int v40; // r9d
  int v41; // ecx
  int Interface; // eax
  int v43; // ecx
  int v45; // [rsp+28h] [rbp-29h]
  struct wil::details::kspin_lock_saved_irql v46; // [rsp+48h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v49; // [rsp+C8h] [rbp+77h] BYREF

  v49 = a3;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 16);
  }
  if ( !(unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    v6 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
    p_DeviceContext = 0LL;
    v8 = v5;
    v9 = *(_LIST_ENTRY **)(v3 + 24);
    if ( *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
    {
      while ( v6->Queue.ListEntry.Flink != v9 )
      {
        if ( v6->Queue.ListEntry.Flink > v9 )
          goto LABEL_10;
        v6 = *(_DEVICE_OBJECT **)&v6->Type;
        if ( v6 == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
          goto LABEL_19;
        }
      }
      p_DeviceContext = &v6[-4].Queue.Wcb.DeviceContext;
    }
LABEL_10:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
    if ( p_DeviceContext )
    {
      v4 = -1073741823;
      goto LABEL_77;
    }
    goto LABEL_19;
  }
  v12.Value = *(ULONG64 *)(v3 + 24);
  v13 = (unsigned int)dword_14011D3F4;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v46.spinLock = (unsigned __int64 *)&WPP_MAIN_CB.Reserved;
  v46.savedIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v15 = *(unsigned __int16 **)&WPP_MAIN_CB.SectorSize;
  if ( *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
  {
LABEL_16:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, (unsigned int)&WPP_MAIN_CB.SectorSize, 12);
    }
    wil::details::kspin_lock_saved_irql::Release(&v46);
  }
  else
  {
    while ( *((_QWORD *)v15 + 10) != v12.Value )
    {
      if ( *((_QWORD *)v15 + 10) <= v12.Value )
      {
        v15 = *(unsigned __int16 **)v15;
        if ( v15 != &WPP_MAIN_CB.SectorSize )
          continue;
      }
      goto LABEL_16;
    }
    if ( !*((_BYTE *)v15 + 160) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_36:
        wil::details::kspin_lock_saved_irql::Release(&v46);
LABEL_49:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 17);
        }
        v4 = -1073741823;
        goto LABEL_77;
      }
      v27 = 13;
LABEL_35:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, (unsigned int)&WPP_MAIN_CB.SectorSize, v27);
      goto LABEL_36;
    }
    if ( *((_QWORD *)v15 + 33) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v27 = 14;
      goto LABEL_35;
    }
    v28 = v46;
    *((_QWORD *)v15 + 33) = &Event;
    v46 = v28;
    wil::details::kspin_lock_saved_irql::Release(&v46);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ii(*((_QWORD *)WPP_GLOBAL_Control + 8), v29, v30, v31);
    v32 = ndisWaitForKernelObject(&Event, v13);
    if ( !v32 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      v46.spinLock = (unsigned __int64 *)&WPP_MAIN_CB.Reserved;
      v46.savedIrql = v33;
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v12);
      if ( InterfaceByNetLuid )
      {
        if ( InterfaceByNetLuid->PendingDeletionComplete == &Event )
          InterfaceByNetLuid->PendingDeletionComplete = 0LL;
      }
      else
      {
        v32 = 1;
      }
      wil::details::kspin_lock_saved_irql::Release(&v46);
    }
    if ( !v32 )
      goto LABEL_49;
  }
LABEL_19:
  v16 = *(_QWORD *)(v3 + 24);
  v17 = (v16 >> 24) & 0xFFFFFF;
  v18 = HIWORD(v16);
  v49 = v17;
  if ( v17 - 32512 > 0x4100 )
  {
    v4 = ndisIfAllocateAndVerifyNetLuidIndex(v18, &v49, 0, 0);
    if ( v4 )
      goto LABEL_77;
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v20 = qword_14011E9E8;
  v21 = (_DWORD *)(v3 + 36);
  v22 = v19;
  v23 = 0LL;
  if ( (__int64 *)qword_14011E9E8 == &qword_14011E9E8 )
    goto LABEL_53;
  while ( 1 )
  {
    if ( *(_DWORD *)(v20 + 32) > *v21 )
    {
LABEL_31:
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v20 + 32) >= *v21 )
    {
      v24 = *(_WORD *)(v3 + 40);
      if ( *(_WORD *)(v20 + 36) > v24 )
        goto LABEL_31;
      if ( *(_WORD *)(v20 + 36) >= v24 )
      {
        v25 = *(_WORD *)(v3 + 42);
        if ( *(_WORD *)(v20 + 38) > v25 )
          goto LABEL_31;
        if ( *(_WORD *)(v20 + 38) >= v25 )
          break;
      }
    }
LABEL_30:
    v20 = *(_QWORD *)v20;
    if ( (__int64 *)v20 == &qword_14011E9E8 )
      goto LABEL_31;
  }
  v26 = RtlCompareMemory((const void *)(v20 + 40), (const void *)(v3 + 44), 8uLL);
  if ( v26 != 8 )
  {
    if ( *(_BYTE *)(v26 + v20 + 40) > *((_BYTE *)v21 + v26 + 8) )
      goto LABEL_31;
    goto LABEL_30;
  }
  v23 = v20;
LABEL_53:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
  if ( v23 )
  {
LABEL_72:
    v41 = *(_DWORD *)(*(_QWORD *)(v23 + 48) + 16LL);
    if ( *(_DWORD *)(v3 + 52) != v41 )
      *(_DWORD *)(v3 + 52) = v41;
    Interface = ndisIfCreateInterface(
                  (struct _NDIS_IF_NETWORK_BLOCK *)v23,
                  0,
                  0LL,
                  (const union _NET_LUID_LH *)(v3 + 24),
                  a1,
                  (const struct NdisNetworkInterfacePersistedState *)v3,
                  0LL,
                  NdisIfBlockSourcePersistedNetSetup);
    v43 = v4;
    if ( Interface < 0 )
      v43 = -1073741823;
    v4 = v43;
    ndisIfUpdateInterfaceFromPersistentStore(v3);
  }
  else
  {
LABEL_54:
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    v36 = qword_14011E9D8;
    v37 = *(_DWORD *)(v3 + 52);
    v38 = 0LL;
    v39 = qword_14011E9D8;
    if ( qword_14011E9D8 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
    {
LABEL_60:
      if ( !v38 )
      {
        if ( qword_14011E9D8 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
          goto LABEL_62;
        goto LABEL_67;
      }
    }
    else
    {
      do
      {
        if ( *((_DWORD *)v39 + 4) == v37 )
        {
          v38 = v39;
          goto LABEL_60;
        }
        if ( *((_DWORD *)v39 + 4) > v37 )
          goto LABEL_60;
        v39 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v39;
      }
      while ( v39 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 );
LABEL_62:
      while ( *((_DWORD *)v36 + 4) != 1 )
      {
        if ( *((_DWORD *)v36 + 4) <= 1u )
        {
          v36 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v36;
          if ( v36 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
            continue;
        }
        goto LABEL_67;
      }
      v38 = v36;
LABEL_67:
      *(_DWORD *)(v3 + 52) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v35);
    if ( !v38 )
    {
      v4 = -1073741823;
      goto LABEL_77;
    }
    v23 = *((_QWORD *)v38 + 7);
    if ( v23 )
    {
      *(_OWORD *)(v3 + 36) = *(_OWORD *)(v23 + 32);
      goto LABEL_72;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v40);
    v4 = -1073741252;
  }
LABEL_77:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 19, v45, *(_QWORD *)(v3 + 24), v4);
  return v4;
}
