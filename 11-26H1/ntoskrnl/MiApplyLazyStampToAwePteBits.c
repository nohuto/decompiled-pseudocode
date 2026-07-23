/*
 * XREFs of MiApplyLazyStampToAwePteBits @ 0x140705610
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteAweClusterPte @ 0x140530318 (MiWriteAweClusterPte.c)
 */

__int64 __fastcall MiApplyLazyStampToAwePteBits(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 *v6; // rdi
  unsigned int v7; // ebp
  signed __int64 *v8; // r15
  __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 328);
  v6 = (__int64 *)(a1 + 240);
  v7 = 0;
  v8 = (signed __int64 *)(((__int64)(*(_QWORD *)a1 << 25) >> 16) + 8 * a2);
  if ( a3 )
  {
    v9 = *v6;
    do
    {
      MiWriteAweClusterPte(*(_QWORD *)(a1 + 40), v8, v5, 6, v9);
      v9 = *v6;
      ++v7;
      v8 += *v6;
    }
    while ( v7 < a3 );
  }
  *(_DWORD *)(a1 + 16) += *(_DWORD *)v6 * a3;
  return 0LL;
}
