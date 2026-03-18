/*
 * XREFs of ??_EVIDMM_DEVICE_COMMITMENT_INFO@@QEAAPEAXI@Z @ 0x1400376CC
 * Callers:
 *     ??1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ @ 0x1400E2470 (--1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z @ 0x140037730 (-SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXII_N@Z.c)
 */

char *__fastcall VIDMM_DEVICE_COMMITMENT_INFO::`vector deleting destructor'(
        VIDMM_DEVICE_COMMITMENT_INFO *this,
        unsigned int a2,
        unsigned int a3,
        bool a4)
{
  char *v4; // rsi
  __int64 v5; // rbx
  VIDMM_PHYSICAL_ADAPTER_PBMM *i; // rdi

  v4 = (char *)this - 8;
  v5 = *((_QWORD *)this - 1);
  for ( i = (VIDMM_DEVICE_COMMITMENT_INFO *)((char *)this + 56 * v5); v5; --v5 )
  {
    i = (VIDMM_PHYSICAL_ADAPTER_PBMM *)((char *)i - 56);
    VIDMM_PHYSICAL_ADAPTER_PBMM::SetSegmentPowerState(i, a2, a3, a4);
  }
  operator delete(v4);
  return v4;
}
