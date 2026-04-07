/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006BF90
 * Callers:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18000BEF0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000DD10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x18006C0F8 (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     floorf @ 0x18009B6C4 (floorf.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rbx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 60) )
  {
    v3 = *((_QWORD *)this + 89);
    v6 = *(_OWORD *)((char *)this + 636);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 212) - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 216) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      LODWORD(v6) = (int)floorf((float)(int)v6 / *(float *)(v3 + 212));
      DWORD1(v6) = (int)floorf((float)SDWORD1(v6) / *(float *)(v3 + 212));
      DWORD2(v6) = (int)floorf((float)SDWORD2(v6) / *(float *)(v3 + 216));
      HIDWORD(v6) = (int)floorf((float)SHIDWORD(v6) / *(float *)(v3 + 216));
    }
    v4 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 60),
           (const struct _MARGINS *)((unsigned __int64)&v6 & -(__int64)((*((_BYTE *)this + 200) & 4) != 0)));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1526u, 0LL);
  }
  return v1;
}
