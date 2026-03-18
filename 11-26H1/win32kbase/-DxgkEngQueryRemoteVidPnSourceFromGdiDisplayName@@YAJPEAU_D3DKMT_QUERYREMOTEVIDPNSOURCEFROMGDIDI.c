/*
 * XREFs of ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName(
        struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *Src)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 DeviceFromName; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, 0x44uLL);
  RtlCopyFromUser(SourceString, Src, 0x44uLL);
  v2 = 0;
  SourceString[31] = 0;
  EnterSharedCrit(1LL, 1LL, v3, v4);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString);
  v9 = DeviceFromName;
  if ( DeviceFromName && (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 )
    RtlCopyToUser(&Src->VidPnSourceId, (void *)(DeviceFromName + 248), 4uLL);
  else
    v2 = -1073741811;
  UserSessionSwitchLeaveCritWithNonPaged(v6, v9, v7, v8);
  return v2;
}
