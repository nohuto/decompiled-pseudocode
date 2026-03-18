/*
 * XREFs of ?Create@?$CSortedVector@_K_K@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C1358
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Create()
{
  _QWORD *Pool2; // rbx
  __int64 v1; // rax
  _QWORD *result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 56LL, 1665758037LL);
  if ( !Pool2 )
    return 0LL;
  v1 = ExAllocatePool2(258LL, 0x2000LL, 1665758037LL);
  if ( !v1 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[6] = v1;
  result = Pool2;
  Pool2[4] = 512LL;
  Pool2[5] = 0LL;
  Pool2[3] = 0LL;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  return result;
}
