/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x14001C190
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14001AA20 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14001CD80 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  KIRQL v2; // si
  unsigned int v3; // edi
  unsigned int v5; // edi
  __int64 v6; // r14
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v8; // rbp
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+40h] [rbp-4A8h] BYREF
  __int128 v13; // [rsp+48h] [rbp-4A0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-490h]
  _BYTE v15[1104]; // [rsp+60h] [rbp-488h] BYREF

  v12 = 0;
  v14 = 0LL;
  v13 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      30,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v13);
  KeEnterCriticalRegion();
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  memset(v15, 0, 0x444uLL);
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 8) )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 14) )
    goto LABEL_4;
  v5 = *((_DWORD *)a1 + 12);
  v6 = *((unsigned int *)a1 + 13);
  if ( (unsigned int)v6 + v5 > 0x444 )
    goto LABEL_4;
  if ( (unsigned int)v6 + v5 < v5 )
    goto LABEL_4;
  memmove(&v15[v6], *((const void **)a1 + 5), v5);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)(*((union _NET_LUID_LH **)a1 + 2))->Value);
  v8 = InterfaceByNetLuid;
  if ( !InterfaceByNetLuid )
    goto LABEL_4;
  Compartment = InterfaceByNetLuid->Compartment;
  if ( DWORD1(v13) == *((_DWORD *)Compartment + 4) )
    goto LABEL_14;
  v11 = *((_QWORD *)&v13 + 1) - *(_QWORD *)((char *)Compartment + 1684);
  if ( *((_QWORD *)&v13 + 1) == *(_QWORD *)((char *)Compartment + 1684) )
    v11 = v14 - *(_QWORD *)((char *)Compartment + 1692);
  if ( v11 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || DWORD1(v13) != 1) )
  {
LABEL_4:
    v3 = -1073741811;
  }
  else
  {
LABEL_14:
    v3 = ndisNsiChangeInterfaceInfo(InterfaceByNetLuid, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v15, v5, v6, &v12);
    if ( v12 )
    {
      *((_QWORD *)&v13 + 1) = *((_QWORD *)a1 + 5);
      HIDWORD(v14) = *((_DWORD *)a1 + 13);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->RefCountTracker;
      *(_QWORD *)&v13 = 0LL;
      LODWORD(v14) = v12;
      NdisReferenceWithTag(RefCountTracker, 5u);
      ++v8->Ref;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v2);
      ndisNsiNotifyClientInterfaceChange(v8, 0LL, &v13, 0LL);
      v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
      IFBLOCK_DECREMENT_REF(v8, 5u);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      v3);
  KeLeaveCriticalRegion();
  return v3;
}
