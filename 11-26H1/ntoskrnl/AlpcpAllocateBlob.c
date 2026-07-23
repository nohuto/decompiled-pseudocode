/*
 * XREFs of AlpcpAllocateBlob @ 0x1408F1B80
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x1408F19C0 (AlpcpCreateRegion.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
