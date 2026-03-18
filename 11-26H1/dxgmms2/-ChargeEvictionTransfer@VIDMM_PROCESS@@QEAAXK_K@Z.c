/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x14011A6F8
 * Callers:
 *     ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514 (-MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1400A2228 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 * Callees:
 *     McTemplateK0ppqqxqq_EtwWriteTransfer @ 0x14004F0B4 (McTemplateK0ppqqxqq_EtwWriteTransfer.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x140110248 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?Set@VIDMM_POLICY@@QEAAHXZ @ 0x14011A7AC (-Set@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 *v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  int IsActive; // eax
  __int64 v8; // r8

  v4 = *(__int64 **)(*((_QWORD *)this + 4) + 8LL * a2);
  v5 = *(_DWORD *)(*v4 + 8);
  if ( v5 != 110 && v5 != 102 )
  {
    *(_QWORD *)(v4[23] + 48) += a3;
    v6 = v4[23];
    if ( *(_QWORD *)(v6 + 48) >= (unsigned __int64)(unsigned int)dword_14008A3DC )
    {
      if ( (unsigned int)VIDMM_POLICY::Set((VIDMM_POLICY *)(v6 + 24)) )
      {
        if ( (byte_14008A201 & 1) != 0 )
        {
          IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v4[23] + 24));
          McTemplateK0ppqqxqq_EtwWriteTransfer(IsActive, *v4, v8, *((_QWORD *)this + 3), *(_QWORD *)(*v4 + 24));
        }
      }
    }
  }
}
