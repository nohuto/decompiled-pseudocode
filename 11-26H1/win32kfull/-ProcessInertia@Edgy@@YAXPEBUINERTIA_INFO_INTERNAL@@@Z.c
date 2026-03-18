/*
 * XREFs of ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14023F1A8
 * Callers:
 *     EditionEdgyProcessInertia @ 0x14023F190 (EditionEdgyProcessInertia.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     _GetPointerDeviceType @ 0x1401D8C20 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1402C3498 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1402C37F4 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall Edgy::ProcessInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2)
{
  __int64 v3; // rbp
  int v4; // eax
  unsigned int i; // edi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  const struct tagRECT *v9; // r8
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19176) + 248LL);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 46) & 8) != 0 && *((float *)this + 5) > 0.0 )
    {
      v4 = *((_DWORD *)this + 6);
      if ( v4 == 1 || v4 == 2 )
      {
        for ( i = 0; i < *(_DWORD *)v3; ++i )
        {
          v6 = *(_QWORD *)(v3 + 8);
          v7 = 32LL * i;
          if ( *(_DWORD *)(v7 + v6 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)(v7 + v6)) - 1) & 0xFFFFFFFD) == 0 )
          {
            v8 = *(_QWORD *)(v7 + v6);
            v10 = 0LL;
            if ( (unsigned int)GetPointerDeviceRects(v8, 0LL, &v10) )
            {
              if ( (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(
                                   this,
                                   (const struct INERTIA_INFO_INTERNAL *)&v10,
                                   v9) )
              {
                Edgy::_PostEdgyInertia(*(_QWORD *)(v7 + v6 + 8), 1LL, *(unsigned int *)(v3 + 272));
                return;
              }
            }
          }
        }
      }
    }
  }
}
