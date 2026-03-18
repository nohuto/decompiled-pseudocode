/*
 * XREFs of BltIcon @ 0x140056A38
 * Callers:
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140192F6C (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreSetStretchBltMode @ 0x140056DD4 (GreSetStretchBltMode.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall BltIcon(HDC a1, int a2, int a3, int a4, int a5, HDC a6, __int64 a7, int a8, int a9)
{
  int v9; // esi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // edi
  int v17; // ebx
  __int64 v19; // [rsp+78h] [rbp-120h]
  _BYTE v20[112]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v21[128]; // [rsp+F0h] [rbp-A8h] BYREF
  int v22; // [rsp+1D8h] [rbp+40h]

  v9 = 0;
  if ( a8 == 1 )
  {
    v14 = a7;
LABEL_3:
    v15 = *(_QWORD *)(v14 + 88);
    goto LABEL_4;
  }
  if ( a8 == 3 )
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 128);
  }
  else
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 96);
    if ( !v15 )
    {
      v9 = *(_DWORD *)(a7 + 144) >> 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  GreSetStretchBltMode(a1);
  v19 = GreSelectBitmap(a6, v15);
  if ( a8 == 3 )
  {
    HIWORD(v22) = 511;
    LOBYTE(v22) = 0;
    BYTE1(v22) = a9 < 0 ? 0 : 0x80;
    GreAlphaBlend((int)a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(v14 + 140), *(_DWORD *)(v14 + 144) >> 1, v22);
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 144);
    v17 = *(_DWORD *)(v14 + 140);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v21, a6, (struct XDCOBJ *)v20);
    GrepStretchBlt(
      (struct XDCOBJ *)v20,
      a2,
      a3,
      a4,
      a5,
      (struct OPTAPIDCOBJ *)v21,
      0,
      v9,
      v17,
      v16 >> 1,
      a9,
      0xFFFFFFFF,
      0);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v21);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  }
  GreSetStretchBltMode(a1);
  GreSetTextColor(a1);
  GreSetBkColor(a1);
  GreSelectBitmap(a6, v19);
  return 1LL;
}
