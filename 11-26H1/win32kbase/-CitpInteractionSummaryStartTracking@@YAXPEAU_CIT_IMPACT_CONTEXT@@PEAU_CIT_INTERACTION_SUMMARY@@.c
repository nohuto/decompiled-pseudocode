/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400584E8
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400D6810 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  struct _CIT_IMPACT_CONTEXT **v4; // rcx
  unsigned __int64 v5; // rcx

  if ( (*((_BYTE *)a2 + 100) & 2) != 0 )
  {
    *((_OWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_WORD *)a2 + 30) = 0;
    *(_QWORD *)((char *)a2 + 62) = 0LL;
    *(_DWORD *)((char *)a2 + 70) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
    *(_QWORD *)((char *)a2 + 102) = 0LL;
    *(_DWORD *)((char *)a2 + 110) = 0;
    *((_WORD *)a2 + 57) = 0;
    *(_QWORD *)((char *)a2 + 132) = 0LL;
    *(_QWORD *)((char *)a2 + 140) = 0LL;
    *(_QWORD *)((char *)a2 + 148) = 0LL;
    memset(*((void **)a2 + 20), 0, *((_QWORD *)a2 + 21));
    *((_DWORD *)a2 + 29) &= 0xFF000000;
    *((_DWORD *)a2 + 31) &= 0xFF000000;
  }
  else
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_WORD *)a2 + 50) |= 2u;
    *((_DWORD *)a2 + 23) = v5;
  }
  if ( (*((_BYTE *)a2 + 100) & 1) == 0 )
    *((_QWORD *)a2 + 2) = **((_QWORD **)a2 + 3);
  v4 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 34);
  if ( *v4 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 264;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)a1 + 34) = a2;
}
