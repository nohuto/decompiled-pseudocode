/*
 * XREFs of ??0VIDMM_PROCESS_ADAPTER_INFO_PAGED@@QEAA@XZ @ 0x140044D54
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     VIDMM_PROCESS_COMMITMENT_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_ @ 0x140042F00 (VIDMM_PROCESS_COMMITMENT_INFO--_unnamed_type__Policy_--_unnamed_type__Policy_.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

VIDMM_PROCESS_ADAPTER_INFO_PAGED *__fastcall VIDMM_PROCESS_ADAPTER_INFO_PAGED::VIDMM_PROCESS_ADAPTER_INFO_PAGED(
        VIDMM_PROCESS_ADAPTER_INFO_PAGED *this)
{
  VIDMM_PROCESS_ADAPTER_INFO_PAGED *result; // rax

  VIDMM_PROCESS_COMMITMENT_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO_PAGED *)((char *)this + 24));
  memset((char *)this + 56, 0, 0xB0uLL);
  memset((char *)this + 232, 0, 0x58uLL);
  *((_BYTE *)this + 320) = 0;
  memset((char *)this + 328, 0, 0xE8uLL);
  memset((char *)this + 560, 0, 0x74uLL);
  *((_BYTE *)this + 676) = 0;
  *(_OWORD *)((char *)this + 680) = 0LL;
  *(_OWORD *)((char *)this + 696) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_OWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_BYTE *)this + 740) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_DWORD *)this + 190) = 0;
  *((_BYTE *)this + 764) = 0;
  *((_QWORD *)this + 96) = 0LL;
  memset((char *)this + 776, 0, 0x58uLL);
  memset((char *)this + 864, 0, 0xB0uLL);
  memset((char *)this + 1040, 0, 0xB0uLL);
  memset((char *)this + 1216, 0, 0xB0uLL);
  memset((char *)this + 1392, 0, 0xB0uLL);
  memset((char *)this + 1568, 0, 0x58uLL);
  memset((char *)this + 1656, 0, 0x58uLL);
  result = this;
  *((_BYTE *)this + 1744) = 0;
  return result;
}
