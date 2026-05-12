/*
 * XREFs of ATAShimGetMsftId @ 0x1400C4C30
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1400C4BC0 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     RaTrimString @ 0x140039BB8 (RaTrimString.c)
 *     RaidAddATADeviceIdMapping @ 0x14007625C (RaidAddATADeviceIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x14007698C (RaidSaveATADeviceIdMapping.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall ATAShimGetMsftId(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int16 *v4; // rdi
  struct _STRING v5; // xmm6
  char v6; // al
  struct _STRING v7; // xmm0
  char v8; // al
  __int64 result; // rax
  STRING String1; // [rsp+20h] [rbp-50h] BYREF
  __int128 Buf2; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING Buf1; // [rsp+40h] [rbp-30h] BYREF

  Buf1 = 0LL;
  Buf2 = 0LL;
  String1 = 0LL;
  v3 = RaTrimString(0x48536152u, (unsigned __int16 *)(a1 + 120), &String1);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
  v4 = *(unsigned __int16 **)&WPP_MAIN_CB.SectorSize;
  v5 = 0LL;
  while ( v4 != &WPP_MAIN_CB.SectorSize )
  {
    if ( !RtlCompareString(&String1, (const STRING *)v4 + 1, 0) )
    {
      v5 = (struct _STRING)*((_OWORD *)v4 + 2);
      break;
    }
    v4 = *(unsigned __int16 **)v4;
  }
  Buf1 = v5;
  if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
  {
    v3 = ExUuidCreate((UUID *)&Buf1);
    if ( v3 >= 0 )
    {
      v3 = RaidSaveATADeviceIdMapping(String1.Buffer, String1.Length, (const GUID *)&Buf1);
      if ( v3 >= 0 )
        v3 = RaidAddATADeviceIdMapping(String1.Buffer, String1.Length, &Buf1);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
  ExFreePoolWithTag(String1.Buffer, 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v6 = *(_BYTE *)a2 & 0xF1;
  *(_QWORD *)&String1.Length = *(_QWORD *)"MSFT    ";
  v7 = Buf1;
  *(_BYTE *)a2 = v6 | 1;
  v8 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v8 | 1;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)&String1.Length;
  result = 0LL;
  *(struct _STRING *)(a2 + 12) = v7;
  return result;
}
