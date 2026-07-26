/*
 * XREFs of ndisIfDeleteCompartment @ 0x1400D0394
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D092C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D0E90 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x14004A9F0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x140060390 (WPP_RECORDER_SF_dd_ea_140060390.c)
 *     WPP_RECORDER_SF_Ll @ 0x1400D1248 (WPP_RECORDER_SF_Ll_ea_1400D1248.c)
 *     WPP_RECORDER_SF_ld @ 0x1400D15EC (WPP_RECORDER_SF_ld_ea_1400D15EC.c)
 *     WPP_RECORDER_SF_lq @ 0x1400D16B0 (WPP_RECORDER_SF_lq_ea_1400D16B0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147004 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x140167E70 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1401698F0 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  NDIS_STATUS v2; // edi
  char v3; // bl
  char v4; // r14
  KIRQL v5; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v7; // edx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rsi
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // r9
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // r9d
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  KIRQL v24; // bl
  __int64 v25; // rcx
  NET_IFTYPE v26; // bx
  __int64 v27; // rdi
  KIRQL v28; // bl
  __int64 v29; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK **v30; // rdx
  void **v31; // r14
  PVOID *v32; // rbx
  PVOID v33; // rcx
  void **v34; // rax
  KIRQL v35; // al
  int v37; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v39[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v40[132]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0;
  memset(v39, 0, 0x48uLL);
  memset(v40, 0, sizeof(v40));
  v3 = 0;
  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Cu,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_7:
      v2 = -1073741072;
      goto LABEL_47;
    }
    v9 = 29;
LABEL_6:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v9,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a1);
    goto LABEL_7;
  }
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      v2 = -1073741811;
      goto LABEL_47;
    }
    v10 = 30;
LABEL_11:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v10,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a1);
    goto LABEL_12;
  }
  v11 = *((_DWORD *)CompartmentBlock + 10);
  if ( (v11 & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v9 = 31;
    goto LABEL_6;
  }
  if ( (v11 & 0x11) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v10 = 32;
    goto LABEL_11;
  }
  if ( (v11 & 2) == 0 )
  {
    v3 = 1;
    *((_DWORD *)CompartmentBlock + 10) = v11 | 2;
  }
  if ( *((int *)CompartmentBlock + 12) > 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        0x16u,
        0x21u,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        a1);
    v2 = -1073740024;
LABEL_45:
    if ( !v3 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v12 = (_QWORD *)*((_QWORD *)CompartmentBlock + 3);
  if ( v12 != (_QWORD *)((char *)v8 + 24) )
  {
    v13 = (_QWORD *)*((_QWORD *)v8 + 7);
    while ( 1 )
    {
      v14 = (_DWORD)v12 - 16;
      if ( v12 - 2 != v13 )
        break;
      v12 = (_QWORD *)*v12;
      if ( v12 == (_QWORD *)((char *)v8 + 24) )
        goto LABEL_29;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v20 = 34;
    goto LABEL_42;
  }
LABEL_29:
  v15 = *((_QWORD *)v8 + 7);
  if ( v15 )
  {
    v16 = (_QWORD *)(v15 + 56);
    v17 = *(_QWORD **)(v15 + 56);
    if ( v17 != v16 )
    {
      v13 = (_QWORD *)*((_QWORD *)v8 + 213);
      while ( 1 )
      {
        v14 = (_DWORD)v17 - 1264;
        if ( v17 - 158 != v13 )
          break;
        v17 = (_QWORD *)*v17;
        if ( v17 == v16 )
          goto LABEL_34;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v20 = 35;
LABEL_42:
      WPP_RECORDER_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, (_DWORD)v13, v20, v37, a1, v14);
LABEL_43:
      v2 = -1073741811;
      goto LABEL_45;
    }
  }
LABEL_34:
  v18 = *((_DWORD *)v8 + 10);
  if ( (v18 & 0x10) != 0 )
  {
    *((_DWORD *)v8 + 10) = v18 & 0xFFFFFFEF;
    goto LABEL_45;
  }
  *((_DWORD *)v8 + 10) = v18 | 1;
  v19 = *((_QWORD *)v8 + 7);
  if ( v19 )
    *(_DWORD *)(v19 + 72) |= 2u;
  v3 = 1;
LABEL_46:
  _InterlockedIncrement((volatile signed __int32 *)v8 + 11);
  v4 = 1;
LABEL_47:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
  if ( v3 )
    ndisNsiNotifyClientCompartmentChange(v8, 2LL);
  if ( v4 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    COMPARTMENTBLOCK_DECREMENT_REF(v8);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v24);
  }
  if ( v2 < 0 )
    goto LABEL_70;
  v25 = *((_QWORD *)v8 + 213);
  if ( v25 )
  {
    v26 = *(_WORD *)(v25 + 524);
    v27 = (*(_QWORD *)(v25 + 1312) >> 24) & 0xFFFFFFLL;
    NdisIfDeregisterInterface(*(_DWORD *)(v25 + 4));
    v2 = NdisIfFreeNetLuidIndex(v26, v27);
    *((_QWORD *)v8 + 213) = 0LL;
  }
  if ( *((_QWORD *)v8 + 7) )
  {
    LODWORD(v39[3]) = 6;
    v39[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v39[8]) = 528;
    v39[5] = (char *)v8 + 80;
    v39[4] = 0x300000002LL;
    v39[7] = v40;
    LODWORD(v39[6]) = 16;
    v40[0] = 34603436;
    v2 = NsiSetAllParametersEx(v39);
    if ( v2 >= 0 )
    {
      *((_QWORD *)v8 + 7) = 0LL;
      goto LABEL_58;
    }
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v21, v22, v23, v37, a1, v2);
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    *((_DWORD *)v8 + 10) |= 0x10u;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v35);
    goto LABEL_70;
  }
  if ( v2 < 0 )
    goto LABEL_67;
LABEL_58:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  *((_QWORD *)v8 + 214) = &Event;
  v29 = *(_QWORD *)v8;
  if ( *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(*(_QWORD *)v8 + 8LL) != v8
    || (v30 = (struct _NDIS_IF_COMPARTMENT_BLOCK **)*((_QWORD *)v8 + 1), *v30 != v8) )
  {
LABEL_66:
    __fastfail(3u);
  }
  *v30 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v29;
  *(_QWORD *)(v29 + 8) = v30;
  _InterlockedDecrement(&dword_14011F654);
  COMPARTMENTBLOCK_DECREMENT_REF(v8);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v28);
  ndisWaitForKernelObject(&Event);
  *((_QWORD *)v8 + 214) = 0LL;
  v31 = (void **)((char *)v8 + 1728);
  while ( 1 )
  {
    v32 = (PVOID *)*v31;
    if ( *v31 == v31 )
      break;
    ObfDereferenceObject(v32[2]);
    v33 = *v32;
    if ( *((PVOID **)*v32 + 1) != v32 )
      goto LABEL_66;
    v34 = (void **)v32[1];
    if ( *v34 != v32 )
      goto LABEL_66;
    *v34 = v33;
    *((_QWORD *)v33 + 1) = v34;
    --*((_DWORD *)v8 + 430);
    ExFreePoolWithTag(v32, 0);
  }
  ExFreePoolWithTag(v8, 0);
LABEL_70:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v21, v22, v23, v37, v2, a1);
  return (unsigned int)v2;
}
