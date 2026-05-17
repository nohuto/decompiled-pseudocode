/*
 * XREFs of _GetOverlayPackageTypeFromKey @ 0x1800331CC
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall GetOverlayPackageTypeFromKey(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  size_t v5; // rax
  _DWORD *Heap_0; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // eax
  _WORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+34h] [rbp-24h]
  const wchar_t *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0;
  v13 = L"Type";
  v5 = 2 * wcslen(L"Type");
  v14 = 0;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v11[0] = v5;
  v11[1] = v5 + 2;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 16LL);
  if ( !Heap_0 )
    return (unsigned int)-1073741670;
  v7 = NtQueryValueKey(a1, v11, 2LL, Heap_0, 16, &v14);
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
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
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
