/*
 * XREFs of ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800B6A68
 * Callers:
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800CFB88 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CHolographicSlate@@AEAA@XZ @ 0x1800B69D0 (--0CHolographicSlate@@AEAA@XZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800B6B58 (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 */

__int64 __fastcall CHolographicSlate::CreateSlate(
        HWND a1,
        struct CVisual *a2,
        unsigned int a3,
        unsigned int a4,
        struct CHolographicSlate **a5)
{
  unsigned int v9; // edi
  CHolographicSlate *v10; // rax
  CHolographicSlate *v11; // rax
  struct CHolographicSlate *v12; // rbx
  unsigned int v13; // eax

  if ( !a5 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Bu, 0LL);
    return v9;
  }
  v10 = (CHolographicSlate *)operator new[](0x40uLL, a2);
  if ( v10 )
  {
    v11 = CHolographicSlate::CHolographicSlate(v10);
    v12 = v11;
    if ( v11 )
    {
      v9 = CHolographicSlate::Initialize(v11, a1, a2, a3, a4);
      if ( (v9 & 0x80000000) == 0 )
      {
        *a5 = v12;
        return v9;
      }
      v13 = 33;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v9 = -2147024882;
  v13 = 31;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v13, 0LL);
  if ( v12 )
    CBaseObject::Release(v12);
  return v9;
}
