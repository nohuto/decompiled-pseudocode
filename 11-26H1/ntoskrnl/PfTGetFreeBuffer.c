/*
 * XREFs of PfTGetFreeBuffer @ 0x140A06938
 * Callers:
 *     PfTAllocateBuffers @ 0x1407C6158 (PfTAllocateBuffers.c)
 *     PfTReplaceCurrentBuffer @ 0x140A06878 (PfTReplaceCurrentBuffer.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PfTGetFreeBuffer(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = *v1;
    result = v1;
    --*(_WORD *)(a1 + 10);
  }
  return result;
}
