/*
 * XREFs of ?CompositionRefreshRateBoost@Win32k@InputTraceLogging@@SAXI@Z @ 0x14014D41C
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Win32k::CompositionRefreshRateBoost(int a1)
{
  _DWORD v1[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  _DWORD *v7; // [rsp+68h] [rbp-18h]
  __int64 v8; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x200) != 0
    && (qword_1402A9E58 & 0x200) == qword_1402A9E58 )
  {
    v1[0] = a1;
    v7 = v1;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 512LL;
    v8 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v4 = &unk_14028CC50;
    UserData.Reserved = 2;
    v5 = 51;
    v6 = 1;
    v1[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
