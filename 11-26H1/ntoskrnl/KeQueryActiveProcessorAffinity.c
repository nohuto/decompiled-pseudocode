/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1405EE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(struct _KAFFINITY_EX *a1)
{
  *(_QWORD *)&a1->Count = 1310721LL;
  memset_0(&a1->8, 0, 0xA0uLL);
  RtlpCopyAffinityEx(a1, a1->Size, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
  return (unsigned int)KeNumberProcessors_0;
}
