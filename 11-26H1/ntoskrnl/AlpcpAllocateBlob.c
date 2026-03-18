/*
 * XREFs of AlpcpAllocateBlob @ 0x1408EB5C0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x1408EB400 (AlpcpCreateRegion.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140970C44 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char v6; // dl
  char v7; // cl

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = guard_dispatch_icall_no_overrides(1LL, v3);
    else
      result = ExAllocatePool2(0x100uLL);
    v6 = 0;
  }
  else
  {
    result = (__int64)ExAllocateFromNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 32) = 0LL;
    *(_BYTE *)(result + 17) = *(_BYTE *)a1;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
    v7 = *(_BYTE *)(result + 16);
    *(_QWORD *)(result + 24) = 1LL;
    *(_BYTE *)(result + 16) = v6 | v7 & 0xFD;
    result += 48LL;
  }
  return result;
}
