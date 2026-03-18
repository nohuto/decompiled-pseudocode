/*
 * XREFs of ??0CDecodeBitmap@@QEAA@XZ @ 0x1801291AC
 * Callers:
 *     ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180129114 (-Create@CDecodeBitmap@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x1800F679C (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this)
{
  __int64 v1; // rcx
  CDecodeBitmap *result; // rax

  CRenderTargetBitmap::CRenderTargetBitmap(this, 0);
  *(_BYTE *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v1 = &CDecodeBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(v1 + 80) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v1 + 88) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  result = (CDecodeBitmap *)v1;
  *(_QWORD *)(v1 + 144) = 0LL;
  return result;
}
