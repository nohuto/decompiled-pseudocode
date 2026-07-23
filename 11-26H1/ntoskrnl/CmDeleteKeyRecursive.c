/*
 * XREFs of CmDeleteKeyRecursive @ 0x1408577C8
 * Callers:
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, int a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v12; // r14
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v9 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, a4 - 2, &ResultLength);
      if ( v9 < 0 )
        break;
      v10 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v10;
      while ( *(_WORD *)(a3 + 2 * v10 + 16) );
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v12 = Pool2;
      if ( !Pool2 )
      {
        v14 = -1073741670;
        goto LABEL_13;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a3 + 2 * v13 + 16) );
      wcscpy_s(Pool2, v13 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v9 = CmDeleteKeyRecursive((int)KeyHandle, (int)v12, a3, a4, Length);
      ExFreePoolWithTag(v12, 0);
    }
    while ( v9 >= 0 );
    v14 = 0;
    if ( v9 != -2147483622 )
      v14 = v9;
    if ( v14 >= 0 )
      v14 = ZwDeleteKey(KeyHandle);
LABEL_13:
    ZwClose(KeyHandle);
    return v14;
  }
  return result;
}
