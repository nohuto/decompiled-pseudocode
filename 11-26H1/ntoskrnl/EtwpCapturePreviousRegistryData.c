/*
 * XREFs of EtwpCapturePreviousRegistryData @ 0x140A376AC
 * Callers:
 *     EtwpRegTraceCallback @ 0x140A36E90 (EtwpRegTraceCallback.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCapturePreviousRegistryData(__int64 a1)
{
  UNICODE_STRING *v1; // rax
  void *v3; // rcx
  void *Pool2; // rbx
  UNICODE_STRING v5; // xmm1
  ULONG Length; // eax
  NTSTATUS v7; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(UNICODE_STRING **)(a1 + 8);
  ValueName = 0LL;
  ResultLength = 0;
  v3 = *(void **)a1;
  Pool2 = 0LL;
  v5 = *v1;
  KeyHandle = 0LL;
  ValueName = v5;
  if ( ObOpenObjectByPointer(v3, 0x200u, 0LL, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle) >= 0 )
  {
    do
    {
      Length = ResultLength;
      if ( ResultLength )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          goto LABEL_13;
        Length = ResultLength;
      }
      v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    }
    while ( v7 == -2147483643 || v7 == -1073741789 );
    if ( v7 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = Pool2;
    }
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
