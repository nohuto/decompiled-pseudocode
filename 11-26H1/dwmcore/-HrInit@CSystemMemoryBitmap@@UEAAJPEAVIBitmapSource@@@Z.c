/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802944E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801278A4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180224CB0 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v5 = inited;
    if ( inited >= 0 )
    {
      v6 = (unsigned int *)((char *)this + 144);
      v7 = HrCalcDWordAlignedScanlineStride(
             *((unsigned int *)this + 22),
             *((_DWORD *)this + 26),
             (unsigned int *)this + 36);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = HrMalloc(*v6, *((unsigned int *)this + 23), (void **)this + 17);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = *((_QWORD *)this + 17);
          v10 = *v6;
          v11 = *v6;
          v17 = *((_DWORD *)this + 22);
          v18 = *((_DWORD *)this + 23);
          v12 = *(_QWORD *)a2;
          v16 = 0LL;
          v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, __int64, _QWORD, __int64))(v12 + 48))(
                  a2,
                  &v16,
                  v11,
                  (unsigned int)(v18 * v10),
                  v9);
          v5 = v13;
          if ( v13 >= 0 )
            return v5;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x11Du, 0LL);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x113u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x10Bu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x105u, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  v14 = (void *)*((_QWORD *)this + 17);
  if ( v14 )
  {
    operator delete(v14);
    *((_QWORD *)this + 17) = 0LL;
  }
  return v5;
}
