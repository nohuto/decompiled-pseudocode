/*
 * XREFs of MyRegQueryString @ 0x1400610E0
 * Callers:
 *     CheckUSBFnConfiguration @ 0x140060208 (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x140060A58 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     memmove @ 0x140061600 (memmove.c)
 */

__int64 __fastcall MyRegQueryString(HANDLE KeyHandle, const WCHAR *a2, PVOID *a3)
{
  unsigned int *Pool2; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  size_t v8; // r14
  __int64 v9; // rax
  unsigned int *v10; // rax
  PVOID v11; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  ResultLength = 0;
  *a3 = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16LL, 1430540870LL);
  if ( !Pool2 )
  {
LABEL_2:
    v6 = -1073741670;
LABEL_13:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    return (unsigned int)v6;
  }
  v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, 0x10u, &ResultLength);
  v6 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    while ( 1 )
    {
      v8 = Pool2[2];
      v9 = ExAllocatePool2(64LL, v8, 1430540870LL);
      *a3 = (PVOID)v9;
      if ( !v9 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v10 = (unsigned int *)ExAllocatePool2(64LL, ResultLength, 1430540870LL);
      Pool2 = v10;
      if ( !v10 )
        goto LABEL_2;
      v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, ResultLength, &ResultLength);
      if ( v6 < 0 )
        goto LABEL_12;
      v11 = *a3;
      if ( (_DWORD)v8 == Pool2[2] )
      {
        memmove(v11, Pool2 + 3, v8);
        goto LABEL_12;
      }
      ExFreePoolWithTag(v11, 0);
      *a3 = 0LL;
    }
    v6 = -1073741670;
  }
LABEL_12:
  ExFreePoolWithTag(Pool2, 0);
  if ( v6 < 0 )
    goto LABEL_13;
  return (unsigned int)v6;
}
