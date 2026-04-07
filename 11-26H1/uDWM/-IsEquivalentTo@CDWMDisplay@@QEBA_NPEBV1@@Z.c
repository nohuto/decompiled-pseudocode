/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008B694 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAE.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4AB4 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??8@YA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800E5AD8 (--8@YA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  __int64 v6; // r8
  unsigned __int16 *v7; // rax
  int v8; // r8d
  int v9; // edx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
          (_DWORD *)this + 14,
          (_DWORD *)a2 + 14)
    || !(unsigned __int8)operator==((char *)this + 40, (char *)a2 + 40)
    && (v4[2] > *v4 && v4[3] > v4[1] || v5[2] > *v5 && v5[3] > v5[1])
    && (!(unsigned __int8)((__int64 (*)(void))TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite)()
     || !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(v6)) )
  {
    return 0;
  }
  v7 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v8 = *(unsigned __int16 *)((char *)v7 + a2 - this);
    v9 = *v7 - v8;
    if ( v9 )
      break;
    ++v7;
  }
  while ( v8 );
  return !v9
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 220, (char *)a2 + 220, 0x1CuLL)
      && *((_DWORD *)this + 62) == *((_DWORD *)a2 + 62)
      && *((_DWORD *)this + 59) == *((_DWORD *)a2 + 59)
      && *((_DWORD *)this + 63) == *((_DWORD *)a2 + 63)
      && *((_BYTE *)this + 291) == *((_BYTE *)a2 + 291);
}
