/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140146FA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x14006C6C0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147004 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1401477AC (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140165700 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase3(void)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v0; // r14
  int Network; // esi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rdi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // r13
  unsigned __int8 v4; // r15
  KIRQL v5; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  KIRQL v7; // bl
  unsigned __int16 v8; // cx
  KIRQL v9; // al
  KIRQL v10; // bl
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  v0 = qword_14011E9D8;
  Network = 0;
  while ( v0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
  {
    v2 = v0;
    v3 = v0;
    v4 = 0;
    v0 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v0;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v3 + 5);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
    if ( NetworkBlock )
      goto LABEL_5;
    Network = ndisIfCreateNetwork((struct _GUID *)v3 + 5, *((_DWORD *)v3 + 4));
    if ( Network >= 0 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v3 + 5);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v7);
      if ( !NetworkBlock )
        goto LABEL_12;
LABEL_5:
      *((_QWORD *)v2 + 7) = NetworkBlock;
      if ( !*((_QWORD *)v2 + 213) )
      {
        v8 = *((_WORD *)v3 + 39);
        if ( !v8 )
          goto LABEL_9;
        v12 = (*((_QWORD *)v3 + 9) >> 24) & 0xFFFFFF;
        if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v8, &v12, 0, 0) )
        {
          *((_QWORD *)v3 + 9) = 0LL;
LABEL_9:
          v4 = 1;
        }
        Network = ndisIfCreateInterface(
                    NetworkBlock,
                    v4,
                    (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v2 + 64),
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    NdisIfBlockSourceAutomaticLoopback);
      }
      if ( Network >= 0 )
      {
LABEL_12:
        _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
        ndisNsiNotifyClientCompartmentChange(v2, 1LL);
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
        *((_DWORD *)v2 + 10) &= ~8u;
        v10 = v9;
        COMPARTMENTBLOCK_DECREMENT_REF(v2);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
      }
    }
  }
  return (unsigned int)Network;
}
