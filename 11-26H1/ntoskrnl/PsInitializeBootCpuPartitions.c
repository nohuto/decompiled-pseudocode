/*
 * XREFs of PsInitializeBootCpuPartitions @ 0x140CDDE44
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsCpuPartitionMoveCpus @ 0x1407F81A0 (PsCpuPartitionMoveCpus.c)
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CDE278 (PspCopyNodeRelativeMaskToAffinityEx.c)
 */

__int64 PsInitializeBootCpuPartitions()
{
  ULONG_PTR Pool2; // rax
  ULONG_PTR v1; // rdi
  NTSTATUS v2; // ebx
  struct _KAFFINITY_EX *v3; // r13
  unsigned __int16 *v4; // rsi
  NTSTATUS v5; // eax
  ULONG v6; // r15d
  NTSTATUS v7; // eax
  ULONG v8; // ebx
  ULONG i; // edx
  unsigned int v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  unsigned __int16 j; // cx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-71h] BYREF
  PVOID Object; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING String; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp-19h] BYREF
  _DWORD v21[2]; // [rsp+B0h] [rbp-9h] BYREF
  ULONG_PTR v22; // [rsp+B8h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+120h] [rbp+67h] BYREF
  ULONG Value; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE v26; // [rsp+130h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  v19[0] = 11665584LL;
  Object = 0LL;
  Value = 0;
  v19[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel\\CPU Partitions";
  ResultLength = 0;
  v20[1] = L"Masks";
  String = 0LL;
  v21[1] = 0;
  memset(&ObjectAttributes, 0, 44);
  v20[0] = 786442LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0x640uLL, 0x50707350u);
  v1 = Pool2;
  if ( Pool2 )
  {
    v3 = (struct _KAFFINITY_EX *)(Pool2 + 536);
    *(_QWORD *)(Pool2 + 536) = 2097153LL;
    memset_0((void *)(Pool2 + 544), 0, 0x100uLL);
    v4 = (unsigned __int16 *)(v1 + 800);
    *(_QWORD *)(v1 + 800) = 2097153LL;
    memset_0((void *)(v1 + 808), 0, 0x100uLL);
    v21[0] = 256;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
    v22 = v1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v5 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    if ( v5 >= 0 )
    {
      v6 = 0;
LABEL_8:
      while ( 1 )
      {
        v7 = ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, (PVOID)(v1 + 1064), 0x216u, &ResultLength);
        if ( v7 == -2147483622 )
          break;
        ++v6;
        if ( v7 >= 0 )
        {
          *(_WORD *)(v1 + 2 * ((unsigned __int64)*(unsigned int *)(v1 + 1076) >> 1) + 1080) = 0;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v1 + 1080));
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwOpenKey(&Handle, 8u, &ObjectAttributes);
          if ( v2 < 0 )
            goto LABEL_30;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwOpenKey(&v26, 1u, &ObjectAttributes);
          if ( v2 < 0 )
            goto LABEL_30;
          v8 = 0;
          for ( i = 0; ; i = v8 )
          {
            v12 = ZwEnumerateValueKey(v26, i, KeyValueFullInformation, (PVOID)(v1 + 256), 0x118u, &ResultLength);
            if ( v12 == -2147483622 )
              break;
            ++v8;
            if ( v12 >= 0 )
            {
              *(_DWORD *)(&String.MaximumLength + 1) = 0;
              String.Buffer = (wchar_t *)(v1 + 276);
              String.Length = *(_WORD *)(v1 + 272);
              String.MaximumLength = String.Length;
              if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
              {
                memset_0((void *)v1, 0, 0x100uLL);
                v10 = *(_DWORD *)(v1 + 268);
                v11 = 256LL;
                if ( v10 <= 0x100 )
                  v11 = v10;
                memmove((void *)v1, (const void *)(v1 + *(unsigned int *)(v1 + 264) + 256LL), v11);
                PspCopyNodeRelativeMaskToAffinityEx((unsigned __int16)Value, v21, v3);
                RtlOrAffinityEx((struct _KAFFINITY_EX *)(v1 + 800), v3, v1 + 800);
              }
            }
          }
          for ( j = 0; j < *v4; ++j )
          {
            if ( *(_QWORD *)&v4[4 * j + 4] )
            {
              ObjectAttributes.RootDirectory = *(HANDLE *)&stru_140FC11F0.UserAffinityPrimaryGroup;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.SecurityDescriptor = (PVOID)PsCpuPartitionDefaultSd;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 592;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              if ( (int)PsCreateCpuPartition(
                          (__int64)&ObjectAttributes,
                          0xE0007u,
                          0,
                          1114665808LL,
                          1,
                          PspSystemCpuPartition,
                          &Object,
                          0LL) < 0 )
                goto LABEL_8;
              if ( (int)PsCpuPartitionMoveCpus(
                          (__int64 *)Object,
                          (_WORD ***)PspSystemCpuPartition,
                          (struct _KAFFINITY_EX *)(v1 + 800)) < 0 )
              {
                ObfDereferenceObjectWithTag(Object, 0x746C6644u);
                goto LABEL_8;
              }
              memset_0((void *)(v1 + 808), 0, 8LL * *v4);
              *v4 = 1;
              break;
            }
          }
          ZwClose(Handle);
          Handle = 0LL;
          ZwClose(v26);
          v26 = 0LL;
        }
      }
      v2 = 0;
    }
    else
    {
      v2 = 0;
      if ( v5 != -1073741772 )
        v2 = v5;
    }
LABEL_30:
    ExFreePoolWithTag((PVOID)v1, 0);
  }
  else
  {
    v2 = -1073741670;
  }
  if ( v26 )
    ZwClose(v26);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
