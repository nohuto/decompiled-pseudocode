/*
 * XREFs of EtwpQueryRegString @ 0x180056E38
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddDebugInfoEvents @ 0x180056708 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(const wchar_t *a1, const wchar_t *a2, void *a3, unsigned int a4)
{
  size_t v6; // rax
  int v7; // ebx
  unsigned __int64 v8; // rax
  int v10; // ebx
  __int64 Heap_0; // rdi
  size_t v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+48h] BYREF

  v18 = a4;
  Handle = 0LL;
  HIDWORD(v15[0]) = 0;
  v13[0] = 0LL;
  v13[1] = a1;
  if ( a1 )
  {
    v6 = 2 * wcslen(a1);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    LOWORD(v13[0]) = v6;
    WORD1(v13[0]) = v6 + 2;
  }
  v15[0] = 48LL;
  v15[2] = v13;
  v15[3] = 64LL;
  v15[1] = 0LL;
  v16 = 0LL;
  v7 = NtOpenKey(&Handle, 131097LL, v15);
  if ( v7 >= 0 )
  {
    v8 = 2LL * v18;
    if ( v8 > 0xFFFFFFFF || (v10 = v8 + 12, (int)v8 + 12 < (unsigned int)v8) )
    {
      NtClose(Handle);
      return 3221225621LL;
    }
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      v14[0] = 0LL;
      v14[1] = a2;
      if ( a2 )
      {
        v12 = 2 * wcslen(a2);
        if ( v12 >= 0xFFFE )
          LOWORD(v12) = -4;
        LOWORD(v14[0]) = v12;
        WORD1(v14[0]) = v12 + 2;
      }
      v7 = NtQueryValueKey(Handle, v14, 2LL, Heap_0, v10, &v18);
      if ( v7 >= 0 )
        memmove(a3, (const void *)(Heap_0 + 12), *(unsigned int *)(Heap_0 + 8));
      RtlFreeHeap_0();
    }
    else
    {
      v7 = -1073741801;
    }
    NtClose(Handle);
  }
  return (unsigned int)v7;
}
