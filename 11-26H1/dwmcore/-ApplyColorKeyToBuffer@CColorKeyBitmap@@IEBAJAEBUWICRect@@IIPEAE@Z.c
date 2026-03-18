/*
 * XREFs of ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1800E20F4
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E24E0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x1800E2270 (--$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x180215328 (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x1802B0DEC (--$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x1802B0EB4 (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::ApplyColorKeyToBuffer(
        CColorKeyBitmap *this,
        const struct WICRect *a2,
        int a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  int v6; // esi
  unsigned int v8; // edi
  _DWORD *v9; // rax
  int v10; // r8d
  bool v11; // zf
  int *v12; // r10
  int *v14; // rdx
  int v15; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-40h] BYREF

  v6 = (int)a2;
  v8 = 0;
  v9 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   v16);
  switch ( *v9 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>(v6, a3, v10, (_DWORD)a5, (__int64)this + 92, (__int64)this + 124);
      break;
    case 0xA:
      ApplyRangeColorKey<GpCCRf16>(v6, a3, v10, (_DWORD)a5, (__int64)this + 84, (__int64)this + 116);
      break;
    case 0x1C:
      v11 = *((_BYTE *)this + 72) == 0;
      v15 = -16777216;
      v14 = &v15;
      if ( !v11 )
        v14 = 0LL;
      ApplyRangeColorKey<GpCCR>(v6, a3, v10, (_DWORD)a5, (__int64)this + 80, (__int64)this + 112, (__int64)v14);
      break;
    default:
      if ( (unsigned int)(*v9 - 87) > 1 )
      {
        v8 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x196u, 0LL);
      }
      else
      {
        v11 = *((_BYTE *)this + 72) == 0;
        v15 = -16777216;
        v12 = &v15;
        if ( !v11 )
          v12 = 0LL;
        ApplyRangeColorKey<GpCC>(
          v6,
          a3,
          (_DWORD)this + 76,
          (_DWORD)a5,
          (__int64)this + 76,
          (__int64)this + 108,
          (__int64)v12);
      }
      break;
  }
  return v8;
}
