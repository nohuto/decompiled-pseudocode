/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800E4530
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E50F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  __int128 v2; // xmm0
  _DWORD *v3; // r11
  int v4; // eax
  CDxHandleYUVBitmapRealization *v5; // r10
  char v6; // bl
  int v7; // ecx
  int v8; // r9d
  const struct CSM_BUFFER_ATTRIBUTES *v9; // r8
  _OWORD *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_OWORD *)((char *)this - 172);
  v3 = (_DWORD *)((char *)this - 32);
  v4 = *((_DWORD *)this - 8);
  v5 = this;
  v6 = 0;
  v7 = *((_DWORD *)this - 22) & 1;
  v8 = *((_DWORD *)a2 + 34) & 1;
  v9 = a2;
  v13 = v2;
  if ( v8 == v7 )
  {
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)v5 - 27) )
      goto LABEL_3;
    v3 = (_DWORD *)((char *)v5 - 32);
  }
  v12 = *((_QWORD *)a2 + 1);
  if ( !v8 || !v12 )
    LODWORD(v12) = -1;
  *v3 = v12;
  if ( v4 != (_DWORD)v12 )
    goto LABEL_11;
LABEL_3:
  if ( *((_DWORD *)a2 + 17) != *((_DWORD *)v5 - 39)
    || *((_DWORD *)a2 + 28) != *((_DWORD *)v5 - 28)
    || *((_DWORD *)a2 + 29) != *((_DWORD *)v5 - 27)
    || operator!=((_DWORD *)a2 + 30, (_DWORD *)v5 - 26) )
  {
LABEL_11:
    v6 = 1;
    v10 = (_OWORD *)((char *)v5 - 224);
  }
  *v10 = *(_OWORD *)v9;
  v10[1] = *((_OWORD *)v9 + 1);
  v10[2] = *((_OWORD *)v9 + 2);
  v10[3] = *((_OWORD *)v9 + 3);
  v10[4] = *((_OWORD *)v9 + 4);
  v10[5] = *((_OWORD *)v9 + 5);
  v10[6] = *((_OWORD *)v9 + 6);
  v10[7] = *((_OWORD *)v9 + 7);
  v10[8] = *((_OWORD *)v9 + 8);
  if ( !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                           &v13,
                           (char *)v10 + 52) )
  {
    *(_BYTE *)(v11 - 8) = 0;
    goto LABEL_17;
  }
  if ( v6 )
LABEL_17:
    CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)(v11 - 328), 0);
}
