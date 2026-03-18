/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x14098838C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1404B9F90 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404DEF40 (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x1404ED020 (PnpValidateRegistryString.c)
 *     PnpDuplicateUnicodeString @ 0x1404F5F44 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v8; // rax
  NTSTATUS v9; // ebx
  wchar_t *Buffer; // rsi
  _WORD *v11; // rcx
  unsigned __int64 v12; // rbx
  _WORD *Pool2; // rax
  _WORD *v14; // rdi
  int RegistryValue; // ebx
  unsigned int v16; // edx
  unsigned __int16 Length; // r14
  int v18; // esi
  __int64 v19; // rsi
  UNICODE_STRING v20; // xmm0
  _WORD *v22; // rcx
  unsigned __int64 v23; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  __int128 v25; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  Buffer = 0LL;
  RemainingString = 0LL;
  v25 = 0LL;
  if ( (unsigned int)v8 <= 4 || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[(v8 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( !a4 )
        goto LABEL_22;
      *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_20;
    }
    goto LABEL_34;
  }
  *(_DWORD *)&RemainingString.Length = 1048590;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_9;
  v12 = (unsigned __int16)(*a2 - 4);
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v14 = Pool2;
  if ( !Pool2 )
  {
LABEL_34:
    v9 = -1073741670;
    goto LABEL_22;
  }
  memmove(Pool2, (const void *)(*((_QWORD *)a2 + 1) + 2LL), (unsigned int)v12);
  v14[v12 >> 1] = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  ExFreePool(v14);
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryString(0LL) )
    {
      v22 = (_WORD *)MEMORY[8];
      v23 = MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1);
      if ( MEMORY[8] < v23 )
      {
        do
        {
          if ( !*v22 )
            break;
          ++v22;
        }
        while ( (unsigned __int64)v22 < v23 );
      }
      LOWORD(v25) = (_WORD)v22 - MEMORY[8];
      WORD1(v25) = MEMORY[0xC];
      *((_QWORD *)&v25 + 1) = MEMORY[8];
    }
    else
    {
      ExFreePoolWithTag(0LL, 0);
    }
  }
LABEL_9:
  v16 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( *((_QWORD *)&v25 + 1) )
    v16 += (unsigned __int16)v25 + 2;
  if ( (unsigned __int64)v16 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_22;
  }
  DestinationString.Length = v16;
  DestinationString.MaximumLength = v16 + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      Length = DestinationString.Length;
      v18 = DestinationString.Length >> 1;
      if ( !*((_QWORD *)&v25 + 1) )
      {
        v19 = v18 - (*a2 >> 1);
LABEL_17:
        v20 = DestinationString;
        DestinationString = 0LL;
        *(UNICODE_STRING *)a3 = v20;
        if ( a4 )
          RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v19));
        goto LABEL_19;
      }
      v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v25);
      if ( v9 >= 0 )
      {
        DestinationString.Length = RemainingString.Length + Length;
        v19 = (unsigned int)(v18 + 1);
        goto LABEL_17;
      }
    }
LABEL_19:
    Buffer = DestinationString.Buffer;
    goto LABEL_20;
  }
  v9 = -1073741670;
LABEL_20:
  if ( Buffer )
    ExFreePool(Buffer);
LABEL_22:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
