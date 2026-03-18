/*
 * XREFs of ViThunkCreateThunkTable @ 0x140B8750C
 * Callers:
 *     VfThunkAddDriverThunks @ 0x140B86E5C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140B86EF4 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall ViThunkCreateThunkTable(void *Src, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  ULONG_PTR result; // rax
  __int64 v8; // rbx

  v5 = a2 >> 4;
  v6 = 16 * (a2 >> 4);
  result = ExAllocatePool2(0x100uLL, v6 + 32, 0x74566D4DuLL);
  v8 = result;
  if ( result )
  {
    memmove((void *)(result + 32), Src, v6);
    result = v8;
    *(_QWORD *)(v8 + 16) = a3;
    *(_DWORD *)(v8 + 24) = v5;
  }
  return result;
}
