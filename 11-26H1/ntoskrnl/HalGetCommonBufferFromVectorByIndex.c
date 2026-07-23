/*
 * XREFs of HalGetCommonBufferFromVectorByIndex @ 0x140490200
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall HalGetCommonBufferFromVectorByIndex(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rcx
  __int64 v7; // r8
  _QWORD *result; // rax

  v5 = *(unsigned int *)(a2 + 24);
  v6 = a3;
  if ( a3 >= (unsigned int)v5 )
    KeBugCheckEx(0x1DCu, 3uLL, v5, a3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 16LL * a3);
  if ( !v7 )
    KeBugCheckEx(0x1DCu, 4uLL, v6, 0LL, 0LL);
  *a4 = v7;
  result = a5;
  *a5 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 16LL * (unsigned int)v6 + 8);
  return result;
}
