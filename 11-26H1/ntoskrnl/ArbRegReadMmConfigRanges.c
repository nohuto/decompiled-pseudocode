/*
 * XREFs of ArbRegReadMmConfigRanges @ 0x14078C030
 * Callers:
 *     ArbLibraryInitialize @ 0x14078BA00 (ArbLibraryInitialize.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ArbpGetRegistryValue @ 0x14078C9B0 (ArbpGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 ArbRegReadMmConfigRanges()
{
  unsigned int v0; // ebx
  int RegistryValue; // eax
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // r14d
  void *Pool2; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v9[0] = 7733366LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  v10 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0
    || (LODWORD(v10) = 2228258,
        *((_QWORD *)&v10 + 1) = L"ReservedResources",
        ObjectAttributes.RootDirectory = KeyHandle,
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) < 0) )
  {
    v0 = 0;
  }
  else
  {
    P = 0LL;
    RegistryValue = ArbpGetRegistryValue(Handle);
    v2 = (char *)P;
    v0 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 10 )
      {
        v4 = *((unsigned int *)P + 2);
        v5 = *(_DWORD *)((char *)P + v4 + 36);
        if ( v5 )
        {
          v6 = 32 * v5 + 8;
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          ArbMmConfigRange = (__int64)Pool2;
          if ( Pool2 )
            memmove(Pool2, &v2[v4 + 32], v6);
          else
            v0 = -1073741670;
        }
      }
      else
      {
        v0 = -1073741811;
      }
    }
    else
    {
      v3 = 0;
      if ( v0 == -1073741670 )
        v3 = -1073741670;
      v0 = v3;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
