/*
 * XREFs of WdipSemLoadConfigInfo @ 0x140825870
 * Callers:
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     WdipSemOpenRegistryKey @ 0x140827820 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408278B0 (WdipSemQueryValueFromRegistry.c)
 */

__int64 WdipSemLoadConfigInfo()
{
  int v0; // ebx
  int v1; // eax
  HANDLE v2; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+60h] [rbp+20h] BYREF
  __int64 v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+38h]

  KeyHandle = 0LL;
  LODWORD(v6) = 0;
  v5 = 0;
  v7 = 0;
  v0 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config");
  if ( v0 < 0 )
    goto LABEL_13;
  if ( (int)WdipSemQueryValueFromRegistry(KeyHandle, &v5, (__int64)&v6) >= 0 && !v5 )
  {
    v0 = -1073741823;
    goto LABEL_13;
  }
  v0 = WdipSemQueryValueFromRegistry(KeyHandle, &v7, (__int64)&v6);
  if ( v0 < 0 )
  {
    v0 = 0;
    v1 = 600;
LABEL_10:
    LOBYTE(stru_140F042A0.PropagateBoostsEntry.Next) = 1;
    goto LABEL_11;
  }
  if ( v7 )
  {
    v1 = 60 * v7;
    goto LABEL_10;
  }
  LOBYTE(stru_140F042A0.PropagateBoostsEntry.Next) = 0;
  v1 = 600;
LABEL_11:
  v2 = KeyHandle;
  HIDWORD(stru_140F06A28.SListFaultAddress) = v1;
  DestinationString = 0LL;
  if ( !KeyHandle )
    return (unsigned int)v0;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  ZwDeleteValueKey(v2, &DestinationString);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
