/*
 * XREFs of ArbInitializeOsInaccessibleRange @ 0x140CBB96C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall ArbInitializeOsInaccessibleRange(char a1)
{
  NTSTATUS v1; // ebx
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  NTSTATUS v5; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Disposition[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp-98h] BYREF
  const wchar_t *v11; // [rsp+78h] [rbp-90h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  _DWORD Data[10]; // [rsp+C8h] [rbp-40h] BYREF
  char v15; // [rsp+F1h] [rbp-17h]
  __int64 v16; // [rsp+100h] [rbp-8h]
  __int64 v17; // [rsp+108h] [rbp+0h]

  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  Disposition[0] = 0;
  v9[0] = 7733366LL;
  Handle = 0LL;
  v10[1] = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.Attributes = 576;
    v11 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    v10[0] = 2228258;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, Disposition);
    if ( v4 >= 0 )
    {
      memset_0(Data, 0, 0x48uLL);
      Data[7] = 1;
      ValueName.Buffer = L"PhysicalAddress";
      Data[9] = 1;
      Data[0] = 72;
      v15 = 3;
      v16 = 1LL << a1;
      v17 = -1LL;
      *(_DWORD *)&ValueName.Length = 1966110;
      v5 = ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, 0x48u);
      if ( v5 < 0 )
        v1 = v5;
      ZwClose(Handle);
      ZwClose(KeyHandle);
      return v1;
    }
    else
    {
      ZwClose(KeyHandle);
      return v4;
    }
  }
  return result;
}
