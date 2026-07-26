/*
 * XREFs of ndisIfRegisterInterfaceEx @ 0x140089340
 * Callers:
 *     NdisIfRegisterInterface @ 0x1400CE860 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     NdisAllocateRefCount @ 0x14001C0C0 (NdisAllocateRefCount.c)
 *     WPP_RECORDER_SF_Dd @ 0x14005C850 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qllq @ 0x14006ECC0 (WPP_RECORDER_SF_qllq_ea_14006ECC0.c)
 *     WPP_RECORDER_SF_Llq @ 0x14006F590 (WPP_RECORDER_SF_Llq.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1400707C0 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1400D43A4 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  bool v19; // zf
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  size_t v22; // rax
  size_t v23; // rbp
  __int64 v24; // rax
  __int128 *v25; // rax
  __int128 *v26; // rsi
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _OWORD *v36; // rsi
  KIRQL v37; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *v38; // rax
  KIRQL v39; // al
  _BYTE *v40; // r8
  KIRQL v41; // si
  __int64 v42; // r14
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // ax
  SIZE_T v45; // rax
  _DEVICE_OBJECT *v46; // rsi
  unsigned int v47; // r13d
  unsigned int v48; // eax
  int *v49; // rbp
  int v50; // ebx
  unsigned int v51; // r15d
  __int64 ClearBitsAndSet; // rax
  int v53; // edx
  ULONG64 SizeOfBitMap; // rbp
  int v55; // eax
  _QWORD *v56; // rcx
  _DRIVER_OBJECT *DriverObject; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rax
  KIRQL v66; // bl
  unsigned int v67; // ecx
  int v69; // [rsp+20h] [rbp-68h]
  unsigned int v71; // [rsp+98h] [rbp+10h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+20h]

  v7 = (a2 >> 24) & 0xFFFFFF;
  v8 = HIWORD(a2);
  v71 = (a2 >> 24) & 0xFFFFFF;
  v72 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v69);
  if ( !a4 )
    goto LABEL_94;
  if ( *(_BYTE *)(a4 + 1) != 1 )
  {
    v15 = -1073741637;
    goto LABEL_95;
  }
  if ( *(_WORD *)(a4 + 2) < 0x60u )
  {
LABEL_94:
    v15 = -1073741811;
    goto LABEL_95;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 1504LL, 1718174798LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    v15 = -1073741670;
    goto LABEL_95;
  }
  *Pool2 = 98566419LL;
  if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    v14[187] = 0LL;
  *((_DWORD *)v14 + 326) = 1;
  v14[179] = NdisAllocateRefCount(0x12u, 2);
  if ( (unsigned int)(v7 - 32512) > 0x4100 && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v8, &v71, 0, 0) )
  {
    v15 = -1073741811;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(a4 + 4);
  v17 = 512;
  *((_DWORD *)v14 + 334) = v16;
  *((_DWORD *)v14 + 140) = v16;
  *((_DWORD *)v14 + 335) = *(_DWORD *)(a4 + 20);
  *((_DWORD *)v14 + 336) = *(_DWORD *)(a4 + 24);
  *((_DWORD *)v14 + 354) = *(_DWORD *)(a4 + 84);
  *((_DWORD *)v14 + 350) = a5;
  v18 = *(_WORD *)(a4 + 48);
  v14[164] = a2;
  if ( v18 > 0x200u )
  {
    *((_WORD *)v14 + 4) = 512;
LABEL_16:
    memmove((char *)v14 + 10, (const void *)(a4 + *(unsigned __int16 *)(a4 + 50)), v17);
    goto LABEL_17;
  }
  *((_WORD *)v14 + 4) = v18;
  v17 = v18;
  if ( v18 )
    goto LABEL_16;
LABEL_17:
  v19 = a1 == qword_14011F670;
  v20 = *(_OWORD *)(a4 + 52);
  *((_DWORD *)v14 + 132) = *(_DWORD *)(a4 + 28);
  *((_DWORD *)v14 + 133) = *(_DWORD *)(a4 + 32);
  *((_DWORD *)v14 + 134) = *(_DWORD *)(a4 + 36);
  *((_BYTE *)v14 + 556) = *(_BYTE *)(a4 + 40);
  *((_DWORD *)v14 + 141) = *(_DWORD *)(a4 + 88);
  *((_DWORD *)v14 + 142) = *(_DWORD *)(a4 + 92);
  *((_WORD *)v14 + 262) = v8;
  *(_OWORD *)((char *)v14 + 540) = v20;
  if ( v19 || a1 == qword_14011F668 )
  {
    v25 = (__int128 *)(v14 + 72);
    v26 = (__int128 *)(a4 + 96);
    v27 = 5LL;
    do
    {
      v25 += 8;
      v28 = *v26;
      v29 = v26[1];
      v26 += 8;
      *(v25 - 8) = v28;
      v30 = *(v26 - 6);
      *(v25 - 7) = v29;
      v31 = *(v26 - 5);
      *(v25 - 6) = v30;
      v32 = *(v26 - 4);
      *(v25 - 5) = v31;
      v33 = *(v26 - 3);
      *(v25 - 4) = v32;
      v34 = *(v26 - 2);
      *(v25 - 3) = v33;
      v35 = *(v26 - 1);
      *(v25 - 2) = v34;
      *(v25 - 1) = v35;
      --v27;
    }
    while ( v27 );
    *v25 = *v26;
    *((_BYTE *)v14 + 1393) = 1;
    v14[165] = v14;
    if ( a3 )
    {
      v72 = a3;
      v14[176] = a3;
      *((_BYTE *)v14 + 1394) = 1;
    }
  }
  else
  {
    v21 = *(_OWORD *)(a4 + 68);
    v22 = *(unsigned __int16 *)(a4 + 42);
    v14[165] = a3;
    *(_OWORD *)((char *)v14 + 580) = v21;
    if ( (unsigned int)v22 > 0x20 )
    {
      v15 = -1073741811;
      goto LABEL_35;
    }
    *((_WORD *)v14 + 562) = v22;
    *((_WORD *)v14 + 579) = v22;
    if ( (_WORD)v22 )
    {
      v23 = v22;
      memmove((char *)v14 + 1126, (const void *)(a4 + *(unsigned __int16 *)(a4 + 44)), v22);
      v24 = *(unsigned __int16 *)(a4 + 46);
      if ( (_WORD)v24 )
        memmove(v14 + 145, (const void *)(a4 + v24), v23);
    }
  }
  v36 = (_OWORD *)((char *)v14 + 580);
  v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  if ( !memcmp((char *)v14 + 580, &ndisDefaultNetworkGuid, 0x10uLL) )
  {
    v38 = qword_14011E9D8;
    if ( qword_14011E9D8 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
    {
LABEL_33:
      v15 = -1073741811;
      goto LABEL_34;
    }
    while ( *((_DWORD *)v38 + 4) != 1 )
    {
      if ( *((_DWORD *)v38 + 4) <= 1u )
      {
        v38 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v38;
        if ( v38 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
          continue;
      }
      goto LABEL_33;
    }
    *v36 = *(_OWORD *)(*((_QWORD *)v38 + 7) + 32LL);
  }
  v42 = qword_14011E9E8;
  if ( (__int64 *)qword_14011E9E8 == &qword_14011E9E8 )
    goto LABEL_33;
  while ( 1 )
  {
    if ( *(_DWORD *)(v42 + 32) > *(_DWORD *)v36 )
      goto LABEL_33;
    if ( *(_DWORD *)(v42 + 32) >= *(_DWORD *)v36 )
    {
      v43 = *((_WORD *)v14 + 292);
      if ( *(_WORD *)(v42 + 36) > v43 )
        goto LABEL_33;
      if ( *(_WORD *)(v42 + 36) >= v43 )
      {
        v44 = *((_WORD *)v14 + 293);
        if ( *(_WORD *)(v42 + 38) > v44 )
          goto LABEL_33;
        if ( *(_WORD *)(v42 + 38) >= v44 )
          break;
      }
    }
LABEL_50:
    v42 = *(_QWORD *)v42;
    if ( (__int64 *)v42 == &qword_14011E9E8 )
      goto LABEL_33;
  }
  v45 = RtlCompareMemory((const void *)(v42 + 40), (char *)v14 + 588, 8uLL);
  if ( v45 != 8 )
  {
    if ( *(_BYTE *)(v45 + v42 + 40) > *((_BYTE *)v36 + v45 + 8) )
      goto LABEL_33;
    goto LABEL_50;
  }
  if ( !v42 || (*(_DWORD *)(v42 + 72) & 3) != 0 )
    goto LABEL_33;
  v46 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
  if ( *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
  {
LABEL_58:
    v47 = a6;
    if ( a6 < *(_DWORD *)dword_14011F678 )
    {
      v48 = dword_14011E9F8;
      v49 = &dword_14011E9F8;
    }
    else
    {
      v48 = dword_14011EA10;
      v49 = (int *)&dword_14011EA10;
    }
    if ( a6 >= v48 )
    {
      v51 = a6 - v48;
      v50 = IfIndexRange::Grow((IfIndexRange *)v49, a6 - v48 + 1);
      if ( !v50 )
      {
        if ( !RtlTestBitEx((PRTL_BITMAP_EX)(v49 + 2), v51) )
        {
          RtlSetBitEx((PRTL_BITMAP_EX)(v49 + 2), v51);
          goto LABEL_81;
        }
        v50 = -1073741791;
      }
    }
    else
    {
      v50 = -1073741637;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xBu,
        (struct _GUID *)&WPP_08d66058e44c3546dbc094f515ac4e09_Traceguids,
        v47,
        v50);
    v47 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL, 0LL);
    v53 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
      goto LABEL_72;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v55 = IfIndexRange::Grow((IfIndexRange *)&dword_14011EA10, LODWORD(BitMapHeader.SizeOfBitMap) + 64);
    v15 = v55;
    if ( !v55 )
    {
      v53 = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL, SizeOfBitMap);
LABEL_72:
      v47 = v53 + dword_14011EA10;
      goto LABEL_81;
    }
    if ( v55 < 0 )
    {
      if ( v55 == -1073741789 )
        v15 = -1073676266;
      goto LABEL_34;
    }
    if ( v55 == 259 || v55 == 1076035585 )
      goto LABEL_34;
LABEL_81:
    *((_DWORD *)v14 + 1) = v47;
    v56 = v14 + 154;
    DriverObject = v46->DriverObject;
    v58 = *(_QWORD *)&DriverObject->Type;
    if ( *(_DRIVER_OBJECT **)(*(_QWORD *)&DriverObject->Type + 8LL) != DriverObject )
      goto LABEL_87;
    *v56 = v58;
    v14[155] = DriverObject;
    *(_QWORD *)(v58 + 8) = v56;
    *(_QWORD *)&DriverObject->Type = v56;
    v59 = v14 + 156;
    v14[166] = a1;
    v60 = a1 + 3;
    v61 = a1[3];
    if ( *(_QWORD **)(*v60 + 8LL) != v60
      || (v14[157] = v60,
          *v59 = v61,
          *(_QWORD *)(v61 + 8) = v59,
          *v60 = v59,
          v62 = (_QWORD *)(v42 + 56),
          v63 = *(_QWORD *)(v42 + 56),
          v64 = v14 + 158,
          *(_QWORD *)(v63 + 8) != v42 + 56) )
    {
LABEL_87:
      __fastfail(3u);
    }
    ++ndisInterfaceCount;
    *v64 = v63;
    v14[159] = v62;
    *(_QWORD *)(v63 + 8) = v64;
    *v62 = v64;
    *((_DWORD *)v14 + 144) = *(_DWORD *)(*(_QWORD *)(v42 + 48) + 16LL);
    v14[171] = v42;
    v14[172] = *(_QWORD *)(v42 + 48);
    ++*(_DWORD *)(v42 + 76);
    v65 = v72;
    if ( v72 )
    {
      *(_QWORD *)(v72 + 688) = v14;
      *(_DWORD *)(v65 + 680) = v47;
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v14[179], 0);
    ++*((_DWORD *)v14 + 326);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v37);
    ndisNsiNotifyClientInterfaceChange(v14, 1LL, 0LL, 1LL);
    v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v14, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v66);
    v15 = 0;
    *a7 = v47;
    goto LABEL_95;
  }
  while ( v46->Queue.ListEntry.Flink != (_LIST_ENTRY *)a2 )
  {
    if ( v46->Queue.ListEntry.Flink <= (_LIST_ENTRY *)a2 )
    {
      v46 = *(_DEVICE_OBJECT **)&v46->Type;
      if ( v46 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
        continue;
    }
    goto LABEL_58;
  }
  v15 = -1073741270;
LABEL_34:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v37);
LABEL_35:
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v40 = (_BYTE *)v14[179];
  v41 = v39;
  if ( v40 != (_BYTE *)2 && v40 != (_BYTE *)3 )
  {
    if ( (unsigned __int64)v40 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)v40, 0LL);
    if ( (*v40 & 2) == 0 )
      ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v40, 0xFFuLL);
    *v40 &= ~2u;
  }
  v19 = (*((_DWORD *)v14 + 326))-- == 1;
  if ( v19 )
  {
    v67 = *((_DWORD *)v14 + 1);
    if ( v67 )
      ndisIfFreeIfIndex(v67);
    NdisFreeRefCount((struct NDIS_REFCOUNT_HANDLE__ *)v14[179]);
    v14[179] = 0LL;
    ExFreePoolWithTag(v14, 0x6669444Eu);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v41);
LABEL_95:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v69);
  return v15;
}
