/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D3970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x140043800 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x14004A9F0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x14006C6C0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x140070B20 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400D298C (ndisIfCreateNetworkBlock.c)
 *     ndisIfReleaseSiteId @ 0x1400D3090 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1400D30C4 (ndisNsiChangeNetworkInfo.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1401478EC (ndisNsiNotifyClientNetworkChange.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  unsigned int v2; // edi
  char v3; // bl
  unsigned int v4; // r13d
  char v5; // r12
  _OWORD *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  const struct _GUID *v10; // r15
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v12; // rsi
  const struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  KIRQL v18; // bl
  signed int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  _QWORD *v25; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v31; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h]
  _QWORD v33[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  char v35[528]; // [rsp+A8h] [rbp-60h] BYREF

  NewIrql[1] = 0;
  v2 = 0;
  memset(v33, 0, sizeof(v33));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  *(_DWORD *)&NewIrql[4] = 0;
  v32 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      20,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v33[1]);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  memset(v35, 0, sizeof(v35));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
  {
    v2 = -1073741811;
    goto LABEL_52;
  }
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = v35;
  v8 = 4LL;
  do
  {
    *(_OWORD *)v7 = *v6;
    *((_OWORD *)v7 + 1) = v6[1];
    *((_OWORD *)v7 + 2) = v6[2];
    *((_OWORD *)v7 + 3) = v6[3];
    *((_OWORD *)v7 + 4) = v6[4];
    *((_OWORD *)v7 + 5) = v6[5];
    *((_OWORD *)v7 + 6) = v6[6];
    v7 += 128;
    v9 = v6[7];
    v6 += 8;
    *((_OWORD *)v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v7 = *v6;
  if ( v35[0] != -84 || v35[1] != 1 || *(_WORD *)&v35[2] != 528 )
    *(_DWORD *)v35 = 34603436;
  v10 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v31 = NetworkBlock;
  v12 = (__int64)NetworkBlock;
  if ( NetworkBlock
    && !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v33[1],
          1) )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 12) == 3 )
    goto LABEL_38;
  CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v35[4]);
  if ( !CompartmentBlock
    || !ndisIsCompartmentAccessibleByClient(CompartmentBlock, (const struct _NDIS_NSI_CLIENT_INFO *)&v33[1], 1) )
  {
LABEL_14:
    v2 = -1073741072;
    goto LABEL_52;
  }
  if ( !v15 )
  {
    if ( v12 )
    {
      v22 = ndisNsiChangeNetworkInfo(v12, (__int64)v35, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
      v4 = *(_DWORD *)&NewIrql[4];
      v2 = v22;
      if ( *(_DWORD *)&NewIrql[4] )
        v5 = 1;
      goto LABEL_23;
    }
LABEL_34:
    v2 = -1073741072;
    goto LABEL_23;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( v12 )
    {
      v2 = -1073741270;
    }
    else
    {
      v21 = ndisIfCreateNetworkBlock(v14, (__int64)v10, (__int64)v35, &v31);
      v12 = (__int64)v31;
      v2 = v21;
      if ( v21 >= 0 )
        v3 = 1;
    }
    goto LABEL_23;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( v12 )
    {
      v20 = ndisNsiChangeNetworkInfo(v12, (__int64)v35, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
      v4 = *(_DWORD *)&NewIrql[4];
      v2 = v20;
      if ( *(_DWORD *)&NewIrql[4] )
        v5 = 1;
    }
    else
    {
      v19 = ndisIfCreateNetworkBlock(v14, (__int64)v10, (__int64)v35, &v31);
      v12 = (__int64)v31;
      v2 = v19;
      v3 = v19 >= 0;
    }
    goto LABEL_23;
  }
  if ( v17 == 1 )
  {
LABEL_38:
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 56) != v12 + 56 || (v23 = *(_DWORD *)(v12 + 72), (v23 & 1) != 0) )
      {
        v2 = -1073741811;
      }
      else
      {
        *(_DWORD *)(v12 + 72) = v23 | 1;
        v24 = *(_QWORD *)(v12 + 16);
        if ( *(_QWORD *)(v24 + 8) != v12 + 16 )
          goto LABEL_56;
        v25 = *(_QWORD **)(v12 + 24);
        if ( *v25 != v12 + 16
          || (--dword_14011F664,
              *v25 = v24,
              *(_QWORD *)(v24 + 8) = v25,
              ndisIfReleaseSiteId(*(_DWORD *)(v12 + 88)),
              COMPARTMENTBLOCK_DECREMENT_REF(v26),
              v27 = *(_QWORD *)v12,
              *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12)
          || (v28 = *(_QWORD **)(v12 + 8), *v28 != v12) )
        {
LABEL_56:
          __fastfail(3u);
        }
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        NewIrql[1] = 1;
      }
      goto LABEL_23;
    }
    goto LABEL_34;
  }
  v2 = -1073741811;
LABEL_23:
  if ( NewIrql[1] )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(v12 + 608) = &Event;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, NewIrql[0]);
    ndisNsiNotifyClientNetworkChange(v12, 2);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v18);
    ndisWaitForKernelObject(&Event);
    *(_QWORD *)(v12 + 608) = 0LL;
    ExFreePoolWithTag((PVOID)v12, 0);
    goto LABEL_53;
  }
  if ( v3 || v5 )
  {
    ++*(_DWORD *)(v12 + 76);
    if ( v5 )
    {
      *((_QWORD *)&v32 + 1) = *((_QWORD *)a1 + 4);
      v33[0] = v4;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, NewIrql[0]);
    ndisNsiNotifyClientNetworkChange(v12, v3);
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
  }
LABEL_52:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, NewIrql[0]);
LABEL_53:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v2);
  KeLeaveCriticalRegion();
  return v2;
}
