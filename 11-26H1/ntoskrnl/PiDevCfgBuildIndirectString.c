/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x140A42AB8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v8; // rax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  wchar_t *Buffer; // rsi
  _WORD *v12; // rcx
  unsigned __int64 v13; // rbx
  WCHAR *Pool2; // rax
  WCHAR *v15; // rdi
  NTSTATUS RegistryValue; // ebx
  unsigned int v17; // edx
  unsigned __int16 Length; // r14
  int v19; // esi
  __int64 v20; // rsi
  UNICODE_STRING v21; // xmm0
  _WORD *v23; // rdx
  _WORD *v24; // rcx
  unsigned __int64 v25; // r8
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  __int128 v28; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  P = 0LL;
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v10 = 0LL;
  Buffer = 0LL;
  RemainingString = 0LL;
  v28 = 0LL;
  if ( (unsigned int)v8 <= 4 || (v12 = (_WORD *)*((_QWORD *)a2 + 1), *v12 != 37) || v12[(v8 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( !a4 )
        goto LABEL_25;
      *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_21;
    }
    goto LABEL_37;
  }
  *(_DWORD *)&RemainingString.Length = 1048590;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_10;
  v13 = (unsigned __int16)(*a2 - 4);
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v15 = Pool2;
  if ( !Pool2 )
  {
LABEL_37:
    v9 = -1073741670;
    goto LABEL_25;
  }
  memmove(Pool2, (const void *)(*((_QWORD *)a2 + 1) + 2LL), (unsigned int)v13);
  v15[v13 >> 1] = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, v15, 0, &P);
  ExFreePool(v15);
  if ( RegistryValue < 0 )
  {
LABEL_9:
    v10 = 0LL;
    goto LABEL_10;
  }
  v10 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
    ExFreePoolWithTag(v10, 0);
    goto LABEL_9;
  }
  v23 = (_WORD *)((char *)v10 + v10[2]);
  v24 = v23;
  v25 = (unsigned __int64)&v23[(unsigned __int64)v10[3] >> 1];
  if ( (unsigned __int64)v23 < v25 )
  {
    do
    {
      if ( !*v24 )
        break;
      ++v24;
    }
    while ( (unsigned __int64)v24 < v25 );
  }
  LOWORD(v28) = (_WORD)v24 - (_WORD)v23;
  WORD1(v28) = *((_WORD *)v10 + 6);
  *((_QWORD *)&v28 + 1) = (char *)v10 + v10[2];
LABEL_10:
  v17 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( *((_QWORD *)&v28 + 1) )
    v17 += (unsigned __int16)v28 + 2;
  if ( (unsigned __int64)v17 + 2 <= 0xFFFE )
  {
    DestinationString.Length = v17;
    DestinationString.MaximumLength = v17 + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
    {
      v9 = -1073741670;
LABEL_21:
      if ( Buffer )
        ExFreePool(Buffer);
      goto LABEL_23;
    }
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      Length = DestinationString.Length;
      v19 = DestinationString.Length >> 1;
      if ( !*((_QWORD *)&v28 + 1) )
      {
        v20 = v19 - (*a2 >> 1);
LABEL_18:
        v21 = DestinationString;
        DestinationString = 0LL;
        *(UNICODE_STRING *)a3 = v21;
        if ( a4 )
          RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v20));
        goto LABEL_20;
      }
      v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v28);
      if ( v9 >= 0 )
      {
        DestinationString.Length = RemainingString.Length + Length;
        v20 = (unsigned int)(v19 + 1);
        goto LABEL_18;
      }
    }
LABEL_20:
    Buffer = DestinationString.Buffer;
    goto LABEL_21;
  }
  v9 = -1073741562;
LABEL_23:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
