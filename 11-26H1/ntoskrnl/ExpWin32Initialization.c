/*
 * XREFs of ExpWin32Initialization @ 0x140CEC674
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 */

bool ExpWin32Initialization()
{
  int v0; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+32h] [rbp-27h]
  int v5; // [rsp+34h] [rbp-25h]
  int v6; // [rsp+38h] [rbp-21h]
  __int128 v7; // [rsp+3Ch] [rbp-1Dh]
  int v8; // [rsp+4Ch] [rbp-Dh]
  int v9; // [rsp+54h] [rbp-5h]
  __int64 (__fastcall *v10)(int, __int64, __int64, _DWORD *, int *, int); // [rsp+68h] [rbp+Fh]
  POBJECT_TYPE *(__fastcall *v11)(__int64, int *, int, int); // [rsp+70h] [rbp+17h]
  POBJECT_TYPE *(__fastcall *v12)(int *); // [rsp+78h] [rbp+1Fh]
  __int64 (__fastcall *v13)(_DWORD *, __int64, __int64, char, int, __int64, __int64, __int64, __int64, __int64); // [rsp+80h] [rbp+27h]
  bool (__fastcall *v14)(unsigned __int64, int *, unsigned __int64, char); // [rsp+98h] [rbp+3Fh]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WindowStation");
  memset_0(&v3, 0, 0x78uLL);
  v3 = 120;
  v11 = ExpWin32CloseProcedure;
  v9 = 512;
  v12 = ExpWin32DeleteProcedure;
  v6 = 304;
  v14 = ExpWin32OkayToCloseProcedure;
  v8 = 983040;
  v13 = ExpWin32ParseProcedure;
  v10 = ExpWin32OpenProcedure;
  v4 = v4 & 0xA7 | 0x18;
  v7 = ExpWindowStationMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExWindowStationObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Desktop");
  v4 |= 0x40u;
  v13 = 0LL;
  v7 = ExpDesktopMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExDesktopObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Composition");
  v13 = 0LL;
  v5 = 1024;
  v4 = v4 & 0xBD | 2;
  v7 = ExpCompositionMapping;
  v0 = ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExCompositionObjectType);
  v5 = 0;
  if ( v0 < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"RawInputManager");
  v13 = 0LL;
  v4 = v4 & 0xBD | 2;
  v7 = ExpRawInputManagerMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExRawInputManagerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"CoreMessaging");
  v13 = 0LL;
  v4 = v4 & 0xBD | 2;
  v7 = ExpCoreMessagingMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExCoreMessagingObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ActivationObject");
  v13 = 0LL;
  v9 = 1;
  v4 = v4 & 0xB9 | 6;
  v7 = ExpActivationObjectMapping;
  return (int)ObCreateObjectType(&DestinationString, &v3, 0LL, (__int64)&ExActivationObjectType) >= 0;
}
