/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E2F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1800E23C0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800E4134 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800E77CC (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800E8278 (--0CBitmapLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  CD2DBitmap *v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // edi
  CBitmapLock *v11; // rax
  CBitmapLock *v12; // rax
  CBitmapLock *v13; // r14
  const struct PixelFormatInfo *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  enum DXGI_FORMAT *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  struct IBitmapDest *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  struct IBitmapDest *v26; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-11h] BYREF
  struct IUnknown *v28; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 *v29; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v30[16]; // [rsp+80h] [rbp+7h] BYREF

  v4 = (CD2DBitmap *)(a1 - 88);
  v28 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*(_DWORD *)(v7 + 8) > *((_DWORD *)v4 + 36) || *(_DWORD *)(v7 + 12) > *(_DWORD *)(a1 + 60))
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x116u, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 88) & 0x400000) != 0 )
    {
      v16 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0x11Cu, 0LL);
      return v16;
    }
    v29 = 0LL;
    v27 = 0;
    LODWORD(v26) = 0;
    if ( CD2DBitmap::TryFastWarpLock(v4, &v29, &v27, (unsigned int *)&v26, &v28) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v10 = a2[1] * v27 + *a2 * (PixelFormatSize >> 3);
      v11 = (CBitmapLock *)MIDL_user_allocate(0x80uLL);
      if ( v11 )
      {
        v12 = CBitmapLock::CBitmapLock(v11);
        v13 = v12;
        if ( v12 )
        {
          (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v12 + 8LL))(v12);
          v14 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(
                                                  a1 - 8,
                                                  v30);
          v15 = CBitmapLock::HrInit(
                  v13,
                  (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(v4 != 0LL)),
                  a2[2] - *a2,
                  a2[3] - a2[1],
                  v14,
                  v27,
                  (unsigned int)v26 - v10,
                  &v29[v10],
                  WICBitmapLockRead,
                  0,
                  v28);
          v16 = v15;
          if ( v15 >= 0 )
          {
            *a3 = v13;
            goto LABEL_11;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x13Cu, 0LL);
          v20 = *(_QWORD *)v13;
          goto LABEL_19;
        }
      }
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x130u, 0LL);
    }
    else
    {
      v26 = 0LL;
      v18 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(a1 - 8, v30);
      v19 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v18, &v26);
      v16 = v19;
      if ( v19 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v4 + 40LL))(v4);
        v22 = v26;
        v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(a1 - 8, v30);
        v24 = CD3DDevice::CopyTexture2D(v21, *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 144), v23, a2, v22, 0, 0);
        v16 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x14Eu, 0LL);
        }
        else
        {
          v25 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, CBitmapLock **))(*(_QWORD *)v26 + 24LL))(
                  v26,
                  0LL,
                  1LL,
                  a3);
          v16 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x153u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x147u, 0LL);
      if ( v26 )
      {
        v20 = *(_QWORD *)v26;
LABEL_19:
        (*(void (**)(void))(v20 + 16))();
      }
    }
  }
LABEL_11:
  if ( v28 )
    ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->Release)(v28);
  return v16;
}
