/*
 * XREFs of _GetOverlayPackageTypeFromKey @ 0x18001E32C
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall GetOverlayPackageTypeFromKey(HANDLE KeyHandle, _DWORD *a2)
{
  int v3; // esi
  size_t v5; // rax
  _DWORD *Heap_0; // rdi
  NTSTATUS v7; // eax
  int v8; // ebx
  unsigned int v9; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"Type";
  v5 = 2 * wcslen(L"Type");
  ResultLength = 0;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  ValueName.Length = v5;
  ValueName.MaximumLength = v5 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap_0 )
    return (unsigned int)-1073741670;
  v7 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap_0, 0x10u, &ResultLength);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = Heap_0[2];
    if ( !v9 )
    {
      v8 = -1073741811;
      goto LABEL_12;
    }
    if ( v9 <= 4 )
    {
      if ( a2 )
        memmove(a2, Heap_0 + 3, v9);
      v3 = Heap_0[1];
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  if ( v7 == -2147483643 || v7 == -1073741789 )
LABEL_20:
    v8 = -1073741789;
LABEL_12:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  if ( v8 == -1073741772 )
  {
    *a2 = 0;
    return 0;
  }
  else if ( v8 >= 0 && v3 != 4 )
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v8;
}
