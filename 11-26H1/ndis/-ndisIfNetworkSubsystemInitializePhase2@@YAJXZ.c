/*
 * XREFs of ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D2D28
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140146FA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x14004A9F0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x14006C6C0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400D298C (ndisIfCreateNetworkBlock.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 ndisIfNetworkSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int v1; // edx
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // r12
  unsigned int v10; // r15d
  KIRQL v11; // r13
  struct _NDIS_IF_NETWORK_BLOCK *v12; // rdi
  __int64 v13; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r14
  _QWORD v20[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v21[20]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v22; // [rsp+130h] [rbp+67h]
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+138h] [rbp+6Fh] BYREF
  void *v24; // [rsp+140h] [rbp+77h]

  v0 = 0LL;
  memset(v20, 0, 0x48uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      24,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids);
  }
  memset(v21, 0, 0x70uLL);
  LODWORD(v21[3]) = 6;
  v21[2] = &NPI_MS_NDIS_MODULEID;
  v21[4] = 0x100000000LL;
  v21[5] = 0LL;
  LODWORD(v21[6]) = 16;
  v21[7] = 0LL;
  LODWORD(v21[8]) = 528;
  LODWORD(v21[13]) = 0;
  v2 = NsiEnumerateObjectsAllParametersEx(v21);
  if ( v2 >= 0 )
  {
    v3 = v21[13];
    if ( LODWORD(v21[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v3 = v21[13];
          v0 = 0LL;
        }
        v4 = 16 * v3;
        if ( 16 * (unsigned __int64)v3 > 0xFFFFFFFF || 544 * v3 < 16 * v3 )
        {
          v2 = -1073741670;
          goto LABEL_28;
        }
        v5 = v4;
        Pool2 = ExAllocatePool2(64LL, v4 + 528LL * v3, 1718174798LL);
        v0 = (void *)Pool2;
        v7 = Pool2;
        if ( !Pool2 )
        {
          v2 = -1073741670;
          goto LABEL_30;
        }
        v21[5] = Pool2;
        LODWORD(v21[6]) = 16;
        v21[7] = v5 + Pool2;
        LODWORD(v21[8]) = 528;
        v8 = NsiEnumerateObjectsAllParametersEx(v21);
        if ( v8 != 261 )
          break;
        v3 = v21[13];
      }
      v2 = v8;
      if ( v8 < 0 )
        goto LABEL_29;
      v9 = v21[7];
      NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v21[5];
      v22 = v21[7];
      v10 = 0;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      if ( LODWORD(v21[13]) )
      {
        v12 = NetworkBlock;
        v24 = (void *)v7;
        do
        {
          v13 = v9 + 528LL * v10;
          if ( *(_BYTE *)v13 == 0xAC && *(_BYTE *)(v13 + 1) && *(_WORD *)(v13 + 2) >= 0x210u )
          {
            CompartmentBlock = ndisIfFindCompartmentBlock(*(_DWORD *)(v13 + 4));
            v16 = 2 * v15;
            v17 = (__int64)CompartmentBlock;
            v18 = (__int64)v12 + 8 * v16;
            if ( CompartmentBlock )
            {
              NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)v12 + 8 * v16));
              if ( !NetworkBlock )
                v2 = ndisIfCreateNetworkBlock(v17, v18, v13, &NetworkBlock);
            }
            else
            {
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v11);
              v20[3] = 6LL;
              v20[1] = 0LL;
              v20[2] = &NPI_MS_NDIS_MODULEID;
              v20[6] = 16LL;
              v20[8] = 528LL;
              v20[0] = 0LL;
              v20[4] = 0x300000000LL;
              v20[5] = v18;
              v20[7] = v13;
              NsiSetAllParametersEx(v20);
              v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
            }
            v9 = v22;
          }
          ++v10;
        }
        while ( v10 < LODWORD(v21[13]) );
        v0 = v24;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v11);
LABEL_28:
      if ( !v0 )
        goto LABEL_30;
LABEL_29:
      ExFreePoolWithTag(v0, 0);
    }
  }
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      v2);
  return (unsigned int)v2;
}
