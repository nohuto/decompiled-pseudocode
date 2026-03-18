/*
 * XREFs of ??A?$bitset@$03@std@@QEAA?AVreference@01@_K@Z @ 0x18025E2E4
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::bitset<4>::operator[](__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  *a2 = a1;
  result = a2;
  a2[1] = a3;
  return result;
}
