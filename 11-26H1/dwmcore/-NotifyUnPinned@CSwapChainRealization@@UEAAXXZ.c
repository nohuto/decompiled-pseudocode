/*
 * XREFs of ?NotifyUnPinned@CSwapChainRealization@@UEAAXXZ @ 0x1802ADF60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqx_EventWriteTransfer @ 0x1802AC344 (McTemplateU0xqx_EventWriteTransfer.c)
 */

void __fastcall CSwapChainRealization::NotifyUnPinned(CSwapChainRealization *this, __int64 a2)
{
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqx_EventWriteTransfer(
      (__int64)this,
      a2,
      *((unsigned int *)this + 13) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 52)) << 32),
      *((_DWORD *)this + 53),
      *((_QWORD *)this + 29));
  *((_BYTE *)this + 297) = 0;
}
