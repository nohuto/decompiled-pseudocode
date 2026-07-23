/*
 * XREFs of EtwpCovSampProcessEnsureContext @ 0x140A35120
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 * Callees:
 *     EtwpCovSampProcessCleanup @ 0x140A33ED0 (EtwpCovSampProcessCleanup.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  signed __int64 Pool2; // rax
  void *v5; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 1904) )
  {
    if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v5 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1904), Pool2, 0LL) )
        {
          EtwpCovSampProcessCleanup((PVOID **)Pool2, 1);
          ExFreePoolWithTag(v5, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
