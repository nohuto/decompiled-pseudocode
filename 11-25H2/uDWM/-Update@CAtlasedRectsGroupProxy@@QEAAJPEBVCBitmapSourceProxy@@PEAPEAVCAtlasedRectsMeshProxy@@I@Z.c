/*
 * XREFs of ?Update@CAtlasedRectsGroupProxy@@QEAAJPEBVCBitmapSourceProxy@@PEAPEAVCAtlasedRectsMeshProxy@@I@Z @ 0x18000556C
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180004F60 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsGroupProxy::Update(
        CAtlasedRectsGroupProxy *this,
        const struct CBitmapSourceProxy *a2,
        struct CAtlasedRectsMeshProxy **a3,
        unsigned int a4)
{
  void *v4; // rdi
  __int64 v9; // r8
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  unsigned int v12; // ebx
  unsigned __int128 v14; // rax
  __int64 v15; // rbp
  void *v16; // rax
  _DWORD *v17; // rdx
  __int64 v18; // rax

  v4 = 0LL;
  if ( a4 )
  {
    v14 = a4 * (unsigned __int128)4uLL;
    v15 = a4;
    if ( !is_mul_ok(a4, 4uLL) )
      *(_QWORD *)&v14 = -1LL;
    v16 = operator new[](v14, *((const struct std::nothrow_t **)&v14 + 1));
    v4 = v16;
    if ( !v16 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x22u, 0LL);
      goto LABEL_6;
    }
    v17 = v16;
    do
    {
      v18 = (__int64)*a3++;
      *v17++ = *(_DWORD *)(*(_QWORD *)(v18 + 16) + 24LL);
      --v15;
    }
    while ( v15 );
  }
  if ( a2 )
    v9 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  else
    v9 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                 + 560LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          v9,
          v4,
          a4);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2Eu, 0LL);
  else
    v12 = 0;
LABEL_6:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v4, v11);
  return v12;
}
