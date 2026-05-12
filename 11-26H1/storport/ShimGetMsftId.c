/*
 * XREFs of ShimGetMsftId @ 0x1400C50C0
 * Callers:
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1400C4ED0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     StorCompareScsiDeviceId @ 0x14003DD80 (StorCompareScsiDeviceId.c)
 *     RaidAddEnclosureIdMapping @ 0x140076378 (RaidAddEnclosureIdMapping.c)
 *     RaidSaveEnclosureIdMapping @ 0x140076AC8 (RaidSaveEnclosureIdMapping.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401B90B4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall ShimGetMsftId(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  ULONG v5; // r15d
  int v6; // eax
  int v7; // ebx
  PVOID *v8; // rsi
  UUID v9; // xmm6
  __int64 result; // rax
  char v11; // al
  UUID v12; // xmm0
  char v13; // al
  int KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  __int64 p_Buf1; // [rsp+40h] [rbp-41h] BYREF
  struct _UNICODE_STRING v16; // [rsp+50h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-11h] BYREF
  UUID Buf1; // [rsp+88h] [rbp+7h] BYREF

  v2 = *(_BYTE **)(a1 + 144);
  KeyHandle = 16;
  v5 = (unsigned __int8)v2[3] | ((unsigned __int8)v2[2] << 8);
  p_Buf1 = (__int64)&Buf1;
  Buf2 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  Buf1 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v16, L"GeneratedID");
  v6 = PortRegistryReadDeviceKey(
         *(_QWORD *)(a1 + 8),
         (int)&DestinationString,
         (int)&v16,
         3,
         (__int64)&p_Buf1,
         &KeyHandle);
  if ( v6 == -1073741772 )
  {
    v7 = 0;
    ExAcquireResourceExclusiveLite(&EnclosureIdListLock, 1u);
    v8 = (PVOID *)EnclosureIdList;
    v9 = 0LL;
    while ( v8 != &EnclosureIdList )
    {
      if ( !(unsigned int)StorCompareScsiDeviceId(v2, v8[2]) )
      {
        v9 = *(UUID *)(v8 + 3);
        break;
      }
      v8 = (PVOID *)*v8;
    }
    Buf1 = v9;
    if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
    {
      v7 = ExUuidCreate(&Buf1);
      if ( v7 >= 0 )
      {
        v7 = RaidSaveEnclosureIdMapping(v2, v5, &Buf1);
        if ( v7 >= 0 )
          v7 = RaidAddEnclosureIdMapping(v2, v5, &Buf1);
      }
    }
    ExReleaseResourceLite(&EnclosureIdListLock);
    if ( v7 < 0 )
      return 3221225473LL;
    v6 = PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&DestinationString,
           (unsigned int)&v16,
           3,
           p_Buf1,
           KeyHandle);
  }
  if ( v6 < 0 )
    return 3221225473LL;
  v11 = *(_BYTE *)a2 & 0xF1;
  p_Buf1 = *(_QWORD *)"MSFT    ";
  v12 = Buf1;
  *(_BYTE *)a2 = v11 | 1;
  v13 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v13 | 1;
  *(_QWORD *)(a2 + 4) = p_Buf1;
  result = 0LL;
  *(UUID *)(a2 + 12) = v12;
  return result;
}
