/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1801BC15C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  CEffectBrush *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 26) = -1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 19) = &CEffectBrush::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 2;
  *(_QWORD *)((char *)this + 188) = 2LL;
  *((_QWORD *)this + 27) = (char *)this + 240;
  *((_QWORD *)this + 28) = (char *)this + 240;
  *((_QWORD *)this + 29) = (char *)this + 256;
  result = this;
  *((_BYTE *)this + 256) = 0;
  *((_BYTE *)this + 96) = 1;
  return result;
}
