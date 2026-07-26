/*
 * XREFs of ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x140072630 (ndisHandleUModePnPOp.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1400658D0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_ZZ @ 0x1400D1FCC (WPP_RECORDER_SF_ZZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140138920 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfAliasChange(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        int a3,
        int a4)
{
  unsigned __int16 Length; // dx
  NTSTATUS v7; // edi
  wchar_t *Buffer; // rax
  KIRQL v9; // bl
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  struct _NDIS_IF_BLOCK *v11; // rsi
  unsigned __int8 *p_ifAlias; // r15
  unsigned __int16 v13; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v15; // bl
  char v17[8]; // [rsp+28h] [rbp-58h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+64h] [rbp-1Ch]
  GUID Guid; // [rsp+68h] [rbp-18h] BYREF

  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v17[4] = HIDWORD(a1);
    WPP_RECORDER_SF_ZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  }
  Length = a1->Length;
  if ( a1->Length < ndisDeviceStr.Length )
    goto LABEL_4;
  Buffer = a1->Buffer;
  GuidString.Length = Length - ndisDeviceStr.Length;
  GuidString.MaximumLength = Length - ndisDeviceStr.Length + 2;
  GuidString.Buffer = &Buffer[(unsigned __int64)ndisDeviceStr.Length >> 1];
  v7 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v7 >= 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    v11 = InterfaceByInterfaceGuid;
    if ( !InterfaceByInterfaceGuid )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
LABEL_4:
      v7 = -1073741772;
      goto LABEL_11;
    }
    p_ifAlias = (unsigned __int8 *)&InterfaceByInterfaceGuid->ifAlias;
    v13 = 512;
    if ( a2->Length <= 0x200u )
      v13 = a2->Length;
    *(_WORD *)p_ifAlias = v13;
    memmove(v11->ifAlias.String, a2->Buffer, v13);
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v11->RefCountTracker;
    v20 = 516;
    v19[0] = 0LL;
    v19[1] = p_ifAlias;
    v21 = 20;
    NdisReferenceWithTag(RefCountTracker, 0xBu);
    ++v11->Ref;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v9);
    ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v11->NetLuid, 0x204u, 4u, p_ifAlias);
    ndisNsiNotifyClientInterfaceChange(v11, 0LL, v19, 0LL);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    IFBLOCK_DECREMENT_REF(v11, 0xBu);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v15);
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = v7;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_ec7904e244ab3ff37c3c2f5002e64fc8_Traceguids,
      *(_QWORD *)v17);
  }
  return (unsigned int)v7;
}
