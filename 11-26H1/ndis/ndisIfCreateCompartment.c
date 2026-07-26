/*
 * XREFs of ndisIfCreateCompartment @ 0x1400CFBB8
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D0E90 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisCmGetThreadState @ 0x14003F390 (ndisCmGetThreadState.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x14004A9F0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x14005D4B0 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x14006C6C0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D0054 (ndisIfCreateCompartmentBlock.c)
 *     WPP_RECORDER_SF_l_guid_ @ 0x1400D130C (WPP_RECORDER_SF_l_guid_.c)
 *     WPP_RECORDER_SF_l_guid_Lq @ 0x1400D13E4 (WPP_RECORDER_SF_l_guid_Lq.c)
 *     WPP_RECORDER_SF_l_guid_d @ 0x1400D14FC (WPP_RECORDER_SF_l_guid_d.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147004 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1401477AC (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateCompartment(__int64 a1, struct _NDIS_IF_COMPARTMENT_BLOCK **a2)
{
  __int64 v2; // r14
  int v3; // esi
  int v6; // ebx
  char v7; // r13
  __int128 *v8; // rbp
  KIRQL v9; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // rdi
  int v12; // eax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rax
  char v14; // r15
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  char v18; // al
  int v19; // eax
  bool v20; // cf
  __int128 v21; // xmm0
  KIRQL v22; // al
  KIRQL v23; // bl
  int Network; // eax
  int v25; // r9d
  KIRQL v26; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r12
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  KIRQL v32; // r14
  int v34; // [rsp+20h] [rbp-78h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v37; // [rsp+B0h] [rbp+18h] BYREF
  int v38; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  LOBYTE(v3) = 0;
  v6 = 0;
  v7 = 0;
  v8 = (__int128 *)(v2 + 1080);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (__int64)v8);
  *a2 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid((const struct _GUID *)(v2 + 1080));
  v37 = CompartmentBlockByGuid;
  v11 = CompartmentBlockByGuid;
  if ( CompartmentBlockByGuid )
  {
    v12 = *((_DWORD *)CompartmentBlockByGuid + 10);
    if ( (v12 & 1) != 0 )
    {
      v11 = 0LL;
      v37 = 0LL;
      goto LABEL_9;
    }
    if ( (v12 & 2) != 0 )
    {
      v7 = 1;
      *((_DWORD *)v11 + 10) = v12 & 0xFFFFFFF5 | 8;
      v13 = v11;
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)v13 + 11);
      goto LABEL_9;
    }
    v13 = v11;
    if ( *(_DWORD *)(a1 + 48) != 1 )
      goto LABEL_8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x17u,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        v2 + 1080);
    v11 = 0LL;
    v37 = 0LL;
    v6 = -1073741270;
  }
LABEL_9:
  v14 = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
  v18 = v7;
  if ( v6 < 0 )
    goto LABEL_36;
  if ( !v11 )
  {
    v19 = ndisIfCreateCompartmentBlock(0LL, v2 + 1080, 0LL, &v37);
    v11 = v37;
    v6 = v19;
    v18 = v7;
    if ( v6 < 0 )
      goto LABEL_36;
    v20 = *(_BYTE *)(v2 + 1) < 2u;
    v7 = 1;
    *a2 = v37;
    if ( !v20 )
      *((_DWORD *)v11 + 420) = *(_DWORD *)(v2 + 1616);
    *((_DWORD *)v11 + 16) = *(_DWORD *)v2;
    v21 = *v8;
    *(_OWORD *)((char *)v11 + 1144) = *v8;
    *((_DWORD *)v11 + 419) = *(_DWORD *)(v2 + 1612);
    if ( (*((_DWORD *)v11 + 420) & 4) != 0 )
    {
      *(_OWORD *)((char *)v11 + 1684) = v21;
    }
    else
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      LODWORD(v37) = 0;
      v23 = v22;
      ndisCmGetThreadState(KeGetCurrentThread(), &v37, &v38);
      *(_OWORD *)((char *)v11 + 1684) = *(_OWORD *)((char *)ndisIfFindCompartmentBlock((unsigned int)v37) + 1144);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v23);
    }
    Network = ndisIfCreateNetwork((struct _GUID *)v11 + 5, *((_DWORD *)v11 + 4));
    v6 = Network;
    if ( Network < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_25:
        v18 = v14;
        goto LABEL_36;
      }
      v25 = 24;
LABEL_24:
      WPP_RECORDER_SF_l_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        v16,
        v25,
        v34,
        *((_DWORD *)v11 + 4),
        v2 + 1080,
        Network);
      goto LABEL_25;
    }
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v11 + 5);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v26);
    if ( !NetworkBlock )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_l_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v16, 25, v34, *((_DWORD *)v11 + 4), v2 + 1080);
      }
      v6 = -1073741772;
      goto LABEL_25;
    }
    *((_QWORD *)v11 + 7) = NetworkBlock;
    Network = ndisIfCreateInterface(
                NetworkBlock,
                1u,
                (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v11 + 64),
                0LL,
                0LL,
                0LL,
                0LL,
                NdisIfBlockSourceAutomaticLoopback);
    v6 = Network;
    if ( Network < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v25 = 26;
      goto LABEL_24;
    }
  }
  v28 = 4LL;
  v29 = (_OWORD *)((char *)v11 + 1160);
  v30 = (_OWORD *)(v2 + 1096);
  do
  {
    *v29 = *v30;
    v29[1] = v30[1];
    v29[2] = v30[2];
    v29[3] = v30[3];
    v29[4] = v30[4];
    v29[5] = v30[5];
    v29[6] = v30[6];
    v29 += 8;
    v31 = v30[7];
    v30 += 8;
    *(v29 - 1) = v31;
    --v28;
  }
  while ( v28 );
  *(_DWORD *)v29 = *(_DWORD *)v30;
  memmove(*(void **)(a1 + 32), (char *)v11 + 64, 0x668uLL);
  **(_DWORD **)(a1 + 16) = *((_DWORD *)v11 + 4);
  v18 = v7;
LABEL_36:
  if ( v11 )
  {
    if ( v18 )
      ndisNsiNotifyClientCompartmentChange(v11, 1LL);
    v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    if ( v7 )
      *((_DWORD *)v11 + 10) &= ~8u;
    COMPARTMENTBLOCK_DECREMENT_REF(v11);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v32);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v11 )
      v3 = *((_DWORD *)v11 + 4);
    WPP_RECORDER_SF_l_guid_Lq(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v16, v17, v34, v3, (__int64)v8, v6, (char)*a2);
  }
  return (unsigned int)v6;
}
