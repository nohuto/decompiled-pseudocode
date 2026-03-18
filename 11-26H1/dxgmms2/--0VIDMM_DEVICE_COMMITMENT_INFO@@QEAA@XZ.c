/*
 * XREFs of ??0VIDMM_DEVICE_COMMITMENT_INFO@@QEAA@XZ @ 0x140046160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VIDMM_DEVICE_COMMITMENT_INFO *__fastcall VIDMM_DEVICE_COMMITMENT_INFO::VIDMM_DEVICE_COMMITMENT_INFO(
        VIDMM_DEVICE_COMMITMENT_INFO *this)
{
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  return this;
}
