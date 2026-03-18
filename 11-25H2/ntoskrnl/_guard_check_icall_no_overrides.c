/*
 * XREFs of _guard_check_icall_no_overrides @ 0x1406A8AD0
 * Callers:
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 *     bsearch_s @ 0x1404FC0F0 (bsearch_s.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     qsort_s @ 0x1404FC980 (qsort_s.c)
 *     sub_140506110 @ 0x140506110 (sub_140506110.c)
 *     sub_140507990 @ 0x140507990 (sub_140507990.c)
 *     sub_140507A70 @ 0x140507A70 (sub_140507A70.c)
 *     sub_140516830 @ 0x140516830 (sub_140516830.c)
 *     HaliSaveProcessorContextAndSleep @ 0x14069AE90 (HaliSaveProcessorContextAndSleep.c)
 *     KeGuardCheckICall @ 0x140BC9A70 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall_no_overrides(ULONG_PTR a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r10

  if ( (a1 & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(a1);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
