/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x1801059D8
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  int v8; // edi
  int v9; // r14d
  void *v10; // r14
  __int64 result; // rax
  void *Heap_0; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  void *v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  Handle = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap_0 = 0LL;
    v13 = 64LL;
    result = ZwAllocateVirtualMemory(-1LL, &Heap_0, 0LL, &v13, 4096, 4);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap_0 = (void *)RtlAllocateHeap_0();
    if ( !Heap_0 )
      return 3221225626LL;
  }
  v16 = 4096LL;
  v9 = NtCreateSection(&Handle, 983047LL, &unk_180183E50, &v16, 4, 0x8000000, 0LL);
  if ( v9 >= 0 )
  {
    v15 = 0LL;
    v13 = 0LL;
    v9 = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
    if ( v9 >= 0 )
    {
      v10 = v15;
      memset_thunk_772440563353939046(Heap_0, 0, 0x40uLL);
      if ( *a4 == 2147352576LL )
      {
        memmove(v10, (const void *)0x7FFE0000, 0xAA0uLL);
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v10, 4096LL, 0LL) < 0 )
      {
LABEL_8:
        NtUnmapViewOfSection(-1LL, v15);
        *(_DWORD *)(a1 + 888) = v4;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = Handle;
        *(_QWORD *)(a1 + 904) = Heap_0;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (int)ZwQueryVirtualMemory(a2, *a4, 0LL, (char *)Heap_0 + 8, 48LL, 0LL) >= 0 )
      {
        v4 = 1;
        *(_QWORD *)Heap_0 = *a4;
        *((_QWORD *)Heap_0 + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_8;
    }
    NtClose(Handle);
  }
  if ( v8 )
  {
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &Heap_0, &v13, 0x8000LL);
  }
  else
  {
    RtlFreeHeap_0();
  }
  return (unsigned int)v9;
}
