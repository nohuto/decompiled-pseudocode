/*
 * XREFs of ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140042E60
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1400FCC58 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

VIDSCH_PROCESS_ADAPTER_INFO *__fastcall VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(
        VIDSCH_PROCESS_ADAPTER_INFO *this)
{
  VIDSCH_PROCESS_ADAPTER_INFO *result; // rax

  *(_DWORD *)this = 0;
  *((_WORD *)this + 2) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 20) = 0;
  memset((char *)this + 88, 0, 0x80uLL);
  result = this;
  *(_OWORD *)((char *)this + 216) = 0LL;
  return result;
}
