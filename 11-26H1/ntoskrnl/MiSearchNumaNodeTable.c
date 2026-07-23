/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402AFDE0
 * Callers:
 *     MiPageToNodeEntry @ 0x1402AEC40 (MiPageToNodeEntry.c)
 *     MiEnqueuePageList @ 0x1402AECA0 (MiEnqueuePageList.c)
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v2; // edx
  _QWORD *result; // rax
  int i; // r8d
  int v5; // r9d
  __int64 v6; // rcx

  v2 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (result = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *result)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= result[2] )
  {
    for ( i = 0; ; i = v5 + 1 )
    {
      while ( 1 )
      {
        if ( v2 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (i + v2) >> 1;
        v6 = 16LL * v5;
        result = (char *)qword_140E2D860 + v6;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D860 + v6) )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D860 + v6, 0LL);
        v2 = v5 - 1;
      }
      if ( v5 == dword_140E2D804 || BugCheckParameter2 < result[2] )
        break;
    }
    dword_140E2D800 = (i + v2) >> 1;
  }
  return result;
}
