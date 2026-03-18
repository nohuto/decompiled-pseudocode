/*
 * XREFs of AlpcInitializeHandleTable @ 0x1408EA4F4
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140E264C0);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset_0(v2, 0, 0x80uLL);
  return 0LL;
}
