/*
 * XREFs of ?QueryProcessStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x140119700
 * Callers:
 *     VidMmQueryProcessStatistics @ 0x140043560 (VidMmQueryProcessStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessStatistics(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a3)
{
  *((_QWORD *)a3 + 1) = *((_QWORD *)a2 + 22);
  *((_QWORD *)a3 + 2) = *((_QWORD *)a2 + 23);
  *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 48);
  *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 49);
  *((_QWORD *)a3 + 4) = *((_QWORD *)a2 + 25);
  *((_QWORD *)a3 + 5) = *((_QWORD *)a2 + 26);
  *((_QWORD *)a3 + 6) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a3 + 7) = *((_QWORD *)a2 + 28);
  *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 29);
  *((_QWORD *)a3 + 9) = *((_QWORD *)a2 + 30);
  *((_QWORD *)a3 + 10) = *((_QWORD *)a2 + 31);
  return 0LL;
}
