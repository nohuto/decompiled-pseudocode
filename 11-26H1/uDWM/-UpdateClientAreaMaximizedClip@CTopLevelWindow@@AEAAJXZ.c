/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18005AC68
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001ED80 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180022B00 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x18005ADB8 (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  float v4; // xmm6_4
  float *v5; // rbx
  __int32 v6; // xmm2_4
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 58) )
  {
    v3 = *((_QWORD *)this + 87);
    v4 = *(float *)(v3 + 212);
    v5 = (float *)(v3 + 216);
    COERCE_FLOAT(v6 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v9 = *(_OWORD *)((char *)this + 620);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & v6) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*v5 - 1.0) & v6) >= 0.0000011920929 )
    {
      LODWORD(v9) = (int)floorf((float)(int)v9 / v4);
      DWORD1(v9) = (int)floorf((float)SDWORD1(v9) / v4);
      DWORD2(v9) = (int)floorf((float)SDWORD2(v9) / *v5);
      HIDWORD(v9) = (int)floorf((float)SHIDWORD(v9) / *v5);
    }
    v7 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 58),
           (const struct _MARGINS *)((unsigned __int64)&v9 & -(__int64)((*((_BYTE *)this + 184) & 4) != 0)));
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1460u, 0LL);
  }
  return v1;
}
