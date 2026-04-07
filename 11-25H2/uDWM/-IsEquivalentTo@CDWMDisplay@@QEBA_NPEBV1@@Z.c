/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B4F18
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800981B4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B50AC (-IsInfinite@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     memcmp_0 @ 0x1800EB10C (memcmp_0.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 14, (_DWORD *)a2 + 14)
    || (*((_QWORD *)this + 5) != *((_QWORD *)a2 + 5)
     || *((_DWORD *)this + 12) != *((_DWORD *)a2 + 12)
     || *((_DWORD *)this + 13) != *((_DWORD *)a2 + 13))
    && (*((_DWORD *)this + 12) > *((_DWORD *)this + 10) && *((_DWORD *)this + 13) > *((_DWORD *)this + 11)
     || *((_DWORD *)a2 + 12) > *((_DWORD *)a2 + 10) && *((_DWORD *)a2 + 13) > *((_DWORD *)a2 + 11))
    && (!(unsigned __int8)((__int64 (*)(void))TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite)()
     || !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite((char *)a2 + 40)) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 220, (char *)a2 + 220, 0x1CuLL)
      && *((_DWORD *)this + 62) == *((_DWORD *)a2 + 62)
      && *((_DWORD *)this + 59) == *((_DWORD *)a2 + 59)
      && *((_DWORD *)this + 63) == *((_DWORD *)a2 + 63)
      && *((_BYTE *)this + 291) == *((_BYTE *)a2 + 291);
}
