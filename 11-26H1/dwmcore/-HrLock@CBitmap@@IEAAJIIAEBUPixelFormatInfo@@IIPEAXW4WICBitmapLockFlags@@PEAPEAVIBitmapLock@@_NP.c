/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800E82D8
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801BBEB0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800E6210 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800E7024 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800E8278 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  bool v13; // zf
  __int32 v14; // r14d
  int v15; // eax
  unsigned int v16; // edi
  CBitmapLock *v17; // rax
  __int64 v18; // rdx
  CBitmapLock *v19; // rax
  CBitmapLock *v20; // rsi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  int v23; // r9d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // r9d
  int v29; // r14d
  bool v30; // sf
  unsigned int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-58h]
  enum WICBitmapLockFlags v37; // [rsp+B8h] [rbp+40h]

  v13 = (a8 & 2) == 0;
  v14 = a8 & 2;
  v37 = v14;
  if ( !v13 )
  {
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 116));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v33 = 419;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v33, 0LL);
    return v16;
  }
  if ( (a8 & 1) == 0 )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1ABu, 0LL);
    return v16;
  }
  v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 116));
  v16 = v15;
  if ( v15 < 0 )
  {
    v33 = 423;
    goto LABEL_29;
  }
LABEL_4:
  v17 = (CBitmapLock *)operator new(0x80uLL);
  if ( !v17 )
  {
    v20 = 0LL;
    goto LABEL_39;
  }
  v19 = CBitmapLock::CBitmapLock(v17, v18);
  v20 = v19;
  if ( !v19 )
  {
LABEL_39:
    v16 = -2147024882;
    v32 = 433;
    goto LABEL_32;
  }
  (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
  v21 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  if ( !a3 )
  {
    v16 = 0;
    v26 = 0;
    goto LABEL_35;
  }
  v22 = a2 * (unsigned __int64)GetPixelFormatSize(*(_DWORD *)a4);
  if ( v22 > 0xFFFFFFFF )
  {
    v27 = 1620;
    goto LABEL_13;
  }
  if ( (int)v22 + 7 < (unsigned int)v22 )
  {
    v27 = 1621;
    goto LABEL_13;
  }
  v24 = (unsigned int)(v22 + 7) >> 3;
  if ( a5 >= v24 )
  {
    v25 = a5 * (unsigned __int64)(unsigned int)(v23 - 1);
    if ( v25 > 0xFFFFFFFF )
    {
      v27 = 1629;
      goto LABEL_13;
    }
    v26 = v24 + v25;
    if ( v24 + (unsigned int)v25 < (unsigned int)v25 )
    {
      v27 = 1630;
LABEL_13:
      v28 = -2147024362;
      v16 = -2147024362;
      v29 = -2147024362;
      goto LABEL_14;
    }
    v16 = 0;
LABEL_35:
    if ( v26 <= a6 )
      goto LABEL_15;
    v16 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292276, 0x686u, 0LL);
    goto LABEL_37;
  }
  v29 = -2147024809;
  v27 = 1626;
  v16 = -2147024809;
  v28 = -2147024809;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v27, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x682u, 0LL);
  v30 = v29 < 0;
  v14 = v37;
  if ( !v30 )
  {
LABEL_15:
    *((_BYTE *)v20 + 124) = 1;
    *((_BYTE *)v20 + 125) = a10;
    *((_QWORD *)v20 + 8) = a11;
    if ( a11 )
      ((void (__fastcall *)(struct IUnknown *))a11->lpVtbl->AddRef)(a11);
    *((_DWORD *)v20 + 20) = a2;
    *((_DWORD *)v20 + 21) = a3;
    *(_QWORD *)((char *)v20 + 92) = *(_QWORD *)a4;
    *((_DWORD *)v20 + 25) = *((_DWORD *)a4 + 2);
    *((_DWORD *)v20 + 22) = a5;
    *((_QWORD *)v20 + 13) = a7;
    *((_DWORD *)v20 + 28) = a6;
    *((_QWORD *)v20 + 9) = v21;
    if ( v21 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    *((_DWORD *)v20 + 30) = a8;
    goto LABEL_20;
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x5Cu, 0LL);
LABEL_20:
  if ( (v16 & 0x80000000) == 0 )
  {
    *a9 = v20;
    return v16;
  }
  v32 = 445;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v32, 0LL);
  if ( v14 )
  {
    *((_DWORD *)this + 29) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 29);
  }
  if ( v20 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v20 + 16LL))(v20);
  return v16;
}
