/*
 * XREFs of rimFreeAllUserMem @ 0x140131E40
 * Callers:
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFreeAllUserMem(struct _RTL_AVL_TABLE *a1)
{
  _QWORD *OrderedPointer; // rbx
  _QWORD *result; // rax
  struct _RTL_AVL_TABLE *i; // rdi
  void *v5; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  OrderedPointer = a1->OrderedPointer;
  result = (_QWORD *)PsGetCurrentProcess(a1);
  if ( OrderedPointer == result )
  {
    for ( i = a1 + 9; ; RtlDeleteElementGenericTableAvl(i, v5) )
    {
      result = RtlEnumerateGenericTableAvl(i, 1u);
      v5 = result;
      if ( !result )
        break;
      RegionSize = result[1];
      BaseAddress = (PVOID)*result;
      MmUnsecureVirtualMemory((HANDLE)result[2]);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return result;
}
