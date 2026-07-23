/*
 * XREFs of BgpGxParseBitmap @ 0x140C554E8
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x14071AFEC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxDrawBitmapImage @ 0x140C57AD0 (BgpGxDrawBitmapImage.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x140C59640 (BgpGxRectangleCreate.c)
 *     BgpGxCopyBitmapToRectangle @ 0x140C5A290 (BgpGxCopyBitmapToRectangle.c)
 */

__int64 __fastcall BgpGxParseBitmap(__int64 a1, _QWORD *a2)
{
  bool v2; // cf
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // edi
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 2) < 0x30u;
  v10[2] = 0;
  v11 = 0LL;
  if ( v2 )
    return (unsigned int)-1073741811;
  v4 = (_DWORD *)(a1 + 14);
  if ( *(_WORD *)a1 != 19778 || *(_DWORD *)(a1 + 30) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *(unsigned __int16 *)(a1 + 28);
    if ( ((_DWORD)v5 == 24 || (_DWORD)v5 == 32) && *v4 == 40 )
    {
      v10[0] = *(_DWORD *)(a1 + 18);
      v10[1] = *(_DWORD *)(a1 + 22);
      v6 = BgpGxRectangleCreate(v10, v5, &v11);
      if ( v6 < 0 )
      {
        if ( v11 )
          BgpGxRectangleDestroy(v11);
      }
      else
      {
        v7 = v4;
        v8 = v11;
        BgpGxCopyBitmapToRectangle(v11, v7);
        *a2 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
