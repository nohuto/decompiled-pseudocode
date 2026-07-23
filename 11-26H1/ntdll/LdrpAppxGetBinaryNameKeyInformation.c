/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x1801379D0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  _DWORD *Heap_0; // rax
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-40h] BYREF
  SIZE_T Size; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)&ValueName.Length = 1441812LL;
  LODWORD(Size) = 0;
  ValueName.Buffer = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&Size);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741789 )
    {
      Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
      v7 = Heap_0;
      if ( !Heap_0 )
        return (unsigned int)-1073741801;
      v9 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap_0, Size, (PULONG)&Size);
      if ( v9 < 0 )
      {
LABEL_14:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v7);
        return (unsigned int)v9;
      }
      if ( v7[1] != 1 || v7[2] < 4u || (v6 = v7 + 3, *((_WORD *)v7 + ((unsigned __int64)(unsigned int)v7[2] >> 1) + 5)) )
      {
        v9 = -1073739509;
        goto LABEL_14;
      }
    }
    if ( v9 >= 0 )
    {
      *a2 = v6;
      *a3 = v7;
      return (unsigned int)v9;
    }
    if ( !v7 )
      return (unsigned int)v9;
    goto LABEL_14;
  }
  return (unsigned int)-1073739509;
}
