/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x1400BED44
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1400ADD90 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x140055D43 (RtlAddRange_0.c)
 *     ZwClose_0 @ 0x140055D67 (ZwClose_0.c)
 *     ZwOpenKey_0 @ 0x140055DE5 (ZwOpenKey_0.c)
 *     ArbpGetRegistryValue @ 0x1400A840C (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS result; // eax
  int v5; // ebx
  const WCHAR *v6; // rdx
  int RegistryValue; // eax
  _DWORD *v8; // rdi
  int v9; // eax
  const WCHAR *v10; // rdx
  char *v11; // r14
  char *i; // rsi
  int v13; // eax
  int v14; // ecx
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v16; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v18[2]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v19; // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v17[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
  v17[0] = 7733366LL;
  Handle = 0LL;
  v18[1] = 0;
  v16 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v18[0] = 2228258;
    v19 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v5 < 0 )
    {
LABEL_22:
      ZwClose_0(KeyHandle);
      return v5;
    }
    v6 = *(const WCHAR **)(a1 + 24);
    P = 0LL;
    RegistryValue = ArbpGetRegistryValue(Handle, v6, &P);
    v8 = P;
    v5 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_4;
    if ( *((_DWORD *)P + 1) == 1 )
    {
      v10 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
      if ( v10[((unsigned __int64)*((unsigned int *)P + 3) >> 1) - 1] )
      {
LABEL_9:
        v5 = -1073741811;
LABEL_19:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ZwClose_0(Handle);
        goto LABEL_22;
      }
      v5 = ArbpGetRegistryValue(Handle, v10, &v16);
      if ( v5 < 0 )
      {
LABEL_4:
        v9 = 0;
        if ( v5 == -1073741670 )
          v9 = -1073741670;
        v5 = v9;
        goto LABEL_19;
      }
      ExFreePoolWithTag(v8, 0);
      v8 = v16;
    }
    if ( v8[1] == 10 )
    {
      v11 = (char *)v8 + (unsigned int)v8[2] + 32;
      for ( i = v11 + 8; i < &v11[32 * *((unsigned int *)v11 + 1) + 8]; i += 32 )
      {
        v13 = (unsigned __int8)i[1];
        v14 = *(_DWORD *)(a1 + 32);
        if ( v13 == v14 || (_BYTE)v13 == 7 && v14 == 3 )
        {
          v5 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 0x40u, 1u, 0LL, 0LL);
          if ( v5 < 0 )
            break;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_9;
  }
  return result;
}
