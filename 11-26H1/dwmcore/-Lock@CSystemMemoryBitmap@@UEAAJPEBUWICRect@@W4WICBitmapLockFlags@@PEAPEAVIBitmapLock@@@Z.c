/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800E7B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800E6210 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800E7024 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E8098 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTA.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800E8278 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E2F70 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  char *v7; // r14
  int v8; // eax
  int v9; // ebx
  char *v10; // rbp
  unsigned __int8 PixelFormatSize; // al
  int v12; // r9d
  unsigned int v13; // r11d
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  int v17; // eax
  int v18; // esi
  CBitmapLock *v19; // rax
  CBitmapLock *v20; // rax
  CBitmapLock *v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // r9d
  int v29; // ebp
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-B8h]
  unsigned int v34; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+78h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+80h] [rbp-58h]
  __int128 v37; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+E0h] [rbp+8h]

  v37 = 0LL;
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = (char *)this - 16;
  v8 = CBitmap::HrCheckPixelRect((char *)this - 16, a2, &v37);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x49u, 0LL);
  v10 = (char *)this + 88;
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 22));
  v12 = v37 * PixelFormatSize;
  if ( v9 < 0 )
    goto LABEL_28;
  v13 = *((_DWORD *)this + 32);
  v14 = DWORD2(v37) - v37;
  v38 = DWORD2(v37) - v37;
  v34 = v13;
  v35 = *((_QWORD *)this + 15) + v12 / 8 + (__int64)(int)(DWORD1(v37) * v13);
  v15 = HIDWORD(v37) - DWORD1(v37);
  if ( HIDWORD(v37) == DWORD1(v37) )
    v16 = 0;
  else
    v16 = (int)(v14 * PixelFormatSize + 7) / 8 + v13 * (v15 - 1);
  if ( (((_BYTE)v37 * PixelFormatSize) & 7) != 0 )
  {
    v32 = CBitmap::HrLockUnaligned(
            (CSystemMemoryBitmap *)((char *)this - 16),
            v14,
            v15,
            (CSystemMemoryBitmap *)((char *)this + 88),
            ((_BYTE)v37 * PixelFormatSize) & 7,
            DWORD2(v37) * (unsigned int)PixelFormatSize - v12,
            v13,
            v16,
            (void *)(*((_QWORD *)this + 15) + v12 / 8 + (__int64)(DWORD1(v37) * *((_DWORD *)this + 32))),
            a3,
            a4);
    v9 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x8Fu, 0LL);
    goto LABEL_28;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v9 = -2147024809;
      v18 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1ABu, 0LL);
      goto LABEL_39;
    }
    v17 = CBitmapLockState::LockRead((CBitmapLockState *)(v7 + 116));
    v18 = v17;
    v9 = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
    v33 = 423;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v33, 0LL);
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x7Bu, 0LL);
    goto LABEL_28;
  }
  v17 = CBitmapLockState::LockWrite((CBitmapLockState *)(v7 + 116));
  v18 = v17;
  v9 = v17;
  if ( v17 < 0 )
  {
    v33 = 419;
    goto LABEL_37;
  }
LABEL_10:
  v19 = (CBitmapLock *)operator new(0x80uLL);
  if ( !v19 )
  {
    v21 = 0LL;
    goto LABEL_48;
  }
  v20 = CBitmapLock::CBitmapLock(v19);
  v21 = v20;
  if ( !v20 )
  {
LABEL_48:
    v18 = -2147024882;
    v31 = 433;
    goto LABEL_41;
  }
  (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v20 + 8LL))(v20);
  v22 = (unsigned __int64)(v7 + 24) & -(__int64)(v7 != 0LL);
  if ( v15 )
  {
    v23 = v38 * (unsigned __int64)GetPixelFormatSize(*(enum DXGI_FORMAT *)v10);
    if ( v23 > 0xFFFFFFFF )
    {
      v27 = 1620;
      goto LABEL_19;
    }
    if ( (int)v23 + 7 < (unsigned int)v23 )
    {
      v27 = 1621;
      goto LABEL_19;
    }
    v24 = (unsigned int)(v23 + 7) >> 3;
    if ( v34 < v24 )
    {
      v9 = -2147024809;
      v27 = 1626;
      v29 = -2147024809;
      v28 = -2147024809;
      goto LABEL_20;
    }
    v25 = v34 * (unsigned __int64)(v15 - 1);
    if ( v25 > 0xFFFFFFFF )
    {
      v27 = 1629;
      goto LABEL_19;
    }
    v26 = v24 + v25;
    if ( v24 + (unsigned int)v25 < (unsigned int)v25 )
    {
      v27 = 1630;
LABEL_19:
      v28 = -2147024362;
      v9 = -2147024362;
      v29 = -2147024362;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v27, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x682u, 0LL);
      goto LABEL_46;
    }
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v26 = 0;
  }
  if ( v26 <= v16 )
  {
    *((_WORD *)v21 + 62) = 1;
    *((_QWORD *)v21 + 8) = v7;
    if ( v7 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    *((_DWORD *)v21 + 20) = v38;
    *((_DWORD *)v21 + 21) = v15;
    *(_QWORD *)((char *)v21 + 92) = *(_QWORD *)v10;
    *((_DWORD *)v21 + 25) = *((_DWORD *)v10 + 2);
    *((_DWORD *)v21 + 22) = v34;
    *((_QWORD *)v21 + 13) = v35;
    *((_DWORD *)v21 + 28) = v16;
    *((_QWORD *)v21 + 9) = v22;
    if ( v22 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 8LL))((unsigned __int64)(v7 + 24) & -(__int64)(v7 != 0LL));
    *((_DWORD *)v21 + 30) = a3;
    goto LABEL_26;
  }
  v9 = -2003292276;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292276, 0x686u, 0LL);
LABEL_46:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5Cu, 0LL);
LABEL_26:
  v18 = v9;
  if ( v9 >= 0 )
  {
    *a4 = v21;
    goto LABEL_28;
  }
  v31 = 445;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v31, 0LL);
  if ( (a3 & 2) != 0 )
  {
    *((_DWORD *)v7 + 29) = 0;
  }
  else if ( (a3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v7 + 29);
  }
  if ( v21 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v21 + 16LL))(v21);
  v9 = v18;
  if ( v18 < 0 )
    goto LABEL_39;
LABEL_28:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
