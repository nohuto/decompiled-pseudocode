/*
 * XREFs of ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x18021BEA8
 * Callers:
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C9240 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C959C (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFSVPProvider *__fastcall CFSVPProvider::CFSVPProvider(CFSVPProvider *this, struct IOverlayMonitorTarget *a2)
{
  CFSVPProvider *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  result = this;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  return result;
}
