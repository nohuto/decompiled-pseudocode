/*
 * XREFs of ??0DXGK_LOG@@QEAA@XZ @ 0x14009D7CC
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 * Callees:
 *     <none>
 */

DXGK_LOG *__fastcall DXGK_LOG::DXGK_LOG(DXGK_LOG *this)
{
  DXGK_LOG *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
