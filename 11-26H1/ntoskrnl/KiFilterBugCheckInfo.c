/*
 * XREFs of KiFilterBugCheckInfo @ 0x1405429BC
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140E0F3A8 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140EF4110 = *(_OWORD *)(a2 + 16);
    qword_140EF4120 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140E0A6A0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140E0F3B0;
    *(_QWORD *)(a2 + 32) = qword_140E0F3B8;
    result = &KiBugCheckOriginalData;
    qword_140E0F388 = (__int64)&KiBugCheckOriginalData;
    dword_140E0F398 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
