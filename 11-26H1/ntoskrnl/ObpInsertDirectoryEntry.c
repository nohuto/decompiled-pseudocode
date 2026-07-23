/*
 * XREFs of ObpInsertDirectoryEntry @ 0x140A8F820
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall ObpInsertDirectoryEntry(char *Object, char *a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx
  char *v8; // rcx

  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(a2, 0x6944624Fu);
    v8 = &Object[8 * *(unsigned __int8 *)(a3 + 20)];
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(a3 + 16);
    *(_QWORD *)v7 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    *(_QWORD *)(a3 + 8) = v8;
    ObfReferenceObjectWithTag(Object, 0x6944624Fu);
    LOBYTE(Pool2) = 1;
    *(_QWORD *)&a2[-ObpInfoMaskToOffset[*(a2 - 22) & 3] - 48] = Object;
  }
  return Pool2;
}
