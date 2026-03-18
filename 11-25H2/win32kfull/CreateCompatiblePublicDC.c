/*
 * XREFs of CreateCompatiblePublicDC @ 0x140174D54
 * Callers:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GreGetDCObject @ 0x140174F5C (GreGetDCObject.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, HBITMAP *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  Gre::Base *DCObject; // rax
  __int64 v8; // r9
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v10; // rbp
  __int64 DPIServerInfo; // rax
  HFONT v12; // rbx
  int TextAlign; // eax
  int v14[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (Gre::Base *)GreGetDCObject(a1), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v14, v8)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, v14[1], v14[2], 0, 0LL, 0LL);
  v10 = CompatibleBitmap;
  if ( !CompatibleBitmap || !(unsigned int)GreSetBitmapOwner(CompatibleBitmap, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v10 )
      GreDeleteObject(v10);
    return 0LL;
  }
  GreSelectBitmap(v6, v10);
  DPIServerInfo = GetDPIServerInfo();
  v12 = GreSelectFont(a1, *(HFONT *)(DPIServerInfo + 24));
  GreSelectFont(a1, v12);
  GreSelectFont(v6, v12);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v14[1] - 1), 1LL);
  GreBitBltInternal(v6, 0, 0, v14[1], v14[2], a1, 0, 0, 0xCC0020u, 0, 0);
  result = v6;
  *a2 = v10;
  return result;
}
