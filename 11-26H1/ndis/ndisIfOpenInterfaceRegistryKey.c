/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x14015F120
 * Callers:
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015DA60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015DF30 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x14015EB10 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016D6E0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_Dd @ 0x1400CF164 (WPP_RECORDER_SF__guid_Dd.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(__int64 a1, KRegKey *this, ACCESS_MASK a3, char a4)
{
  int v8; // edx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int16 v12; // cx
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-248h] BYREF
  wchar_t v15[256]; // [rsp+50h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2LL, a1, 0LL);
  v9 = v15;
  v14 = 0LL;
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = -1073741811;
  if ( v10 )
  {
    v11 = 0;
    v12 = 2 * v10;
    v14.Length = -2 - v12;
    v14.MaximumLength = -v12;
    v14.Buffer = v15;
  }
  if ( v11 >= 0 )
    v11 = KRegKey::Open(this, a3, &v14, 0LL);
  if ( v11 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_14011F6E0 + 96) )
      goto LABEL_12;
    netsetupBuildObjectPath(2LL, a1, 1LL);
    v11 = KRegKey::Open(this, a3, v15, 0LL);
  }
  if ( v11 >= 0 )
    return 0LL;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      a1,
      a4,
      v11,
      *(_QWORD *)&v14.Length,
      v14.Buffer);
  return (unsigned int)v11;
}
