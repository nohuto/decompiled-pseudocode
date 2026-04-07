/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x1800983E4
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000DD10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180069580 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, struct _MARGINS *a2)
{
  unsigned int v2; // edi
  void *v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rdx
  struct _MARGINS *v8; // rdx
  struct _MARGINS *v9; // rax

  v2 = 0;
  if ( a2 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 29);
    if ( !v7 )
      goto LABEL_7;
    if ( !operator!=(a2, v7) )
      return v2;
    if ( !v8 )
    {
LABEL_7:
      v9 = (struct _MARGINS *)DefaultHeap::Alloc(0x10uLL);
      *((_QWORD *)this + 29) = v9;
      v8 = v9;
      if ( !v9 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xE6u, 0LL);
        return v2;
      }
    }
    *v8 = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v2;
  }
  v5 = (void *)*((_QWORD *)this + 29);
  if ( v5 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, 0LL);
    v6 = *(_QWORD *)this;
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v6 + 24))(this, 0x2000LL);
  }
  return v2;
}
