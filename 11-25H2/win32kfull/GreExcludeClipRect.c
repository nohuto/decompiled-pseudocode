/*
 * XREFs of GreExcludeClipRect @ 0x1400A1BB0
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x1400A1B90 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  LONG bottom; // edx
  DC *v11; // rbx
  int v12; // eax
  ULONG v14; // ecx
  int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-79h] BYREF
  __int64 v17; // [rsp+30h] [rbp-71h] BYREF
  bool v18; // [rsp+38h] [rbp-69h]
  DC *v19[14]; // [rsp+40h] [rbp-61h] BYREF
  struct _RECTL v20; // [rsp+B0h] [rbp+Fh] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v19, a1);
  v8 = 0;
  if ( !v19[0] )
  {
    v14 = 6;
LABEL_15:
    EngSetLastError(v14);
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 208LL);
  DC::QuickInitXform(v19[0], &v16, 2147484164LL);
  bottom = a5;
  v17 = v16;
  v18 = v9 != 2;
  v20.left = left;
  v20.top = top;
  v20.right = right;
  v20.bottom = a5;
  if ( (*(_BYTE *)(v16 + 32) & 1) != 0 )
  {
    v11 = v19[0];
    if ( (*(_BYTE *)(v16 + 32) & 0x43) == 0x43
      || (v15 = bCvtPts1(v16, (__int64)&v20, 2LL),
          bottom = v20.bottom,
          right = v20.right,
          top = v20.top,
          left = v20.left,
          v15) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v11 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v20.left = left;
        v20.right = right;
      }
    }
    if ( left > right )
    {
      v20.left = right;
      v20.right = left;
    }
    if ( top > bottom )
    {
      v20.top = bottom;
      v20.bottom = top;
    }
    v12 = DC::iCombine(v19[0], &v20, 4);
    goto LABEL_11;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v14 = 87;
    goto LABEL_15;
  }
  v12 = DC::iCombine(v19[0], (struct EXFORMOBJR *)&v17, &v20, 4);
LABEL_11:
  v8 = v12;
  if ( v12 > 1 )
    v8 = 3;
LABEL_13:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v19);
  return v8;
}
