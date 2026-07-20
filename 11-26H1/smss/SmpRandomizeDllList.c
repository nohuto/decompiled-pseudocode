/*
 * XREFs of SmpRandomizeDllList @ 0x140009070
 * Callers:
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpRandomizeDllList(_QWORD **a1, _QWORD *a2, unsigned int *a3)
{
  unsigned __int64 v6; // rax
  NTSTATUS result; // eax
  unsigned int v8; // eax
  _QWORD *v9; // rcx
  rsize_t v10; // r12
  PVOID Heap; // rax
  void *v12; // rbp
  _QWORD *v13; // rsi
  _QWORD *v14; // r14

  if ( *a1 == a1 )
  {
    *a2 = 0LL;
    *a3 = 0;
  }
  else
  {
    if ( !Seed )
    {
      v6 = __rdtsc();
      if ( (_DWORD)v6 )
      {
        Seed = v6;
      }
      else
      {
        result = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &Seed, 4u, 0LL);
        if ( result < 0 )
          return result;
      }
    }
    v8 = *a3;
    if ( !*a3 )
    {
      v9 = *a1;
      while ( v9 != a1 )
      {
        v9 = (_QWORD *)*v9;
        ++v8;
      }
      *a3 = v8;
    }
    v10 = v8;
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 16LL * v8);
    v12 = Heap;
    if ( !Heap )
      return -1073741670;
    v13 = *a1;
    v14 = Heap;
    while ( v13 != a1 )
    {
      *(_DWORD *)v14 = RtlRandomEx(&Seed);
      v14[1] = v13;
      v14 += 2;
      v13 = (_QWORD *)*v13;
    }
    qsort_s(v12, v10, 0x10uLL, SmpSortDllList, 0LL);
    *a2 = v12;
  }
  return 0;
}
