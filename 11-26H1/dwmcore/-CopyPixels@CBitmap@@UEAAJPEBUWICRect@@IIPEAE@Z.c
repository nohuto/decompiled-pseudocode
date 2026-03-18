/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E7330
 * Callers:
 *     ?CopyPixels@CBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180224C90 (-CopyPixels@CBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x1800E6A08 (-HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800E79E8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E8098 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTA.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // r12
  int v9; // eax
  signed int v10; // edi
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r15
  unsigned int Width; // esi
  char *v18; // r13
  enum DXGI_FORMAT v19; // ecx
  unsigned __int64 v20; // r14
  int v21; // eax
  unsigned __int8 v22; // al
  unsigned int v23; // esi
  int v25; // r9d
  unsigned int v26; // eax
  __int64 v27; // rbx
  char *v28; // rsi
  size_t v29; // rdi
  unsigned int v30; // eax
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-71h]
  unsigned int v33; // [rsp+20h] [rbp-71h]
  enum DXGI_FORMAT v34; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned int v36; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v38; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-49h]
  int v40; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v41[4]; // [rsp+58h] [rbp-39h] BYREF
  void *Src; // [rsp+68h] [rbp-29h] BYREF
  void *v43; // [rsp+70h] [rbp-21h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-19h]
  __int128 v45; // [rsp+80h] [rbp-11h] BYREF

  v39 = a4;
  v6 = a3;
  v43 = a5;
  v38 = 0LL;
  v40 = 0;
  v37 = 0;
  v36 = 0;
  v45 = 0LL;
  Src = 0LL;
  *(_OWORD *)v41 = 0LL;
  v35 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  if ( !a5 )
  {
    v15 = -2147024809;
    v33 = 163;
LABEL_32:
    v10 = v15;
    goto LABEL_29;
  }
  if ( a2 )
    goto LABEL_3;
  if ( *((_DWORD *)this + 22) > 0x7FFFFFFFu )
  {
    v15 = -2147024362;
    v33 = 171;
    DWORD2(v45) = -1;
    goto LABEL_32;
  }
  DWORD2(v45) = *((_DWORD *)this + 22);
  if ( *((_DWORD *)this + 23) > 0x7FFFFFFFu )
  {
    v15 = -2147024362;
    v33 = 172;
    HIDWORD(v45) = -1;
    goto LABEL_32;
  }
  HIDWORD(v45) = *((_DWORD *)this + 23);
  a2 = (const struct WICRect *)&v45;
LABEL_3:
  v9 = CBitmap::HrCheckPixelRect(this, a2, v41);
  v10 = v9;
  if ( v9 < 0 )
  {
    v33 = 177;
    goto LABEL_40;
  }
  v34 = DXGI_FORMAT_UNKNOWN;
  if ( !a2 || a2->Width < 0 || a2->Height < 0 )
  {
    v15 = -2147024809;
    v30 = 1689;
    v10 = -2147024809;
    v31 = -2147024809;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, v30, 0LL);
    v33 = 182;
    goto LABEL_29;
  }
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 26));
  v14 = HrCalcRequiredBufferSizeWorker(PixelFormatSize, v6, v12, v13, (unsigned int *)&v34);
  v15 = v14;
  v10 = v14;
  if ( v14 < 0 )
  {
    v31 = v14;
    v30 = 1696;
    goto LABEL_38;
  }
  if ( v34 > a4 )
  {
    v10 = -2003292276;
    v30 = 1700;
    v15 = -2003292276;
    v31 = -2003292276;
    goto LABEL_38;
  }
  v9 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 2) + 24LL))(
         (char *)this + 16,
         a2,
         1LL,
         &v38);
  v10 = v9;
  if ( v9 < 0 )
  {
    v33 = 184;
LABEL_40:
    v25 = v9;
    goto LABEL_30;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v38 + 32LL))(v38, &v40, &v37);
  v10 = v9;
  if ( v9 < 0 )
  {
    v33 = 186;
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 40LL))(v38, &v36);
  v10 = v9;
  if ( v9 < 0 )
  {
    v33 = 187;
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, void **))(*(_QWORD *)v38 + 48LL))(v38, &v35, &Src);
  v10 = v9;
  if ( v9 < 0 )
  {
    v33 = 189;
    goto LABEL_40;
  }
  v16 = v37;
  Width = a2->Width;
  v18 = (char *)Src;
  v41[0] = v36;
  v19 = *((_DWORD *)this + 26);
  v20 = v36;
  v34 = v19;
  v21 = HrCheckBufferSize(v19, v36, Width, v37, v35);
  v15 = v21;
  v10 = v21;
  if ( v21 < 0 )
  {
    v32 = 62;
    goto LABEL_27;
  }
  v21 = HrCheckBufferSize(v34, v6, Width, v16, v39);
  v15 = v21;
  v10 = v21;
  if ( v21 < 0 )
  {
    v32 = 69;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v32, 0LL);
    goto LABEL_28;
  }
  v22 = GetPixelFormatSize(v34);
  if ( v22 && Width <= 0x7FFFFFF8u / v22 )
  {
    v10 = 0;
    v23 = (v22 * Width + 7) >> 3;
    if ( v23 > (unsigned int)v6 )
    {
      v15 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Cu, 0LL);
    }
    else
    {
      if ( (_DWORD)v20 != (_DWORD)v6 || (unsigned int)v6 - v23 >= v22 >> 3 )
      {
        if ( (_DWORD)v16 )
        {
          v26 = v23;
          v27 = v16;
          v28 = (char *)v43;
          v39 = 0;
          v29 = v26;
          do
          {
            memcpy_0(v28, v18, v29);
            v28 += v6;
            v18 += v20;
            --v27;
          }
          while ( v27 );
          v10 = v39;
        }
LABEL_22:
        v15 = v10;
        if ( v10 >= 0 )
          goto LABEL_23;
        goto LABEL_28;
      }
      if ( is_mul_ok(v20, (unsigned int)v16) )
      {
        memcpy_0(v43, v18, v20 * (unsigned int)v16);
        goto LABEL_22;
      }
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x59u, 0LL);
    }
    v10 = v15;
  }
  else
  {
    v15 = -2147024362;
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x47u, 0LL);
  }
LABEL_28:
  v33 = 202;
LABEL_29:
  v25 = v15;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, v33, 0LL);
LABEL_23:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v38);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
