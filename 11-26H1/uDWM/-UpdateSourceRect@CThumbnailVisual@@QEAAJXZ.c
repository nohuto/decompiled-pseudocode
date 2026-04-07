/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800CA57C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CDE0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CF94 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18008CFB0 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v1; // r12d
  LONG left; // r14d
  LONG top; // r15d
  CSecondaryWindowRepresentation *v5; // rcx
  int v6; // ebx
  int v7; // esi
  __int64 v8; // r10
  LONG right; // ecx
  __int64 v10; // r10
  _DWORD *v11; // r11
  __int64 v12; // rcx
  LONG v13; // eax
  LONG v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // ebx
  int SystemMetrics; // eax
  int v19; // ecx
  __m128i v20; // xmm6
  int v21; // ebx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  struct tagRECT v26; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 44) )
    return v1;
  left = 0;
  v26 = 0LL;
  top = 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v26.right = CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 45));
    v6 = 0;
    v26.bottom = CSecondaryWindowRepresentation::GetIconicHeight(v5);
    v7 = 0;
    goto LABEL_24;
  }
  v8 = *((_QWORD *)this + 44);
  if ( (*(_BYTE *)(v8 + 36) & 2) != 0 )
  {
    v6 = 0;
    top = *(_DWORD *)(v8 + 60);
    left = *(_DWORD *)(v8 + 56);
    if ( *(_DWORD *)(v8 + 68) - top >= 0 )
      v6 = *(_DWORD *)(v8 + 68) - top;
    right = *(_DWORD *)(v8 + 64);
    v7 = 0;
    v26 = *(struct tagRECT *)(v8 + 56);
LABEL_22:
    v19 = right - left;
    if ( v19 >= 0 )
      v7 = v19;
    goto LABEL_24;
  }
  v6 = 0;
  v7 = 0;
  if ( *((_QWORD *)this + 45) )
  {
    CSecondaryWindowRepresentation::GetRelativeWindowRect(*((CSecondaryWindowRepresentation **)this + 45), &rc);
    v12 = *(_QWORD *)(v10 + 24);
    if ( (*(_BYTE *)(v12 + 740) & 8) != 0
      && !*(_DWORD *)(v10 + 77)
      && v11[18] == 2
      && ((*(_DWORD *)(v12 + 116) & 0x1000000) != 0 || (*(_BYTE *)(v12 + 741) & 1) != 0) )
    {
      rc.right -= *(_DWORD *)(v12 + 304) + *(_DWORD *)(v12 + 308);
      rc.bottom -= *(_DWORD *)(v12 + 312) + *(_DWORD *)(v12 + 316);
    }
    if ( *(_BYTE *)(v10 + 32) )
    {
      v13 = v11[20];
      v14 = v11[21];
      *(_QWORD *)&rc.left = 0LL;
      rc.right = v13;
      rc.bottom = v14;
    }
    else
    {
      v15 = *(_QWORD *)(v10 + 24);
      v16 = *(_QWORD *)(v15 + 40);
      if ( v16 == CWindowList::GetShellWindowForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                    *(_QWORD *)(v15 + 136)) )
      {
        v17 = -GetSystemMetrics(77);
        SystemMetrics = GetSystemMetrics(76);
        OffsetRect(&rc, -SystemMetrics, v17);
      }
    }
    v6 = 0;
    top = rc.top;
    left = rc.left;
    if ( rc.bottom - rc.top >= 0 )
      v6 = rc.bottom - rc.top;
    right = rc.right;
    v26 = rc;
    goto LABEL_22;
  }
LABEL_24:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v20 = *((__m128i *)this + 27);
    v21 = MulDiv(*((_DWORD *)this + 112) - left, *((_DWORD *)this + 110), *((_DWORD *)this + 114))
        + _mm_cvtsi128_si32(v20);
    v22 = MulDiv(*((_DWORD *)this + 113) - top, _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)), *((_DWORD *)this + 115));
    v23 = *((_QWORD *)this + 44);
    rc.left = v21 + *(_DWORD *)(v23 + 40);
    rc.top = v22 + _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) + *(_DWORD *)(v23 + 44);
    CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&rc, v23);
  }
  else
  {
    *((_DWORD *)this + 112) = left;
    *((_DWORD *)this + 113) = top;
    *((_DWORD *)this + 114) = v7;
    *((_DWORD *)this + 115) = v6;
    v24 = CVisualBrush::SetViewbox((CThumbnailVisual *)((char *)this + 368), &v26);
    v1 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x30Fu, 0LL);
  }
  return v1;
}
