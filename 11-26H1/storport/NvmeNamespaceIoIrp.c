/*
 * XREFs of NvmeNamespaceIoIrp @ 0x14001F8E0
 * Callers:
 *     NvmeNamespaceStartBypassIo @ 0x140113AE0 (NvmeNamespaceStartBypassIo.c)
 * Callees:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 */

__int64 __fastcall NvmeNamespaceIoIrp(__int64 a1, IRP *a2)
{
  int v2; // eax
  __int64 result; // rax
  unsigned int v5; // ebx

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 != 1 && (unsigned int)(v2 - 5) <= 1 )
  {
    v5 = -1073741810;
    goto LABEL_6;
  }
  result = NvmeProcessIoIrp();
  v5 = result;
  if ( (_DWORD)result != 259 )
  {
LABEL_6:
    a2->IoStatus.Status = v5;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  return result;
}
