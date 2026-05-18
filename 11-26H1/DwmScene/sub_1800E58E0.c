/*
 * XREFs of sub_1800E58E0 @ 0x1800E58E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 sub_1800E58E0()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  void *v2; // rcx

  result = (__int64)NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = *(_QWORD **)(result + 8LL * (unsigned int)TlsIndex);
  v2 = (void *)v1[39];
  if ( v2 )
  {
    result = sub_18000E26C(v2, (v1[41] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    v1[39] = 0LL;
    v1[40] = 0LL;
    v1[41] = 0LL;
  }
  return result;
}
