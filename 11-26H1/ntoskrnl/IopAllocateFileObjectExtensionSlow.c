/*
 * XREFs of IopAllocateFileObjectExtensionSlow @ 0x14046BB40
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtensionSlow(__int64 a1, __int64 **a2, char a3)
{
  unsigned int v6; // ebx
  __int64 *Pool2; // r9
  __int64 *v9; // rax

  v6 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    v9 = qword_140019060;
    v6 = -1073741670;
    if ( !a3 )
      v9 = 0LL;
    Pool2 = v9;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != qword_140019060 )
      ExFreePoolWithTag(Pool2, 0);
    *a2 = *(__int64 **)(a1 + 208);
  }
  else
  {
    *a2 = Pool2;
  }
  return v6;
}
