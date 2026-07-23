/*
 * XREFs of WheapScanRegistryForPolicyChanges @ 0x14084FF3C
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x14084FC40 (WheaRegChangeNotifyCallback.c)
 *     WheapLoadPolicy @ 0x140CEE99C (WheapLoadPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     WheapSetPolicyValue @ 0x140850024 (WheapSetPolicyValue.c)
 */

void WheapScanRegistryForPolicyChanges()
{
  unsigned int v0; // edi
  _BYTE *v1; // rbx
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+4Ch] [rbp-24h]
  int v9; // [rsp+50h] [rbp-20h]
  int v10; // [rsp+54h] [rbp-1Ch]

  DestinationString = 0LL;
  ResultLength = 0;
  if ( CmpContextListLock.WaitBlock[1].Object )
  {
    v0 = 0;
    v1 = &unk_140E093AC;
    do
    {
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v1 - 28));
      v2 = ZwQueryValueKey(
             CmpContextListLock.WaitBlock[1].Object,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x13u,
             &ResultLength);
      if ( v2 >= 0 )
      {
        if ( v8 != 4 || v9 != 4 )
          goto LABEL_11;
        v3 = v10;
        *v1 = 1;
      }
      else
      {
        if ( v2 != -1073741772 || !*v1 )
          goto LABEL_11;
        v3 = *((_DWORD *)v1 - 1);
        *v1 = 0;
      }
      v4 = v3;
      WheapSetPolicyValue(v0, &v4);
LABEL_11:
      ++v0;
      v1 += 32;
    }
    while ( v0 < 0x16 );
  }
}
