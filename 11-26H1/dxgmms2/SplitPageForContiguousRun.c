/*
 * XREFs of SplitPageForContiguousRun @ 0x14005379C
 * Callers:
 *     TrimContiguousRun @ 0x140053828 (TrimContiguousRun.c)
 * Callees:
 *     SplitAndAddPages @ 0x140053704 (SplitAndAddPages.c)
 */

struct PBMM_PAGE *__fastcall SplitPageForContiguousRun(
        struct PBMM_ALLOCATOR *a1,
        struct PBMM_SEGMENT *a2,
        struct PBMM_PAGE *a3,
        unsigned int a4,
        char a5)
{
  struct PBMM_PAGE *result; // rax
  unsigned int v10; // edx

  while ( 1 )
  {
    result = (struct PBMM_PAGE *)SplitAndAddPages(a1, a2, a3);
    if ( !result )
      break;
    v10 = 1 << ((*((_DWORD *)a3 + 16) >> 3) & 0xF);
    if ( v10 <= a4 )
    {
      if ( v10 >= a4 )
      {
        if ( a5 )
          return result;
        return a3;
      }
      a4 -= v10;
      if ( !a5 )
        a3 = result;
    }
    else if ( a5 )
    {
      a3 = result;
    }
  }
  return result;
}
