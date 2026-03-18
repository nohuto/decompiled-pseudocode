/*
 * XREFs of _guard_check_icall_no_overrides @ 0x140731180
 * Callers:
 *     bsearch @ 0x140536920 (bsearch.c)
 *     bsearch_s @ 0x140536A50 (bsearch_s.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     qsort_s @ 0x1405372E0 (qsort_s.c)
 *     sub_140540BD0 @ 0x140540BD0 (sub_140540BD0.c)
 *     sub_140542430 @ 0x140542430 (sub_140542430.c)
 *     sub_140542510 @ 0x140542510 (sub_140542510.c)
 *     sub_140551620 @ 0x140551620 (sub_140551620.c)
 *     HaliSaveProcessorContextAndSleep @ 0x140723120 (HaliSaveProcessorContextAndSleep.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407B8C88 (KeInsertCallbackRegistrationEntry.c)
 *     KeGuardCheckICall @ 0x140C7B700 (KeGuardCheckICall.c)
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
