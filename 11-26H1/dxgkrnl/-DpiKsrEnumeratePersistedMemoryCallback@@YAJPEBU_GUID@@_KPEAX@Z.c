/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x140251A30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(const struct _GUID *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  size_t v6; // rbx
  char *Pool2; // rax
  char *v8; // rsi
  __int64 result; // rax

  v3 = a3[1];
  if ( *a3 >= v3 )
  {
    v6 = 8 * v3;
    Pool2 = (char *)ExAllocatePool2(256LL, 16 * v3 + 128, 1953656900LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(2LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 829;
      return result;
    }
    memmove(Pool2, a3, v6);
    memset(&v8[v6], 0, 0x80uLL);
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * (*a3)++) = a2;
  return 0LL;
}
