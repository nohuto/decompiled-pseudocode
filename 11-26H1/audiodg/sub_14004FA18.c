/*
 * XREFs of sub_14004FA18 @ 0x14004FA18
 * Callers:
 *     sub_14004CF38 @ 0x14004CF38 (sub_14004CF38.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 *     sub_14004F88C @ 0x14004F88C (sub_14004F88C.c)
 *     sub_14004FA80 @ 0x14004FA80 (sub_14004FA80.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14004FA18(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *(volatile signed __int32 **)a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(volatile signed __int32 **)a1;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
