/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x180137C60
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ebx
  __int64 Heap_0; // rax
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v12[0] = 1441812LL;
  v13 = 0;
  v12[1] = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(a1, v12, 2LL, 0LL, 0, &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741789 )
    {
      Heap_0 = RtlAllocateHeap_0();
      v7 = Heap_0;
      if ( !Heap_0 )
        return (unsigned int)-1073741801;
      v9 = NtQueryValueKey(a1, v12, 2LL, Heap_0, v13, &v13);
      if ( v9 < 0 )
      {
LABEL_14:
        RtlFreeHeap_0();
        return (unsigned int)v9;
      }
      if ( *(_DWORD *)(v7 + 4) != 1
        || *(_DWORD *)(v7 + 8) < 4u
        || (v6 = v7 + 12, *(_WORD *)(v7 + 12 + 2 * ((unsigned __int64)*(unsigned int *)(v7 + 8) >> 1) - 2)) )
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
