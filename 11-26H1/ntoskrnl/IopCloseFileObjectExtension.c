/*
 * XREFs of IopCloseFileObjectExtension @ 0x1403DEE30
 * Callers:
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DEE90 (PspHardDereferenceSiloWorker.c)
 */

__int64 *__fastcall IopCloseFileObjectExtension(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  void *v3; // rbx

  result = *(__int64 **)(a1 + 208);
  if ( result )
  {
    if ( result != qword_1400137E0 )
    {
      v2 = result[8];
      if ( v2 )
      {
        *(_DWORD *)(v2 + 4) &= ~1u;
        v3 = *(void **)(v2 + 8);
        if ( v3 )
        {
          PspHardDereferenceSiloWorker(*(_QWORD *)(v2 + 8));
          return (__int64 *)ObfDereferenceObjectWithTag(v3, 0x486C6953u);
        }
      }
    }
  }
  return result;
}
