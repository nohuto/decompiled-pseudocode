/*
 * XREFs of NvmeNamespaceIdleCondition @ 0x140031910
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 */

__int64 __fastcall NvmeNamespaceIdleCondition(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = NvmeNamespaceCheckAndAcquirePoFx(a1);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 0;
    PoFxCompleteIdleCondition(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), a2);
    return NvmeNamespaceReleasePoFx(a1);
  }
  return result;
}
