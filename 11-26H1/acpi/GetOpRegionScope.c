/*
 * XREFs of GetOpRegionScope @ 0x140047E1C
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     GetOpRegionScopeWorker @ 0x140047EC0 (GetOpRegionScopeWorker.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *Pool2; // rax
  __int64 *v8; // rbx
  __int64 v10; // rcx

  Pool2 = (__int64 *)ExAllocatePool2(64LL, 56LL, 1181770561LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a1;
  AMLIReferenceHandleEx(a1);
  v8[1] = AMLIGetParent(v10);
  v8[5] = a3;
  v8[4] = (__int64)PciConfigSpaceHandlerWorker;
  v8[6] = a4;
  *((_DWORD *)v8 + 6) = -1;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
