/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801BBEB0
 * Callers:
 *     ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180225020 (-LockForRead@CWICBitmapWrapper@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800E82D8 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801278A4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  void *v9; // r12
  int v10; // eax
  int v11; // ebx
  unsigned int *v13; // r14
  INT v14; // r8d
  unsigned int *v15; // r15
  INT v16; // r9d
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // r8d
  signed int v20; // ecx
  int *v21; // r11
  __int64 v22; // r14
  unsigned int v23; // r15d
  unsigned __int64 v24; // r14
  void *v25; // rax
  int *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // [rsp+20h] [rbp-89h]
  struct IUnknown *v30; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v33; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-35h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-31h] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+80h] [rbp-29h]
  enum WICBitmapLockFlags v37; // [rsp+88h] [rbp-21h]
  __int64 v38; // [rsp+90h] [rbp-19h] BYREF
  void *v39; // [rsp+98h] [rbp-11h] BYREF
  struct IBitmapLock **v40; // [rsp+A0h] [rbp-9h]
  unsigned int v41[4]; // [rsp+A8h] [rbp-1h] BYREF

  v40 = a4;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v37 = a3;
  v38 = 0LL;
  v30 = 0LL;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v9 = 0LL;
  v31 = 0;
  v39 = 0LL;
  v36 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
    *((_QWORD *)this + 15),
    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
    &v38);
  if ( !v38 )
  {
    if ( a3 != WICBitmapLockRead )
    {
      v11 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x78u, 0LL);
      goto LABEL_7;
    }
    v35 = 0;
    *(_OWORD *)v41 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v13 = (unsigned int *)((char *)this + 72), v14 = *((_DWORD *)this + 18), a2->m128i_i32[0] >= v14)
        || (v15 = (unsigned int *)((char *)this + 76), v16 = *((_DWORD *)this + 19), a2->m128i_i32[1] >= v16) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xA8u, 0LL);
        v13 = (unsigned int *)((char *)this + 72);
        v15 = (unsigned int *)((char *)this + 76);
      }
      else
      {
        v17 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v41 = *a2;
        v18 = v41[2];
        if ( v17 < 0 )
        {
          v18 = v17 + v41[2];
          v17 = 0;
          v41[0] = 0;
          v41[2] = v18;
        }
        if ( v18 + v17 > v14 )
        {
          v18 = v14 - v17;
          v41[2] = v14 - v17;
        }
        v19 = v41[1];
        v20 = v41[3];
        if ( (v41[1] & 0x80000000) != 0 )
        {
          v20 = v41[1] + v41[3];
          v41[1] = 0;
          v41[3] = v20;
          v19 = 0;
        }
        if ( (int)(v20 + v19) > v16 )
        {
          v20 = v16 - v19;
          v41[3] = v16 - v19;
        }
        if ( v18 <= 0 || v20 <= 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xA2u, 0LL);
      }
    }
    else
    {
      v13 = (unsigned int *)((char *)this + 72);
      v15 = (unsigned int *)((char *)this + 76);
      v41[2] = *((_DWORD *)this + 18);
      v41[3] = *((_DWORD *)this + 19);
    }
    v11 = HrCalcDWordAlignedScanlineStride(*v13, *((_DWORD *)this + 22), &v35);
    if ( v11 < 0 )
    {
      v26 = v21;
      v28 = (unsigned int)v21;
      v27 = 181;
    }
    else
    {
      v22 = *v15;
      v23 = v35;
      v24 = v35 * v22;
      if ( v24 > 0xFFFFFFFF )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, v21);
        goto LABEL_18;
      }
      v25 = MIDL_user_allocate((unsigned int)v24);
      v9 = v25;
      if ( !v25 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xBAu, 0LL);
LABEL_18:
        v4 = v36;
        goto LABEL_7;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *))(**((_QWORD **)this + 15) + 56LL))(
              *((_QWORD *)this + 15),
              v41,
              v23,
              (unsigned int)v24,
              v25);
      if ( v11 < 0 )
      {
        v26 = 0LL;
        v27 = 191;
        v28 = 0;
      }
      else
      {
        v11 = CBitmap::HrLock(
                (CWICBitmapWrapper *)((char *)this - 16),
                v41[2],
                v41[3],
                (CWICBitmapWrapper *)((char *)this + 88),
                v23,
                v24,
                v9,
                v37,
                v40,
                1,
                0LL);
        if ( v11 >= 0 )
          goto LABEL_18;
        v26 = 0LL;
        v27 = 201;
        v28 = 0;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, v26, v28, v11, v27, v26);
    if ( v9 )
      operator delete(v9);
    goto LABEL_18;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v38 + 64LL))(
          v38,
          a2,
          (unsigned int)a3,
          &v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    v29 = 93;
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v30->lpVtbl[1].QueryInterface)(
            v30,
            &v34,
            &v33);
    v11 = v10;
    if ( v10 < 0 )
    {
      v29 = 95;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v30->lpVtbl[1].AddRef)(v30, &v32);
      v11 = v10;
      if ( v10 < 0 )
      {
        v29 = 96;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v30->lpVtbl[1].Release)(
                v30,
                &v31,
                &v39);
        v11 = v10;
        if ( v10 < 0 )
        {
          v29 = 97;
        }
        else
        {
          v10 = CBitmap::HrLock(
                  (CWICBitmapWrapper *)((char *)this - 16),
                  v34,
                  v33,
                  (CWICBitmapWrapper *)((char *)this + 88),
                  v32,
                  v31,
                  v39,
                  a3,
                  a4,
                  0,
                  v30);
          v11 = v10;
          if ( v10 >= 0 )
            goto LABEL_7;
          v29 = 111;
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v29, 0LL);
LABEL_7:
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v11;
}
