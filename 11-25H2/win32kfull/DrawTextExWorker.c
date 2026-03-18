/*
 * XREFs of DrawTextExWorker @ 0x1400C188C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1400C2CF0 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     GreExtSelectClipRgn @ 0x1400C353C (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v6; // rdi
  __int64 RectRgn; // rbx
  LONG top; // esi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // edi
  LONG v16; // ecx
  __int64 result; // rax
  int TextAlign; // eax
  int v19; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+40h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+54h] [rbp-A4h] BYREF
  int v24; // [rsp+6Ch] [rbp-8Ch]
  int v25; // [rsp+90h] [rbp-68h]

  LODWORD(v6) = a3;
  v22 = 0;
  memset_0(v23, 0, 0x44uLL);
  v20 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == -1 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)&v22, a6) )
    return 0LL;
  v25 = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v20 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) != 0 )
  {
    RectRgn = 0LL;
  }
  else
  {
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1) != 1 )
      {
        GreDeleteObject(RectRgn);
        RectRgn = -1LL;
      }
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        *(_QWORD *)&a4->right,
        HIDWORD(*(_QWORD *)&a4->right));
    }
  }
  top = a4->top;
  v12 = a5 & 0xC;
  if ( v12 == 4 )
  {
    top += (a4->bottom - top - v24) / 2;
  }
  else if ( v12 == 8 )
  {
    top = a4->bottom - v24;
  }
  v13 = AddEllipsisAndDrawLine(a1, top, a2, v6, a5, (struct DRAWTEXTDATA *)&v22, v19);
  v14 = v24 + top;
  v15 = (_DWORD)a2 + 2 * v13;
  if ( RectRgn )
  {
    if ( RectRgn == -1 )
    {
      GreExtSelectClipRgn(a1, 0LL);
    }
    else
    {
      GreExtSelectClipRgn(a1, (HRGN)RectRgn);
      GreDeleteObject(RectRgn);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v20);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v15 - (_DWORD)a2) >> 1;
  v16 = a4->top;
  result = (unsigned int)(v14 - v16);
  if ( v14 == v16 )
    return 1LL;
  return result;
}
