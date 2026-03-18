/*
 * XREFs of ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E7CEC
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi

  v4 = a2;
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0x_EtwWriteTransfer((__int64)this, &EventPagingEndPreparation, a3, *((_QWORD *)this + a2 + 144));
  if ( *((_DWORD *)this + v4 + 416) != *((_DWORD *)this + v4 + 480)
    || *((_DWORD *)this + v4 + 544) != *((_DWORD *)this + v4 + 608) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 0, 0LL, 0LL, 0, 0);
  }
}
