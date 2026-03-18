/*
 * XREFs of CmpRecoverEnlistment @ 0x14085DCE4
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x1407258F0 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x140726310 (ZwRecoverEnlistment.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     CmpTransSearchAddTransFromRm @ 0x140AE0F20 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpRecoverEnlistment(__int64 a1, __int64 a2, GUID *a3)
{
  GUID *v3; // rsi
  GUID *v5; // rcx
  __int64 result; // rax
  NTSTATUS v7; // edi
  void *v8; // r8
  UNICODE_STRING v9; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  EnlistmentKey = 0LL;
  v3 = a3;
  EnlistmentHandle = 0LL;
  v5 = a3;
  LOBYTE(a3) = 1;
  v9 = 0LL;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  result = RtlStringFromGUIDEx(v5, &v9, a3);
  if ( (int)result >= 0 )
  {
    v7 = CmpTransSearchAddTransFromRm(a1, 0, (int)v3 + 16, 1, (__int64)&EnlistmentKey);
    if ( v7 >= 0 )
    {
      v8 = *(void **)(a1 + 48);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      v7 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v8, v3, &ObjectAttributes);
      if ( v7 >= 0 )
      {
        v7 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&v9);
    return (unsigned int)v7;
  }
  return result;
}
