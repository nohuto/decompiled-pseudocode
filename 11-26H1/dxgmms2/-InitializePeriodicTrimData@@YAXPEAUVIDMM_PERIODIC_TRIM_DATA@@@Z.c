/*
 * XREFs of ?InitializePeriodicTrimData@@YAXPEAUVIDMM_PERIODIC_TRIM_DATA@@@Z @ 0x14009F5DC
 * Callers:
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x14009C438 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 */

void __fastcall InitializePeriodicTrimData(struct VIDMM_PERIODIC_TRIM_DATA *a1)
{
  *((_QWORD *)a1 + 1) = a1;
  *(_QWORD *)a1 = a1;
  *((_QWORD *)a1 + 2) = VidMmiQuerySystemTime();
  *((_QWORD *)a1 + 3) = 0LL;
}
