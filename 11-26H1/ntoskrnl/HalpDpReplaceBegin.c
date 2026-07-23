/*
 * XREFs of HalpDpReplaceBegin @ 0x140788940
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptDpReplaceBegin @ 0x14059C39C (HalpInterruptDpReplaceBegin.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HalpDpSortApicList @ 0x140788B38 (HalpDpSortApicList.c)
 *     HalpBuildResumeStructures @ 0x140BF0FB0 (HalpBuildResumeStructures.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDpReplaceBegin(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( (unsigned int)v5 < (unsigned int)v4 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = v4;
  *(_BYTE *)(Pool2 + 45) = (*(_DWORD *)a1 & 2) != 0;
  if ( (_DWORD)v4 )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 128;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 4 * v4 + 128;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 4 * v5 + 4 * v4 + 128;
    memmove((void *)(Pool2 + 128), (const void *)(*(_QWORD *)(a1 + 8) + 20LL), 4 * v4);
    memmove(*(void **)(v8 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 20LL), 4 * v5);
    HalpDpSortApicList(*(_QWORD *)(v8 + 8), (unsigned int)v4);
    HalpDpSortApicList(*(_QWORD *)(v8 + 16), (unsigned int)v5);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_BYTE *)(v8 + 44) = 1;
    v6 = HalpInterruptDpReplaceBegin(
           *(_QWORD *)(v8 + 8),
           *(_QWORD *)(v8 + 16),
           *(_QWORD *)(v8 + 24),
           *(_DWORD *)v8,
           *(_BYTE *)(v8 + 44),
           *(_BYTE *)(v8 + 45),
           &v12);
    if ( v6 < 0 )
      goto LABEL_14;
    *(_DWORD *)(v8 + 40) = v12;
  }
  if ( !*(_BYTE *)(v8 + 45) )
  {
LABEL_18:
    *a2 = v8;
    return 0;
  }
  if ( !(_DWORD)v4 || (v9 = ExAllocatePool2(0x40uLL), (*(_QWORD *)(v8 + 32) = v9) != 0LL) )
  {
    HalpBuildResumeStructures();
    goto LABEL_18;
  }
  v6 = -1073741670;
LABEL_14:
  v10 = *(void **)(v8 + 32);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x436C6148u);
  ExFreePoolWithTag((PVOID)v8, 0x436C6148u);
  return (unsigned int)v6;
}
