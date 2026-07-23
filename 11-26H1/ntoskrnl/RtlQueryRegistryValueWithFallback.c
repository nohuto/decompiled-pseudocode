/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x140A82610
 * Callers:
 *     DifRtlQueryRegistryValueWithFallbackWrapper @ 0x140699BA0 (DifRtlQueryRegistryValueWithFallbackWrapper.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  ULONG *Pool2; // rbp
  int v13; // ebx
  ULONG v15; // eax
  ULONG v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741801;
  v13 = -1073741772;
  if ( PrimaryHandle )
  {
    v13 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &v16);
    if ( v13 != -1073741772 )
      goto LABEL_8;
  }
  if ( FallbackHandle )
  {
    v13 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &v16);
LABEL_8:
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = Pool2[1];
      if ( v13 >= 0 )
      {
        v15 = Pool2[2];
        if ( ValueLength < v15 )
          v13 = -2147483643;
        else
          memmove(ValueData, Pool2 + 3, v15);
      }
      *ResultLength = Pool2[2];
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  return v13;
}
