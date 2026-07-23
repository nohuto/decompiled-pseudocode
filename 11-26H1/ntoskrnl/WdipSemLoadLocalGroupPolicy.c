/*
 * XREFs of WdipSemLoadLocalGroupPolicy @ 0x1408271BC
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140827110 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemOpenRegistryKey @ 0x140827820 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408278B0 (WdipSemQueryValueFromRegistry.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemLoadLocalGroupPolicy(HANDLE KeyHandle)
{
  ULONG v2; // edi
  NTSTATUS v4; // eax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int Flink; // edx
  ULONG ResultLength; // [rsp+40h] [rbp-71h] BYREF
  int v9; // [rsp+44h] [rbp-6Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID Guid; // [rsp+58h] [rbp-59h] BYREF
  _BYTE KeyInformation[12]; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+74h] [rbp-3Dh]
  WCHAR SourceString[68]; // [rsp+78h] [rbp-39h] BYREF

  ResultLength = 0;
  v9 = 0;
  v2 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( KeyHandle )
  {
    while ( 1 )
    {
      memset_0(KeyInformation, 0, 0x98uLL);
      v4 = ZwEnumerateKey(KeyHandle, v2++, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
      if ( v4 == -2147483622 )
        break;
      if ( v4 >= 0 )
      {
        if ( v13 >= 0x80 )
          return (unsigned int)-2147483643;
        SourceString[(unsigned __int64)v13 >> 1] = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
          && (int)WdipSemOpenRegistryKey(SourceString) >= 0
          && (int)WdipSemQueryValueFromRegistry(0LL, &v9, (__int64)&ResultLength) >= 0
          && !v9 )
        {
          Blink = stru_140F042A0.Timer.Header.WaitListHead.Blink;
          if ( !stru_140F042A0.Timer.Header.WaitListHead.Blink )
          {
            stru_140F042A0.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
            Blink = stru_140F042A0.Timer.Header.WaitListHead.Blink;
            if ( !stru_140F042A0.Timer.Header.WaitListHead.Blink )
              return (unsigned int)-1073741670;
          }
          Flink = (unsigned int)Blink[64].Flink;
          if ( Flink >= 0x40 )
            return (unsigned int)-1073741823;
          LODWORD(Blink[64].Flink) = Flink + 1;
          Blink[Flink] = (struct _LIST_ENTRY)Guid;
        }
      }
    }
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
