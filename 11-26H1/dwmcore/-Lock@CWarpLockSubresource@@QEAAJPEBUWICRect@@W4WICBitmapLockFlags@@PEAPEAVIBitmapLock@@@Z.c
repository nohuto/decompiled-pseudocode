/*
 * XREFs of ?Lock@CWarpLockSubresource@@QEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802AA3A0
 * Callers:
 *     ?Lock@CSysmemTexture@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802B9420 (-Lock@CSysmemTexture@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801A7660 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Lock(
        CWarpLockSubresource *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  int v5; // r15d
  enum WICBitmapLockFlags v6; // r11d
  int v7; // r14d
  INT X; // edi
  INT Y; // esi
  INT Width; // eax
  INT Height; // ecx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v17[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  int v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 9);
  v6 = a3;
  v7 = *((_DWORD *)this + 10);
  v19 = v5;
  v20 = v7;
  v18 = 0LL;
  if ( a2 )
  {
    X = a2->X;
    if ( a2->X < 0 || (Y = a2->Y, Y < 0) || (Width = a2->Width, Width <= 0) || (Height = a2->Height, Height <= 0) )
    {
      v13 = 49LL;
      goto LABEL_17;
    }
    v5 = X + Width;
    v17[0] = a2->X;
    v7 = Height + Y;
    v17[2] = X + Width;
    v17[3] = Height + Y;
    v17[1] = Y;
    if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((unsigned int *)&v18, v17) )
    {
      v13 = 56LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\warplocksubresource.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  else
  {
    Y = 0;
    X = 0;
  }
  if ( v6 != WICBitmapLockRead && v6 != WICBitmapLockWrite && v6 != (WICBitmapLockWrite|WICBitmapLockRead) )
  {
    v13 = 78LL;
    goto LABEL_17;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 24LL))(
          *((_QWORD *)this + 2),
          *((_QWORD *)this + 3),
          *((unsigned int *)this + 8));
  v15 = v14;
  if ( v14 >= 0 )
  {
    *((_DWORD *)this + 26) = X;
    *((_DWORD *)this + 27) = Y;
    *((_DWORD *)this + 28) = v5;
    *((_DWORD *)this + 29) = v7;
    *a4 = this;
    CMILRefCountImpl::AddReference((CWarpLockSubresource *)((char *)this + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\warplocksubresource.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
}
