/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3B78
 * Callers:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800E3820 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // rsi
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rax
  enum DXGI_FORMAT v11; // ecx
  unsigned __int8 PixelFormatSize; // al
  __int64 v13; // r8
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v18; // [rsp+20h] [rbp-48h]
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_DWORD *)(a1 + 24);
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v7 < *v4 || v7[1] < v4[1] || v7[2] > v4[2] || v7[3] > v4[3])
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v16 = -2147024809;
    v18 = 170;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v18, 0LL);
    return v16;
  }
  v10 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 24LL))(a3, v19);
  v11 = *(_DWORD *)(a1 + 124);
  if ( *v10 != v11 )
  {
    v16 = -2003292288;
    v18 = 175;
    goto LABEL_12;
  }
  PixelFormatSize = GetPixelFormatSize(v11);
  v14 = a2[1] * v13 + *a2 * (PixelFormatSize >> 3);
  v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 64LL))(
          a3,
          a2,
          v13,
          *(_DWORD *)(a1 + 144) - v14,
          *(_QWORD *)(a1 + 136) + v14);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xBCu, 0LL);
  else
    CSecondaryBitmap::AddValidRect(v4, a2);
  return v16;
}
