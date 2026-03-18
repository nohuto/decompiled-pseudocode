/*
 * XREFs of EngCreateRedirectionDeviceBitmap @ 0x140025290
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 */

HBITMAP __stdcall EngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  HBITMAP v3; // rdi
  ULONG v6; // esi
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rbx
  __int64 v11; // [rsp+58h] [rbp+7h] BYREF
  char v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+64h] [rbp+13h]
  __int64 v14; // [rsp+68h] [rbp+17h] BYREF
  char v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  ULONG v17; // [rsp+78h] [rbp+27h] BYREF
  SIZEL v18; // [rsp+7Ch] [rbp+2Bh]
  int v19; // [rsp+84h] [rbp+33h]
  __int64 v20; // [rsp+88h] [rbp+37h]
  __int64 v21; // [rsp+90h] [rbp+3Fh]
  LONG cy; // [rsp+C4h] [rbp+73h]

  cy = sizl.cy;
  v3 = 0LL;
  if ( sizl.cx < 0 || sizl.cy < 0 )
  {
    v9 = 0LL;
    v15 = 0;
    v14 = 0LL;
    v16 = 0;
  }
  else
  {
    v18 = sizl;
    v17 = iFormatCompat & 0xFFFF7FFF;
    v19 = 0;
    v6 = iFormatCompat & 0x8000;
    v21 = 2048LL;
    v20 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v11,
      (struct _DEVBITMAPINFO *)&v17,
      (void *)0xDEADBEEFLL,
      0LL,
      0,
      0LL,
      0LL,
      v6 == 0,
      0,
      0);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 112) |= 0x400000u;
      *(_DWORD *)(v11 + 88) = 0;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 72) = 0LL;
      *(_DWORD *)(v11 + 112) |= 0x200000u;
      v7 = v11;
      if ( sizl.cx <= *(_DWORD *)(v11 + 56) && cy <= *(_DWORD *)(v11 + 60) )
      {
        *(SIZEL *)(v11 + 56) = sizl;
        v7 = v11;
      }
      *(_QWORD *)(v7 + 24) = dhsurf;
      *(_WORD *)(v11 + 100) = 3;
      v8 = v12 | 1;
      v12 |= 1u;
      if ( v6 )
      {
        *(_DWORD *)(v11 + 112) |= 0x40000u;
        v8 = v12;
      }
      v9 = v11;
      v15 = v8;
      v16 = v13;
      v13 = 0;
      v11 = 0LL;
      v12 = 0;
    }
    else
    {
      v9 = 0LL;
      v15 = 0;
      v16 = 0;
    }
    v14 = v9;
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
  }
  if ( v9 )
    v3 = *(HBITMAP *)(v9 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v14);
  return v3;
}
