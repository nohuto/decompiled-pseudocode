/*
 * XREFs of ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@QEAAXKPEA_K@Z @ 0x14010FA54
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  if ( !*((_DWORD *)this + a2 + 1161) )
  {
    *((_DWORD *)this + a2 + 1161) = 1;
    ++*((_QWORD *)this + a2 + 613);
  }
  *a3 = *((_QWORD *)this + a2 + 613);
}
