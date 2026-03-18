/*
 * XREFs of ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802ABF94
 * Callers:
 *     ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x1802ABB30 (-GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV-$shared_ptr@VCRegion@@@.c)
 * Callees:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180035FC0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x180104A7C (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18016A260 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18023E668 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDecodeBitmap *v2; // rdi
  __int64 v3; // rax
  const struct PixelFormatInfo *v4; // rbx
  const struct D2D_SIZE_U *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  CDecodeBitmap *v9; // rdi
  int v10; // ebx
  struct ID3D11Texture2D *v11; // rax
  int v12; // eax
  LONG **v13; // rcx
  int **v14; // r9
  int RectangleCount; // eax
  _BYTE v17[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+4Ch] [rbp-34h]
  char v20; // [rsp+54h] [rbp-2Ch]
  __int16 v21; // [rsp+55h] [rbp-2Bh]
  char v22; // [rsp+57h] [rbp-29h]
  _BYTE v23[8]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v24; // [rsp+60h] [rbp-20h] BYREF

  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 41) + 64LL))((char *)this + 328, v17);
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 10) + 56LL))((char *)this + 80, v18);
  v2 = (CDecodeBitmap *)*((_QWORD *)this + 36);
  v19 = 0LL;
  v21 = 0;
  v22 = 0;
  v3 = *((_QWORD *)this + 10);
  v20 = 0;
  v4 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(v3 + 24))(
                                         (char *)this + 80,
                                         &v24);
  v5 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 10) + 32LL))(
                                    (char *)this + 80,
                                    v23);
  v6 = CDecodeBitmap::EnsureTargetBitmap(v2, v5, v4, (const struct RenderTargetInfo *)v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xF2u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 47);
    v9 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v10 = *(_DWORD *)(v8 + 232);
    v11 = (struct ID3D11Texture2D *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v8 + 72) + 120LL))(
                                      v8 + 72,
                                      0LL);
    v12 = CDecodeBitmap::CopyRegion(v9, *((int ***)this + 52), v11, v10);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xF7u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 432) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v13 = (LONG **)*((_QWORD *)this + 52);
        v24 = 0LL;
        FastRegion::CRegion::GetBoundingRect(v13, &v24);
        RectangleCount = FastRegion::CRegion::GetRectangleCount(v14);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v24.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          *((unsigned int *)this + 24) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)this + 12)) << 32),
          RectangleCount,
          v24.left,
          v24.top,
          v24.right,
          v24.bottom);
      }
    }
  }
  return v7;
}
