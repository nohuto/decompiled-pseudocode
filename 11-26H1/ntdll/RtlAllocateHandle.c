/*
 * XREFs of RtlAllocateHandle @ 0x180037C10
 * Callers:
 *     RtlpInsertStringAtom @ 0x180037B44 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 *__fastcall RtlAllocateHandle(__int64 a1, _DWORD *a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // r8
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // r15d
  __int64 v11; // r14
  void *ProcessHeap; // rcx
  __int64 v13; // rax
  char *v14; // rdx
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned __int64 *)(a1 + 16);
  v21 = 0LL;
  v22 = 0LL;
  v19[0] = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v8 = *(_DWORD *)(a1 + 12);
      if ( v8 <= *(_DWORD *)a1 )
      {
        v9 = *(_QWORD *)(a1 + 24);
        v10 = v8 * *(_DWORD *)(a1 + 4);
        v11 = v10 + 8 * *(_DWORD *)(a1 + 4);
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v13 = v9
            ? RtlReAllocateHeap_0(ProcessHeap, 8LL, v9, (unsigned int)v11)
            : RtlAllocateHeap_0(ProcessHeap, 8LL, v10 + 8 * *(_DWORD *)(a1 + 4));
        v21 = v13;
        if ( v13 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          v14 = (char *)(v11 + v13);
          v15 = (unsigned __int64 *)(a1 + 32);
          v16 = v13 + v10;
          *(_QWORD *)(a1 + 24) = v13;
          v20 = (unsigned __int64 *)v16;
          *(_QWORD *)(a1 + 32) = v14;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v17 = *(unsigned __int64 **)(a1 + 32);
      if ( v17 )
      {
        v15 = (unsigned __int64 *)(a1 + 32);
      }
      else
      {
        v22 = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v21, 0LL, &v22, 0x2000, 4) < 0 )
          return 0LL;
        v17 = (unsigned __int64 *)v21;
        v15 = (unsigned __int64 *)(a1 + 32);
        v18 = v21 + v22;
        *(_QWORD *)(a1 + 24) = v21;
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 32) = v17;
      }
      v20 = v17;
      if ( (unsigned __int64)v17 < *(_QWORD *)(a1 + 40) )
      {
        v19[0] = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v20, 0LL, v19, 4096, 4) >= 0 )
        {
          v16 = (unsigned __int64)v20;
          v14 = (char *)v20 + v19[0];
          *(_QWORD *)(a1 + 32) = (char *)v20 + v19[0];
LABEL_11:
          if ( v16 < (unsigned __int64)v14 )
          {
            do
            {
              *v2 = v16;
              v2 = v20;
              v16 = (unsigned __int64)v20 + *(unsigned int *)(a1 + 4);
              v20 = (unsigned __int64 *)v16;
            }
            while ( v16 < *v15 );
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = *(unsigned __int64 **)(a1 + 16);
  v20 = v5;
  *(_QWORD *)(a1 + 16) = *v5;
  *v5 = 0LL;
  v6 = v20;
  if ( a2 )
    *a2 = ((__int64)v20 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v6;
}
