/*
 * XREFs of ?QuerySleepStudyStatistics@VIDMM_GLOBAL@@QEAAXGPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x14012942C
 * Callers:
 *     VidMmQuerySleepStudyStatistics @ 0x140042C80 (VidMmQuerySleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::QuerySleepStudyStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct _DXGK_SLEEP_STUDY_DATA *a3)
{
  unsigned __int16 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx

  *((_QWORD *)a3 + 5) = *((_QWORD *)this + 5680);
  *((_QWORD *)a3 + 1) = qword_14008A5F8;
  *((_QWORD *)a3 + 2) = qword_14008A688;
  *((_QWORD *)a3 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 32LL);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * a2) + 24LL);
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  if ( *((_DWORD *)this + 1738) )
  {
    v6 = 0LL;
    do
    {
      v7 = v5++;
      v8 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v7);
      v6 += *(_QWORD *)(v8 + 1832) + *(_QWORD *)(v8 + 1840);
      *(_QWORD *)a3 = v6;
    }
    while ( (unsigned int)v5 < *((_DWORD *)this + 1738) );
  }
}
