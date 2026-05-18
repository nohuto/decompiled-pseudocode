/*
 * XREFs of sub_1800110DC @ 0x1800110DC
 * Callers:
 *     sub_18000E708 @ 0x18000E708 (sub_18000E708.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 *     sub_180010FC0 @ 0x180010FC0 (sub_180010FC0.c)
 *     sub_180011150 @ 0x180011150 (sub_180011150.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800110DC(__int64 a1)
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
