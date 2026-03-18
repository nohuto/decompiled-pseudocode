/*
 * XREFs of ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x180130638
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180130340 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012F764 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall CComputeScribbleFramebuffer::PreRender(RTL_SRWLOCK *this, void *a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = this + 31;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED, v2->Ptr, HIDWORD(this[32].Ptr));
  AcquireSRWLockExclusive(this + 10);
  v2->Ptr = a2;
  CComputeScribbleFramebuffer::SaveDirtyForPreRender((CComputeScribbleFramebuffer *)this);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
}
