/*
 * XREFs of AccumulateTlbFlushRange @ 0x140041E58
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AccumulateTlbFlushRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)a1 |= 1 << (((unsigned __int64)*(unsigned int *)(a2 + 72) >> 4) & 0x3F);
  if ( v2 >= *(_QWORD *)(a2 + 104) )
    v2 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 8) = v2;
  result = *(_QWORD *)(a1 + 16);
  if ( result <= *(_QWORD *)(a2 + 112) )
    result = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
