/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1401FD55C
 * Callers:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1401C5D74 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401FC880 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1401FCC5C (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401FD634 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create(char a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  void *v5; // rax
  char v6; // al

  Pool2 = ExAllocatePool2(258LL, 56LL, 944337749LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_BYTE *)(Pool2 + 52) &= ~1u;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v5 = (void *)ExAllocatePool2(258LL, 4096LL, 944337749LL);
  *(_QWORD *)(v3 + 32) = v5;
  if ( !v5 )
  {
    NSInstrumentation::CPointerHashTable::Destroy((PVOID)v3);
    return 0LL;
  }
  memset(v5, 0, 0x1000uLL);
  v6 = *(_BYTE *)(v3 + 52) & 0xFE;
  *(_DWORD *)(v3 + 40) = 256;
  *(_QWORD *)(v3 + 44) = 8LL;
  *(_BYTE *)(v3 + 52) = a1 | v6;
  return (struct NSInstrumentation::CPointerHashTable *)v3;
}
