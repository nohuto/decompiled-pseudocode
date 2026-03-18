/*
 * XREFs of ??_EVIDMM_PROCESS_COMMITMENT_INFO@@QEAAPEAXI@Z @ 0x14003776C
 * Callers:
 *     ??1VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO@@QEAA@XZ @ 0x140037740 (--1VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z @ 0x140037730 (-SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z.c)
 */

char *__fastcall VIDMM_PROCESS_COMMITMENT_INFO::`vector deleting destructor'(VIDMM_PROCESS_COMMITMENT_INFO *this)
{
  char *v1; // rsi
  __int64 v2; // rbx
  VIDMM_PHYSICAL_ADAPTER_PBMM *i; // rdi

  v1 = (char *)this - 8;
  v2 = *((_QWORD *)this - 1);
  for ( i = (VIDMM_PROCESS_COMMITMENT_INFO *)((char *)this + 184 * v2); v2; --v2 )
  {
    i = (VIDMM_PHYSICAL_ADAPTER_PBMM *)((char *)i - 184);
    VIDMM_PHYSICAL_ADAPTER_PBMM::SetSegmentPowerState(i);
  }
  operator delete(v1);
  return v1;
}
