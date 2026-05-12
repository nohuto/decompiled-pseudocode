/*
 * XREFs of NvmeAdapterGetSubsystemPort @ 0x1400D8E34
 * Callers:
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NvmeAdapterGetSubsystemPort(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  struct _ERESOURCE *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *v7; // r8

  v4 = 0LL;
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(a1 + 384);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 384), 1u);
  v6 = (_QWORD **)(a1 + 360);
  v7 = *v6;
  while ( v7 != v6 )
  {
    v4 = v7 - 1;
    if ( a2 == v7 - 1 )
      break;
    v7 = (_QWORD *)*v7;
    v4 = 0LL;
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v4;
}
