/*
 * XREFs of ?NotifyPinned@CSwapChainRealization@@UEAAXXZ @ 0x1802ADF00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqxt_EventWriteTransfer @ 0x1802AC3D4 (McTemplateU0xqxt_EventWriteTransfer.c)
 */

void __fastcall CSwapChainRealization::NotifyPinned(CSwapChainRealization *this)
{
  char *v1; // rbx

  v1 = (char *)this + 297;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqxt_EventWriteTransfer(
      (__int64)this,
      (unsigned __int8)*v1,
      *((unsigned int *)this + 13) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 52)) << 32),
      *((_DWORD *)this + 53),
      *((_QWORD *)this + 29),
      *v1);
  *v1 = 1;
}
