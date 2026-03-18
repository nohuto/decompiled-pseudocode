/*
 * XREFs of PciConfigInternal @ 0x140042C58
 * Callers:
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 */

__int64 __fastcall PciConfigInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 Pool2; // rax
  unsigned int *v9; // r9
  __int64 v10; // rcx

  Pool2 = ExAllocatePool2(64LL, 96LL, 1181770561LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  *(_DWORD *)(Pool2 + 20) = 15;
  *(_QWORD *)(Pool2 + 24) = a7;
  *(_QWORD *)(Pool2 + 40) = a5;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_QWORD *)(Pool2 + 48) = a6;
  *(_QWORD *)(Pool2 + 56) = a2;
  AMLIReferenceHandleEx(a2);
  v9[18] = 1;
  v9[20] = -1;
  return PciConfigSpaceHandlerWorker(v10, 0LL, 0LL, v9);
}
