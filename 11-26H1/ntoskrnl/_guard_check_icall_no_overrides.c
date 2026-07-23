/*
 * XREFs of _guard_check_icall_no_overrides @ 0x140735D50
 * Callers:
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     bsearch_s @ 0x140538ED0 (bsearch_s.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     qsort_s @ 0x140539760 (qsort_s.c)
 *     sub_140543050 @ 0x140543050 (sub_140543050.c)
 *     sub_1405448B0 @ 0x1405448B0 (sub_1405448B0.c)
 *     sub_140544990 @ 0x140544990 (sub_140544990.c)
 *     sub_140553AA0 @ 0x140553AA0 (sub_140553AA0.c)
 *     HaliSaveProcessorContextAndSleep @ 0x140727CF0 (HaliSaveProcessorContextAndSleep.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407BBCE8 (KeInsertCallbackRegistrationEntry.c)
 *     KeGuardCheckICall @ 0x140C81700 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall_no_overrides(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r10

  if ( a1 >= 0 )
    goto LABEL_10;
  if ( guard_icall_bitmap )
  {
    v1 = *(_QWORD *)(guard_icall_bitmap + 8 * ((unsigned __int64)a1 >> 9));
    v2 = (unsigned __int64)a1 >> 3;
    if ( (a1 & 0xF) == 0 )
    {
      if ( _bittest64(&v1, v2) )
        return;
LABEL_10:
      guard_icall_bugcheck();
    }
    v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
      goto LABEL_10;
  }
}
