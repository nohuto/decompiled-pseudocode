/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x1800F679C
 * Callers:
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x1800F64D0 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F7AD0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x1801291AC (--0CDecodeBitmap@@QEAA@XZ.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802B0844 (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     <none>
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 11) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = a2;
  return result;
}
