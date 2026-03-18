/*
 * XREFs of GreGetDCDpiScaleValue @ 0x140195950
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1401613C0 (NtGdiCreateDIBSection.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1402702B0 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1401959B0 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  int CachedDpiScaleValue; // eax
  unsigned int v2; // ebx
  DC *v4[15]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v5; // [rsp+A8h] [rbp+10h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v5, CachedDpiScaleValue);
    v2 = v5;
  }
  else
  {
    v2 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v4);
  return v2;
}
