/*
 * XREFs of KeInitializeProfileCallback @ 0x1407BAD28
 * Callers:
 *     EtwpSetPmcProfileSource @ 0x140827FB0 (EtwpSetPmcProfileSource.c)
 *     EtwpTimeProfileStart @ 0x1408280C8 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1408314FC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset_0(a1, 0, 0x268uLL);
  *a1 = 40370193;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_WORD *)a1 + 304) = a4;
  a1[18] = 2097153;
  RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(a1 + 18), 0x20u, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
}
