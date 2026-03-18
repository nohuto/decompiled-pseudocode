/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14027D524
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline @ 0x14030F228 (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 p_hdev; // rax
  __int64 *v6; // rax
  __int64 p_hsurf; // rax
  ULONG iBitmapFormat; // ecx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  int v12; // [rsp+50h] [rbp+7h] BYREF
  SIZEL sizlBitmap; // [rsp+54h] [rbp+Bh]
  int v14; // [rsp+5Ch] [rbp+13h]
  __int64 v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  RECTL prclDest; // [rsp+70h] [rbp+27h] BYREF

  v2 = 0;
  sizlBitmap = a2->sizlBitmap;
  v14 = 0;
  v17 = 0;
  if ( !(unsigned int)Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_6;
  p_hdev = (__int64)&a2[1].hdev;
  if ( !a2 )
    p_hdev = 128LL;
  v6 = *(__int64 **)p_hdev;
  if ( v6 )
    v15 = *v6;
  else
LABEL_6:
    v15 = 0LL;
  p_hsurf = (__int64)&a2[1].hsurf;
  if ( !a2 )
    p_hsurf = 112LL;
  iBitmapFormat = a2->iBitmapFormat;
  v16 = *(_DWORD *)p_hsurf & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v12 = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v12 = 3;
  }
  else
  {
    v12 = iBitmapFormat;
  }
  if ( !SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)&v12, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
    return 0LL;
  prclDest.right = a2->sizlBitmap.cx;
  prclDest.bottom = a2->sizlBitmap.cy;
  *(_QWORD *)&prclDest.left = 0LL;
  v10 = Gre::Base::Globals(v9);
  LOBYTE(v2) = EngCopyBits(
                 (SURFOBJ *)((*(_QWORD *)a1 + 24LL) & -(__int64)(*(_QWORD *)a1 != 0LL)),
                 a2,
                 0LL,
                 (XLATEOBJ *)((char *)v10 + 4664),
                 &prclDest,
                 (POINTL *)&prclDest);
  return v2;
}
