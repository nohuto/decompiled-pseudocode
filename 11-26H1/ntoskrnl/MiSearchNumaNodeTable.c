/*
 * XREFs of MiSearchNumaNodeTable @ 0x1402CE020
 * Callers:
 *     MiPageToNodeEntry @ 0x1402CCE80 (MiPageToNodeEntry.c)
 *     MiEnqueuePageList @ 0x1402CCEE0 (MiEnqueuePageList.c)
 *     MxConstructLoaderMemoryTree @ 0x140CF53CC (MxConstructLoaderMemoryTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v2; // edx
  _QWORD *result; // rax
  int i; // r8d
  int v5; // r9d
  __int64 v6; // rcx

  v2 = dword_140E2D684;
  if ( dword_140E2D680 > (unsigned int)dword_140E2D684
    || (result = (char *)qword_140E2D6E0 + 16 * dword_140E2D680, BugCheckParameter2 < *result)
    || dword_140E2D680 != dword_140E2D684 && BugCheckParameter2 >= result[2] )
  {
    for ( i = 0; ; i = v5 + 1 )
    {
      while ( 1 )
      {
        if ( v2 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (i + v2) >> 1;
        v6 = 16LL * v5;
        result = (char *)qword_140E2D6E0 + v6;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D6E0 + v6) )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D6E0 + v6, 0LL);
        v2 = v5 - 1;
      }
      if ( v5 == dword_140E2D684 || BugCheckParameter2 < result[2] )
        break;
    }
    dword_140E2D680 = (i + v2) >> 1;
  }
  return result;
}
