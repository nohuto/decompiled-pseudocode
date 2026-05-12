/*
 * XREFs of NvmeControllerGetInterruptMessageCount @ 0x1400CF590
 * Callers:
 *     NvmeControllerSetIoQueueCount @ 0x1400D05D8 (NvmeControllerSetIoQueueCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetInterruptMessageCount(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 600)) != 0 && (v3 = *(_QWORD *)(v2 + 120)) != 0 )
    return *(unsigned int *)(v3 + 4);
  else
    return 0LL;
}
