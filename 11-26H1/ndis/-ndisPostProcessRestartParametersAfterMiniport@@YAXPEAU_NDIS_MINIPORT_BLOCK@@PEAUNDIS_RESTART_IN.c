/*
 * XREFs of ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140064F70
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int v4; // edx
  __int64 MediaType; // r8
  bool v6; // zf
  KIRQL v7; // al
  void **p_MiniportThread; // rsi
  unsigned int *p_SupportedOidListLength; // r12
  unsigned int SupportedOidListLength; // edx
  unsigned int *v11; // r14
  KIRQL v12; // r15
  unsigned int *v13; // r13
  unsigned int *v14; // rcx
  unsigned int *SupportedOidList; // rcx
  unsigned int *Pool2; // rax
  unsigned int LookaheadSize; // eax
  unsigned int *v18; // [rsp+60h] [rbp+8h]
  void **v19; // [rsp+68h] [rbp+10h]

  if ( (a1->DeviceFlags & 1) != 0 )
    a2->General.SupportedPacketFilters |= 0x20u;
  if ( a2->Attributes.Oid )
  {
    a1->RecvScaleCapabilities = a2->RssCaps;
    v4 = a2->General.MacOptions | a2->MiniportMacOptionsToPreserve;
    a2->General.MacOptions = v4;
    MediaType = a1->MediaType;
    a1->MacOptions = v4;
    if ( (_DWORD)MediaType == 3 )
    {
      a1->MiniportMaximumLookahead = 512;
    }
    else
    {
      switch ( (int)MediaType )
      {
        case 0:
          LookaheadSize = a2->General.LookaheadSize;
          if ( LookaheadSize > 0x200 )
            LookaheadSize = 512;
          a1->MiniportMaximumLookahead = LookaheadSize;
          goto LABEL_6;
        case 4:
        case 9:
        case 10:
        case 15:
        case 16:
        case 18:
        case 19:
          a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
          break;
        default:
          break;
      }
      if ( (int)MediaType >= 20 )
      {
        a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
LABEL_15:
        v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        p_MiniportThread = &a1->MiniportThread;
        p_SupportedOidListLength = &a1->SupportedOidListLength;
        a1->MiniportThread = KeGetCurrentThread();
        SupportedOidListLength = a1->SupportedOidListLength;
        v11 = &a2->General.SupportedOidListLength;
        v12 = v7;
        v13 = &a2->General.SupportedOidListLength;
        v18 = &a1->SupportedOidListLength;
        v19 = &a1->MiniportThread;
        if ( a2->General.SupportedOidListLength != SupportedOidListLength )
        {
          SupportedOidList = a1->SupportedOidList;
          v18 = &a1->SupportedOidListLength;
          v19 = &a1->MiniportThread;
          if ( SupportedOidList )
          {
            ExFreePoolWithTag(SupportedOidList, 0);
            *p_SupportedOidListLength = 0;
            v18 = &a1->SupportedOidListLength;
            v13 = &a2->General.SupportedOidListLength;
            SupportedOidListLength = 0;
            v19 = &a1->MiniportThread;
          }
        }
        if ( *v11 && !SupportedOidListLength )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(66LL, *v11, 1835091022LL);
          p_SupportedOidListLength = v18;
          v11 = v13;
          p_MiniportThread = v19;
          a1->SupportedOidList = Pool2;
        }
        v14 = a1->SupportedOidList;
        if ( v14 )
        {
          memmove(v14, a2->General.SupportedOidList, *v11);
          *p_SupportedOidListLength = *v11;
        }
        *p_MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v12);
        a1->IfBlock->AccessType = a2->General.AccessType;
        a1->IfBlock->ConnectionType = a2->General.ConnectionType;
        a1->IfBlock->ifMtu = a2->General.MtuSize;
        return;
      }
      v6 = (_DWORD)MediaType == 0;
      if ( (int)MediaType < 0 )
      {
LABEL_13:
        if ( v6 )
          a1->MaximumLongAddresses = a2->General.MaxMulticastListSize;
        goto LABEL_15;
      }
    }
LABEL_6:
    if ( ((_DWORD)MediaType == 3 || ndisMediaTypeCl[MediaType]) && (v4 & 0x80000001) == 0x80000001 )
      a1->MiniportMaximumLookahead = 512;
    v6 = (_DWORD)MediaType == 0;
    goto LABEL_13;
  }
}
