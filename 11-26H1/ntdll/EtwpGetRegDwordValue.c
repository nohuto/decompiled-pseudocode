/*
 * XREFs of EtwpGetRegDwordValue @ 0x180041564
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     StringCopyWorkerW @ 0x180103EFC (StringCopyWorkerW.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap_0; // rsi
  size_t v5; // rax
  NTSTATUS v6; // ebx
  size_t v7; // rdx
  _DWORD *v8; // rdi
  size_t *v9; // r8
  const wchar_t *v10; // r9
  size_t v12; // rax
  size_t Length; // [rsp+20h] [rbp-60h]
  _WORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+34h] [rbp-4Ch]
  const wchar_t *v16; // [rsp+38h] [rbp-48h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  int v21; // [rsp+BCh] [rbp+3Ch]

  v21 = HIDWORD(a2);
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  KeyHandle = (HANDLE)-1LL;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap_0 )
    return 3221225495LL;
  v15 = 0;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v14[0] = v5;
  v14[1] = v5 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v8 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v8 )
    {
      StringCopyWorkerW(Heap_0, v7, v9, v10, Length);
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      ValueName.Buffer = Heap_0;
      v12 = 2 * wcslen(Heap_0);
      if ( v12 >= 0xFFFE )
        LOWORD(v12) = -4;
      ValueName.Length = v12;
      ValueName.MaximumLength = v12 + 2;
      v6 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, 0x10u, &ResultLength);
      if ( v6 >= 0 )
        *a3 = v8[3];
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      v6 = -1073741801;
    }
    NtClose(KeyHandle);
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return (unsigned int)v6;
}
