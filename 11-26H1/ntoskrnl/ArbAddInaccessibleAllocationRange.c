/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x14078A5BC
 * Callers:
 *     IopMemInitialize @ 0x1407A94C8 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ArbpGetRegistryValue @ 0x14078C9B0 (ArbpGetRegistryValue.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  int v6; // r9d
  int v7; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v10; // eax
  int v11; // ecx
  _QWORD v12[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v13[2]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v14; // [rsp+68h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v12[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  v12[0] = 7733366LL;
  Handle = 0LL;
  v13[1] = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v13[0] = 2228258;
    v14 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValue = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( RegistryValue < 0 )
    {
LABEL_20:
      ZwClose(KeyHandle);
      return RegistryValue;
    }
    RegistryValue = ArbpGetRegistryValue(Handle);
    if ( RegistryValue < 0 )
      goto LABEL_4;
    if ( MEMORY[4] == 1 )
    {
      if ( *(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2) )
      {
LABEL_9:
        RegistryValue = -1073741811;
LABEL_19:
        ZwClose(Handle);
        goto LABEL_20;
      }
      RegistryValue = ArbpGetRegistryValue(Handle);
      if ( RegistryValue < 0 )
      {
LABEL_4:
        v7 = 0;
        if ( RegistryValue == -1073741670 )
          v7 = -1073741670;
        RegistryValue = v7;
        goto LABEL_19;
      }
      ExFreePoolWithTag(0LL, 0);
    }
    if ( MEMORY[4] == 10 )
    {
      v8 = MEMORY[8] + 32LL;
      v9 = MEMORY[8] + 40LL;
      if ( v9 < v8 + 32 * (unsigned __int64)*(unsigned int *)(MEMORY[8] + 0x24LL) + 8 )
      {
        do
        {
          v10 = *(unsigned __int8 *)(v9 + 1);
          v11 = *(_DWORD *)(a1 + 32);
          if ( v10 == v11 || (_BYTE)v10 == 7 && v11 == 3 )
          {
            LOBYTE(v6) = 64;
            RegistryValue = RtlAddRange(a2, *(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24), v6, 1, 0LL, 0LL);
            if ( RegistryValue < 0 )
              break;
          }
          v9 += 32LL;
        }
        while ( v9 < v8 + 32 * (unsigned __int64)*(unsigned int *)(v8 + 4) + 8 );
      }
      goto LABEL_19;
    }
    goto LABEL_9;
  }
  return result;
}
